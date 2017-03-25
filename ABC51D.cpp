#include<bits/stdc++.h>
using namespace std;
#define inf 2500
#define Nmax 100

class node{
    public:
    int cost;
    int num;
    node(int cost,int num){
        this->cost=cost;
        this->num=num;
    };
};

bool operator< (const node &node1,const node &node2){
    return node1.cost < node2.cost;
};

bool operator> (const node &node1,const node &node2){
    return node1.cost > node2.cost;
};

void shortest(int **lines,int **dist,int N){
    priority_queue<node, vector<node>, greater<node> > q;
    for(int dep=1;dep<=N;dep++){    
        for(int i=1;i<=N;i++){
            if(lines[dep][i]!=0)
                q.push(node(lines[dep][i],i));
        }

        while(!q.empty()){
            const node& tmp=q.top();
            int num=tmp.num;
            int cost=tmp.cost;
            q.pop();
            for(int i=1;i<=N;i++){
                if(lines[num][i]!=0&&lines[num][i]!=inf){
                    int alt=cost+lines[num][i];
                    if(dist[dep][i]>alt){
                        dist[dep][i]=alt;
                        q.push(node(alt,i));
                    }
                }
            }
        }
    }
}

int main(){
    int N,M;
    cin>>N>>M;
    int a[M+1],b[M+1],c[M+1];
    for(int i=1;i<=M;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    int **lines,**dist;
    lines=new int*[N+1];
    dist=new int*[N+1];
    for(int i=1;i<=N;i++){
        lines[i]=new int[N+1];
        dist[i]=new int[N+1];
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            lines[i][j]=inf;
            dist[i][j]=inf;
            if(i==j){
                lines[i][j]=0;
                dist[i][j]=0;
            }
        }
    }    
    for(int i=1;i<=M;i++){
        lines[a[i]][b[i]]=c[i];
        lines[b[i]][a[i]]=c[i];
        dist[a[i]][b[i]]=c[i];
        dist[b[i]][a[i]]=c[i];
    }
    shortest(lines,dist,N);
    int count=M;
    for(int i=1;i<=M;i++){
        bool inc=false;
        for(int j=1;j<=N;j++){
            for(int k=1;k<=N;k++){
                if(dist[j][a[i]]+lines[a[i]][b[i]]+dist[b[i]][k]==dist[j][k])
                    inc=true;
            }
        }
        if(inc)count--;
    }
    cout<<count<<endl;
    return 0;
}
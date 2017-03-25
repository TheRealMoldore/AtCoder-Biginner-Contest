#include<bits/stdc++.h>
using namespace std;
#define Nmax 100000

class node{
    public:
        int pl;
        int val;
        node(int pl,int val){
            this->pl=pl;
            this->val=val;
        };
};

bool operator> (const node &node1,const node &node2){
    return node1.val > node2.val;
};


int main(){
    int n,a[Nmax],b[Nmax];
    cin>>n;
    priority_queue<node, vector<node>, greater<node> > q;
    for(int i=0;i<n;i++){
        cin>>a[i];
        q.push(node(i,a[i]));
    }
    int res=-1,count=-1;
    while(!q.empty()){
        if(q.top().val!=res){
            count++;
        }
        b[q.top().pl]=count;
        res=q.top().val;
        q.pop();
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }

}
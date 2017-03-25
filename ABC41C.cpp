#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int num;
    int high;
    node(){}
};

bool operator< (const node &node1,const node &node2){
    return node1.high < node2.high;
};

bool operator> (const node &node1,const node &node2){
    return node1.high > node2.high;
};


int main(){
    priority_queue<node,vector<node>,less<node> > q;
    int N;
    cin>>N;
    node a[N+1];
    for(int i=1;i<=N;i++){
        cin>>a[i].high;
        a[i].num=i;
        q.push(a[i]);
    }
    for(int i=1;i<=N;i++){
        cout<<q.top().num<<endl;
        q.pop();
    }
    return 0;
}
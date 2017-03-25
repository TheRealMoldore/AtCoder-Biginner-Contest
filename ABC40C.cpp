#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N+1];
    for(int i=1;i<=N;i++){
        cin>>a[i];
    }
    int cost[N+1];
    cost[1]=0;
    cost[2]=abs(a[2]-a[1]);
    for(int i=3;i<=N;i++){
        cost[i]=min(cost[i-2]+abs(a[i]-a[i-2]),cost[i-1]+abs(a[i]-a[i-1]));
    }
    cout<<cost[N]<<endl;
    return 0;
}
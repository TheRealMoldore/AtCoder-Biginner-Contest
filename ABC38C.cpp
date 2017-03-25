#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    long long count=N;
    int j=1;
    for(int i=0;i<N-1;i=j){
        int cnt=0;
        long long add=0;
        for(j=i+1;j<N;j++){
            if(a[j-1]<a[j]) cnt++;
            else break;
        }
        for(;cnt!=0;cnt--)
            add+=cnt;
        count+=add;
    }
    cout<<count<<endl;
    return 0;
}
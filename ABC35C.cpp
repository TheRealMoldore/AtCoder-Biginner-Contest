#include<bits/stdc++.h>
using namespace std;
#define Qmax 200000

int main(){
    int N,Q,l,r,fi[Qmax];
    cin>>N>>Q;
    for(int i=0;i<N;i++) fi[i]=0;
    for(int i=0;i<Q;i++){
        cin>>l>>r;
        fi[l-1]++;fi[r]--;
    }
    for(int i=1;i<N;i++) fi[i]+=fi[i-1];
    for(int i=0;i<N;i++){
        fi[i]%=2;
        cout<<fi[i]<<flush;
    }
    cout<<endl;
    return 0;
}
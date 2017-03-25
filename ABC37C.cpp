#include<bits/stdc++.h>
using namespace std;
#define Nmax 100000
#define ll long long

int main(){
    int n,k;
    cin>>n>>k;
    ll a[Nmax+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }

    ll ans;
    for(int i=1;i<=n-k+1;i++)
        ans+=a[i+k-1]-a[i-1];    
    cout<<ans<<endl;
    return 0;
}
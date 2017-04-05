#include<bits/stdc++.h>
using namespace std;
#define x 1000000007
#define inmax 100000 
#define ll long long
//Galois field Z_x

ll rev(ll a,ll f){
    if(f==0) return 1;
    ll res=rev(a,f/2);
    if(f%2==0) return (res*res)%x;
    else return (((res*res)%x)*a)%x;
}

int main(){
    int w,h;
    cin>>w>>h;
    ll factary[inmax*2+5];
    factary[0]=1;
    for(int i=1;i<inmax*2+1;i++)
        factary[i]=(factary[i-1]*i)%x;
    ll mole=factary[w-1+h-1];
    ll deno=(factary[w-1]*factary[h-1])%x;
    ll res=(mole*rev(deno,x-2))%x;
    cout<<res<<endl;
}

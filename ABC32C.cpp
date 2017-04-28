#include<bits/stdc++.h>
using namespace std;
#define Nmax 100000

int main(){
    int n,k;


    for(int i=0;i<n;i++){

 
            return 0;
        }

    int count=0;
    double tmp=1;
    for(int lp=0,rp=0;rp<n;){
        tmp*=s[rp++];
        if(tmp>k)
            while(tmp>k){
                tmp/=s[lp++];
                if(lp==rp)break;
            }
        else if(count<rp-lp)count=rp-lp;
    }
    cout<<count<<endl;
    return 0;
}

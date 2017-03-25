#include<bits/stdc++.h>
using namespace std;

void print(int count,char di){
    for(int i=0;i<count;i++){
        cout<<di<<flush;
    }
}

int main(){
    int sx,sy;
    int tx,ty;
    cin>>sx>>sy>>tx>>ty;
    print(ty-sy,'U');
    print(tx-sx,'R');    
    print(ty-sy,'D');
    print(tx-sx,'L');
    print(1,'L');
    print(ty-sy+1,'U');
    print(tx-sx+1,'R');    
    print(1,'D');
    print(1,'R');
    print(ty-sy+1,'D');
    print(tx-sx+1,'L');
    print(1,'U');
    cout<<endl;        
    return 0;
}


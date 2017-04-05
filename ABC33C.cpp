#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin>>S;
    int len=S.size();
    int count=0;
    bool flag=true;
    for(int i=1;i<len+1;i+=2){
        if(S[i-1]=='0') 
            flag=false;
        if(S[i]=='+'){
            if(flag)
                count++;
            flag=true;
        }
    }
    if(flag)count++;
    cout<<count<<endl;
}
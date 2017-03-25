#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    if(s[1]=='W'){
        if(s[6]=='B')
            ans="Mi";
        else
            ans="Si";
    }else if(s[3]=='W'){
        if(s[8]=='B')
            ans="Re";
        else
            ans="La";
    }else if(s[5]=='W'){
        if(s[10]=='B')
            ans="Do";
        else
            ans="So";
    }else{
        ans="Fa";
    }
    cout<<ans<<endl;
    return 0;
}
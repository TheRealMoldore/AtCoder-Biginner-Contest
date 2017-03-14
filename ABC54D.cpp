#include<bits/stdc++.h>
using namespace std;
#define inf 5000
#define perMax 10

int Calc(int *a,int *b,int *c,int N,int Ma,int Mb,int SN,int **frd){
    int **sum;
    sum=new int*[SN*perMax+1];
    for(int i=0;i<=SN*perMax;i++)
        sum[i]=new int[SN*perMax+1];
    for(int i=0;i<=SN*perMax;i++)
            for(int j=0;j<=SN*perMax;j++)
                sum[i][j]=inf;    

    sum[0][0]=0; 
    if(SN==0) return Calc(a,b,c,N,Ma,Mb,SN+1,sum);
    for(int an=0;an<=(SN-1)*perMax;an++)
        for(int bn=0;bn<=(SN-1)*perMax;bn++){
            sum[an][bn] = min(sum[an][bn],frd[an][bn]);
            sum[an+a[SN-1]][bn+b[SN-1]] = min(frd[an][bn]+c[SN-1],sum[an+a[SN-1]][bn+b[SN-1]]);
        }

    if(SN!=N) return Calc(a,b,c,N,Ma,Mb,SN+1,sum);
    int res=inf;
    for(int an=0;an<=N*perMax;an++)
        for(int bn=0;bn<=N*perMax;bn++)
            if((an!=0||bn!=0)&&an*Mb==bn*Ma)res=min(sum[an][bn],res);
    if(res==inf) return -1;
    else return res;
}

int main(){
    int N,Ma,Mb;
    cin>>N>>Ma>>Mb;
    int a[N],b[N],c[N];
    for(int i=0;i<N;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<Calc(a,b,c,N,Ma,Mb,0,NULL)<<endl;
    return 0;
}
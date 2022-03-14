#include <bits/stdc++.h>
using namespace std;

bool rec(int a[],int s,int m){


    if(m==0)return true;

    if(s==0&&m!=0)return false;

    if(a[s-1]>m)
    return rec(a,s-1,m);

    return rec(a,s-1,m)||rec(a,s-1,m-a[s-1]);
}

bool see(int a[],int s,int sum){
    int g[s+1][sum+1];
    for(int i=0;i<=s;i++){
        g[i][0]=1;
    }
    for(int i=1;i<=sum;i++){
        g[0][i]=0;
    }


    for(int i=1;i<=s;i++){
        for(int j=1;j<=sum;j++){
            if(a[s-1]>sum){
                g[i][j]=g[i-1][j];
            }
            else if(a[s-1]<=sum){
                g[i][j]=g[i-1][j]||g[i-1][j-a[s-1]];
            }
        }
        
    }
    return g[s][sum];
}

int main(){
    int b[5]={2,5,6,1,3};
    cout<<see(b,5,17)<<endl;
}
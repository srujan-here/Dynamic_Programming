#include<bits/stdc++.h>
using namespace std;

int minsubsetsum(int a[],int b){
    int sum=0;
    for(int i=0;i<b;i++){
        sum+=a[i];
    }
    int dp[b+1][sum+1];

    for(int i=0;i<=b;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=sum;i++){
        dp[0][i]=0;
    }

    for(int i=1;i<=b;i++){
        for(int j=1;j<=sum;j++){
            if(a[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
            }
        }
    }

    int lm=INT_MAX;

    for(int i=0;i<=sum/2;i++){
        if(dp[b][i]==1){
            
            lm=min(lm,sum-2*i);
        }
    }
    return lm;
}

int main(){
int arr[4]={5,4,3,3};
cout<<minsubsetsum(arr,4)<<endl;
}
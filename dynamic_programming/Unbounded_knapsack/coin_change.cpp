#include<bits/stdc++.h>
using namespace std;


// int tot(int a[],int b,int sum){
//     if(sum==0)
//      return 1;

//      if(b<=0&&sum>=1)
//      return 0;

//      if(a[b-1]>sum)
//      return tot(a,b-1,sum);

//      else if(a[b-1]<=sum)
//      return tot(a,b,sum-a[b-1])+tot(a,b-1,sum);


    


// }

//meme 

int tot(int a[],int b,int sum){
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
                dp[i][j]=dp[i-1][j]+dp[i][j-a[i-1]];
            }
        }
    }
    return dp[b][sum];

}

int main(){
    int sum;
    cin >> sum;
    int a[3]={1,2,3};

    cout<<tot(a,3,sum)<<endl;
}
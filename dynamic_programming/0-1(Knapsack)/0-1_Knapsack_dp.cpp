#include<bits/stdc++.h>
using namespace std;

int knapsack(int a[],int b[],int wt,int s){
    int dp[100][100];
    memset(dp,-1,sizeof(dp));

    if(wt==0||s==0) return 0;

    if(dp[s][wt]!=-1){
        return dp[s][wt];
    }

    

    if(b[s-1]<=wt) 
    return dp[s][wt]=max(a[s-1]+knapsack(a,b,wt-b[s-1],s-1),knapsack(a,b,wt,s-1));

    else if(b[s-1]>wt)
    return dp[s][wt]=knapsack(a,b,wt,s-1);


}
int main(){
   
    int a[3],b[3];
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    for(int i=0;i<3;i++){
        cin >> b[i];
    }
    int wt;
    cin >> wt;

   int t=knapsack(a,b,wt,3);
   cout<<t<<endl;

}
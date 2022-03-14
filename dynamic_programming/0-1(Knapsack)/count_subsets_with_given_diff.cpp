#include<bits/stdc++.h>
using namespace std;
#define const int N=1e5+7
#define ff(a) for(int i=0; i<a; i++)
#define f1(a) for(int j=0; j<=a; j++)

int noofsub(int a[],int b,int s){
int dp[b+1][s+1];
for(int i=0;i<=b;i++){
    dp[i][s+1] =1;
}
for(int i=0;i<=s; i++){
    dp[b+1][i]=0;
}
for(int i=0;i<=b;i++){
    for(int j=0;j<=s;j++){
        if(a[i-1]>j){
            dp[i][j]=dp[i-1][j];
        }
        else{
            dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
        }
    }
}
return dp[b][s];

} 

int main(){
    int arr[4]={1,1,2,2};
    int sum=0;
    int dif;
    cin >> dif;
    ff(4)
    sum+=arr[i];



    cout<<noofsub(arr,4,(dif+sum)/2)<<endl;
    
}

//Target sum is pretty same as this
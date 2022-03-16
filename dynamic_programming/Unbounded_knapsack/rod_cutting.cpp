#include<bits/stdc++.h>
using namespace std;


int maxrodcut(int a[],int b[],int t1,int t2){

    int dp[t1+1][t2+1];
    if(t1==0||t2==0){
        return 0;
    }

    if(b[t2-1]>t1)
    return maxrodcut(a,b,t1,t2-1);

    else if(b[t2-1]<=t1)
    return max(a[t2-1]+maxrodcut(a,b,t1-b[t2-1],t2),maxrodcut(a,b,t1,t2-1));



}

int main(){
    int a[]={ 1, 5, 8, 9, 10, 17, 17, 20 };
    int n=sizeof(a)/sizeof(a[0]);
    int length[n];
    for(int i=0;i<n;i++){
        length[i]=i+1;
    }
    int maxlen=n;

    cout<<maxrodcut(a,length,maxlen,n)<<endl;



    
}
#include<bits/stdc++.h>
using namespace std;
int knapsack(int a[],int b[],int wt,int s){
    if(wt==0||s==0) return 0;

    if(b[s-1]<=wt) 
    return max(a[s-1]+knapsack(a,b,wt-b[s-1],s-1),knapsack(a,b,wt,s-1));

    else if(b[s-1]>wt)
    return knapsack(a,b,wt,s-1);


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
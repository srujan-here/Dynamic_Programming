#include<bits/stdc++.h>
using namespace std;

// int nunberOf(int arr[],int s,int sum){
//     int big[s+1][sum+1];
// 	for (int i = 0; i <= s; i++)
// 		big[i][0] = 1;


// 	for (int i = 1; i <= sum; i++)
// 		big[0][i] = 0;


//     for(int i=1;i<=s;i++){
//         for(int j=0;j<=sum;j++){
//             if(arr[i-1]<=j){
//                 big[i][j]=big[i-1][j]+big[i-1][j-arr[i-1]];
//             }
//             else{
//                 big[i][j]=big[i-1][j];
//             }
//         }
//     }
//     return big[s][sum];


// }


int recc(int arr[],int s,int sum)
{
    if(sum==0){
        return 1;
    }
    if(sum!=0&&s==0){
        return 0;
    }

    if(arr[s-1]>sum){
        recc(arr,s-1,sum);
    }

    return recc(arr,s-1,sum)+recc(arr,s-1,sum-arr[s-1]);
}



int main(){
    int b[4]={1,2,3,3};
    cout<<recc(b,4,6)<<endl;
    

}
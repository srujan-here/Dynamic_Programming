#include<bits/stdc++.h>
using namespace std;

// bool check(int arr[],int s,int m){    //Recursive
// if(m==0){
//     return true;
// }
// if(s==0&&m!=0){
//     return false;
// }

// if(arr[s-1]>m)
// return check(arr,s-1,m);


// return check(arr,s-1,m-arr[s-1])||check(arr,s-1,m);

// }

// bool isSubsetSum(int set[], int n, int sum)     //Top down
// {
	
// 	bool subset[n + 1][sum + 1];

// 	for (int i = 0; i <= n; i++)
// 		subset[i][0] = true;


// 	for (int i = 1; i <= sum; i++)
// 		subset[0][i] = false;

// 	for (int i = 1; i <= n; i++) {
// 		for (int j = 1; j <= sum; j++) {
// 		if(set[i-1]>j){
//             subset[i][j] =subset[i-1][j];
//         }
//         else if(set[i-1]<=j){
//             subset[i][j]=subset[i-1][j]||subset[i-1][j-set[i-1]];
//         }
// 		}
// 	}


// 	return subset[n][sum];
// }


bool equlasum(int arr[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=arr[i];
    }
    if(sum%2!=0){
        return false;
    }
   
        return isSubsetSum(arr,s,sum/2);
    
}

int main(){
    int b[4]={1,3,4,1};
    cout<<equlasum(b,4)<<endl;

}
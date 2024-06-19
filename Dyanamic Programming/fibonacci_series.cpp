/*  2 approach
  
1) top-down  -> recursion + memoization(store the value of subproblem in map/table)
2) buttom-up -> tabulation  
 
 */  

//  // -> Top-down approach

// #include<iostream>
// using namespace std;

// int fibonacci_series(int n , int dp[]){
//     if(n == 0 || n == 1){
//        return n;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     dp[n] = fibonacci_series(n-1 ,dp) + fibonacci_series(n-2 , dp);

//     return dp[n];

// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<=n; i++){
//         arr[i]= -1;
//     }
//     cout<<"The "<<n<<"th fibonacc element is: ";
//     cout<<fibonacci_series(n , arr);
//     return 0;
// }


// //  -> bottom-up approach

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of dp: ";
//     cin>>n;
//     int p;
//     cout<<"Enter the value of p: ";
//     cin>>p;
//     int dp[n+1];
//     dp[1] = 1;
//     dp[0] = 0;
//     for(int i=2;i<=n;i++){
//         dp[i] = dp[i-1] + dp[i-2];
//         }
//         cout<<"The "<<p<<"th element is: "<<dp[p];
//     return 0;
// }

// space optimation

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int prev1 = 0;
    int prev2 = 1;
    
    if(n == 0){
        cout<<"The "<<n<<"th element is: "<<prev1;
    }
    for(int i=2;i<=n;i++){
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    cout<<"The "<<n<<"th element is: "<<prev2;
    return 0;
}
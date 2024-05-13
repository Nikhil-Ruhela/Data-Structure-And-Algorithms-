#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans = 0;
    cout << "Enter the number" << endl;
    cin >> n;
   
    for(int i = 0; n != 0; i++){
        int digit = n%10;
        ans = (digit*pow(2,i)) +ans;
        n = n/10;

    }
    cout<<ans;
    return 0;
}
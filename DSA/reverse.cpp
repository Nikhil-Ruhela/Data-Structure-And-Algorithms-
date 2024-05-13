#include<iostream>
using namespace std;
#include<math.h>


int main(){
    int n,ans = 0;
    cout << "Enter the number" << endl;
    cin >> n;

     for(int i = 1; n!=0;i++){
        int digit = n%10;
        ans = (ans*10) + digit;
        
        n = n/10;
    }
    if(ans>pow(2,-31) || ans<(pow(2,31))-1){
        cout<<ans;
    }
    else
    cout << 0;
    return 0;
}


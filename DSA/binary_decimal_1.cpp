#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    for(int i = 0; n != 0; i++){
    int bit = n & 1;
    ans = (bit * pow(10,i)) + ans;
    n = n>>1;

    }
    
    cout<<ans<<endl;
    return 0;
}
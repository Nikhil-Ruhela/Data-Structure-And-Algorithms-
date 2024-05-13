#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, product = 1;

    cout << "Enter the number" << endl;
    cin >> n;
    
    
    for(int i =1; n!=0;i++){
          int digit = n%10;
        product = product*digit;
        sum= sum + digit;
        n = n/10;
    }

        int ans = product-sum;

        cout<<ans<<endl;

    return 0;
}
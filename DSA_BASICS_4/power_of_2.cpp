#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,count;
    count=1;
    cout << "Enter the number" << endl;
    cin >> n;

    
    for(int i = 0;i<=n;i++){
        if(n==pow(2,i)){
           cout<<"N is a power of 2"<<endl;
           break;
         count=1;
        }
        else{
      count++;
       }
         }
        if (count!=1)
        {
            cout<<"N is not a power of 2"<<endl;
        }
        


    return 0;
}
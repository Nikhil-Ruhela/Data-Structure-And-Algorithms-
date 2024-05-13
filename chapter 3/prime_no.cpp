


/*to check wheather the given no. is prime or not*/

#include<iostream>
using namespace std;

int main(){
      int a;
    cout<<"Enter the value of a"<<" ";
    cin>>a;
     for(int j =2;j<a;j++){
            if(a%j==0){
                cout<<"it is not a prime no."<<endl;
               break;
                }
                else if(a==j+1){
        
                cout<<"it is a prime no."<<endl;
                    
                }
            }
    
    return 0;
} 

/*to find all prime no. between two nu.*/

#include<iostream>
 using namespace std;

 int main(){
      int a, b;
     cout<<"Enter the value of a"<<" ";
     cin>>a;
     cout<<"Enter the value of b"<<" ";
     cin>>b;

     for(int i = a; i<b;i++){
         for(int j =2;j<i;j++){
             if(i%j==0){
                break;
                 }
                else if(i==j+1){
        
                     cout<<i<<endl;
                 }
             }
    

         }
     return 0;
 }


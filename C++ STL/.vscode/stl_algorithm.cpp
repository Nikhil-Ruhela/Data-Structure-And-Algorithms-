#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    vector<int>v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    v.push_back(12);

    cout<<"Finding 6-> "<<binary_search(v.begin(), v.end() , 6)<<endl;
    cout<<"Finding 7-> "<<binary_search(v.begin(), v.end() , 7)<<endl;
    cout<<endl<<endl;

    cout<<"Lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

   int a = 3; 
   int b = 5;

   cout<<"maximum "<<max(a,b)<<endl;
   cout<<"minimum "<<min(a,b)<<endl;
   swap(a,b);
   cout<<"After swap"<<endl;
   cout<<"New a "<<a<<endl<<"New b "<<b<<endl;

   string s = "abcdefgh";
   reverse(s.begin(),s.end());
   cout<<"reverse string "<<s<<endl;

   rotate(v.begin(),v.begin()+1 , v.end());
   cout<<"After rotate"<<endl;
   for(auto i:v){
    cout<<i<<" ";
   }cout<<endl<<endl;

   cout<<"After sort"<<endl;
   sort(v.begin(),v.end());
   for(auto i:v){
    cout<<i<<" ";
   }




    return 0;
}
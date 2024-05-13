// pair is used to maintain relations
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>p;  // decleraation of pair

    p = make_pair(1,"Nikhil");  // inilication of pair
    p = {2 , "Ruhela"};        // inilication of pair
    pair<int,string> p1 = p; //copy of p1 is given to p 
    pair<int,string> &p2 = p; // value of p2 is given by refrence
    p1.first = 3;
    cout<<p.first<<" "<<p.second<<endl; // output of pair

    pair<int,int>p_array[3];
    p_array[0]; //= {1,2};
    p_array[1]; //= {3,4};
    p_array[2]; //= {5,6};
    
    cout<<"Enter value of array "<<endl;
    for(int i=0;i<=2;i++){
        cin>>p_array[i].first;
        cin>>p_array[i].second;
    }
    for(int i=0;i<=2;i++){
    cout<<p_array[i].first<<","<<p_array[i].second<<endl;
    }
    

    return 0;
}
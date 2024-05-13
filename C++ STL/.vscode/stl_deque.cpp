#include<iostream>
using namespace std;
#include<deque>

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(4);

    cout<<"first index element\t"<<d.at(0)<<endl;
    
    cout<<"front\t"<<d.front()<<endl;
    cout<<"back\t"<<d.back()<<endl;
    cout<<"empty or not\t"<<d.empty()<<endl;
    cout<<"before erase\t"<<d.size()<<endl; 
    for(int i:d){
        cout<<i<<endl;
     }

    d.erase(d.begin() , d.begin()+1);
    d.erase(d.begin()+2 , d.begin()+3 );

     cout<<"after erase\t"<<d.size()<<endl;

     for(int i:d){
        cout<<i<<endl;
     }


    

    return 0;
}
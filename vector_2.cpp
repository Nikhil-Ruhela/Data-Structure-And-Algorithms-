#include<iostream>
#include<vector>
using namespace std;

// function to print vector
// vector is of dynamic size , its size changes according to input , we can get its size by vector_name.size();
void print_vector(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}  
int main(){
    vector<int>v;
    cout<<"Enter size of vector: "<<endl;
    int n;   //n = size of vector
    cin>>n; // input of size
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter "<<i+1<<" element of vector:"<<" ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"Elements of vector:"<<" ";
    print_vector(v);

    vector<int>v1(5 , 3); //all 5 values of vector become 5 // we can declear vector like this,we can increase or decrease the size of vector
    v1.push_back(8);   // by appling this its size become 6;
    v1.pop_back();       //  by appling this its size become 4 , it remove the last element of vector
    print_vector(v1);

    vector<int>v2;
    v2.push_back(10);
    v2.push_back(20);

    vector<int>v3 = v2;  // time compalixity = O(n) due to formation of copy
    v3.push_back(15);
    print_vector(v2);
    print_vector(v3);

    return 0;
}
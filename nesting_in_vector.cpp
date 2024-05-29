#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<pair<int,int>>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
    }
}  
   // function to print array of vector and vector of vector
void print_vector(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
} 
int main(){
//     // vector of pair
//     vector<pair<int,int>>v = {{1,2},{2,3},{3,4}};  // each element of a vector store pair of 2 values
//     print_vector(v);

//    vector<pair<int,int>>v1;
//    int n;
//    cout<<"Enter size of vector:"<<" ";
//    cin>>n;
//    cout<<"Enter value of x and y:"<<" ";
//    for(int i=0;i<v.size();i++){
//         int x,y;
//         cin>>x>>y;
//         // v1.push_back({x,y});    
//           // OR
//         v1.push_back(make_pair(x,y));
//         }
//     print_vector(v);
    
    // array of vector
    // int N;  // N = no. of vectors
    // cout<<"Enter No. of vector:"<<" ";
    // cin>>N;
    // vector<int>v3[N];
    // for(int i=0;i<N;i++){
    //     cout<<"Enter size of  array"<<" "<<i+1<<": ";
    //     int n;
    //     cin>>n;
    //     for(int j=0;j<n;j++){
    //         int x;
    //         cout<<"Enter the value of"<<" "<<j<<" "<<"th index of array"<<i+1<<": ";
    //         cin>>x;
    //         v3[i].push_back(x);
    //     }
    // }
    // for(int i =0;i<N;i++){
    //     print_vector(v3[i]);
    // }

//    vector of vector
    int N;  // N = no. of vectors
    cout<<"Enter No. of vector:"<<" ";
    cin>>N;
    vector<vector<int>>v4;
    for(int i=0;i<N;i++){   // for array we use N ;
        cout<<"Enter size of  vector"<<" "<<i+1<<": ";
        int n;
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++){
            int x;
            cout<<"Enter the value of"<<" "<<j<<" "<<"th index of vector"<<i+1<<": ";
            cin>>x;
            temp.push_back(x);  // pushing the value of vector in temp vector
        }
        v4.push_back(temp);  // pushint the temp vector in v4 to make vector of vector
    }
    v4[0].pop_back();
    // v4[0].push_back(10);
    for(int i =0;i<v4.size();i++){  // for vector we use v.size();
        print_vector(v4[i]);
    }
    return 0;
}
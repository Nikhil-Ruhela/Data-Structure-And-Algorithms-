#include<iostream>
using namespace std;

int main(){
     int row ;
     cout<<"Enter the no of rows"<<endl;
     cin>>row;

     int col ;
     cout<<"Enter the no of col"<<endl;
     cin>>col;


    // creating 2d array

     int** arr = new int*[col];
     for(int i=0;i<row;i++){
        arr[i] = new int[row];
    }
    
    // taking input
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];

        }
    }

    // taking output
    cout<<"Printing the matrix "<<endl;
     for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

     //releasing memory
    
    for(int i=0;i<row;i++){
        delete [] arr[i]; 
    }
    delete []arr;

    return 0;
}
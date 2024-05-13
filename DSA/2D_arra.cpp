#include <iostream>
using namespace std;

bool is_present(int arr[][3] , int target, int row,int col){ // we have to specify the no. of col 
         for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target)
            return 1;
        }

    }
    return 0;
}


//  printing row wise sum
void print_rowsum(int arr[][3] ,int row,int col){
 cout<<"printing row wise sum"<<endl;

     for(int row=0;row<3;row++){
    int sum = 0;
    for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
     cout<<sum<<endl;
    }
    cout<<endl;
}


//  printing col wise sum
void print_colsum(int arr[][3] ,int row,int col){
 cout<<"printing col wise sum"<<endl;
  
   for(int col=0;col<3;col++){
    int sum = 0;
    for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
     cout<<sum<<endl;
    }
    cout<<endl;
}

int largest_row_sum(int arr[][3] , int row , int col){
    int maxi = 0;
    int row_index = 0;

    for(int row=0;row<3;row++){
    int sum = 0;
    for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
     if(sum>maxi){
        maxi = sum;
        row_index = row;
     }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return row_index ;
}


int main()
{
    int arr[3][3] = {9,8,7,6,5,4,3,2,1};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};



    // taking input --> row wise input
    //  cout<<"Enter the element"<<endl;
      
    //  for(int row=0;row<3;row++){
    //     for(int col=0;col<3;col++){
    //         cin>>arr[row][col];
    //     }

    // }


    // // taking input --> col wise input

    // for(int col=0;col<3;col++){
    //     for(int row=0;row<3;row++){
    //         cin>>arr[row][col];
    //     }

    // }

    // for output
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;

    if(is_present(arr , target , 3,3)){
        cout<<"Element found"<<endl;

    }
    else 
    cout<<"Element not found"<<endl;

    print_rowsum(arr , 3,3);
    print_colsum(arr ,3,3);
    int ans = largest_row_sum(arr , 3,3);
    cout<<"Maximum row is at indus "<<ans<<endl;

    return 0;
}




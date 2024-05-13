#include<iostream>
#include<stack>
#include<vector>
using namespace std;


bool knows(vector<vector<int>>&M , int a , int b){
     if(M[a][b]==1){
        return true;
     }
     else{
        return false;
     }
}

int celebrity(vector<vector<int>>&M , int n){
  stack<int>s;
//   step 1: push all elements in stack
for(int i=0; i<n; i++){
    s.push(i);
}
// step 2: get 2 elements and compare them
while(s.size()>1){
    int a = s.top();
    s.pop();
    int b = s.top();
    s.pop();

    if(knows(M ,a ,b )){
        s.push(b);
    }
    else{
        s.push(a);
    }
    }
    int ans = s.top();

    // step 3: single element in stack is potential celebrity
    // so verify it 
    int zerocount = 0;

    for(int i=0; i<n; i++){
    if(M[ans][i]==0){
        zerocount++;
    }
    }
    if(zerocount != n){
       return -1;
    }

    int onecount = 0;
    for(int j=0;j<n;j++){
        if(M[j][ans]==1){
         onecount++;
        }
    }
    if(onecount != n-1){
      return -1;
    }
   return ans;
}
// };
int main(){
    vector<vector<int>> twoDVector;

    // Taking input for a 2-dimensional vector
    int numRows, numCols;
    cout << "Enter number of rows: ";
    cin >> numRows;
    cout << "Enter number of columns: ";
    cin >> numCols;

    // Input the 2-dimensional vector
    for (int i = 0; i < numRows; ++i) {
        std::vector<int> row;
        for (int j = 0; j < numCols; ++j) {
            int element;
            cout << "Enter element at row " << i << ", column " << j << ": ";
            cin >> element;
            row.push_back(element);
        }
        twoDVector.push_back(row);
    }

    int output = celebrity(twoDVector ,numRows);
    
    // vector<vector<int>> outputVector = celebrity(twoDVector ,numRows);
    // // Output the 2-dimensional vector
    // cout << "Output 2-dimensional vector:" <<endl;
    // for (const auto& row : outputVector) {
    //     for (const auto& element : row) {
    //         cout << element << " ";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

vector<int> spiral_matrix(int mat[][3] ,int row,int col){
    int row = mat.size();
    int col = mat[0].size();
    int first_row = 0;
    int first_col = 0;
    int last_row = row-1;
    int last_col = col-1;
    vector<int>ans;
    while ((first_row <= last_row) && (first_col<=last_col)){

        for(int i = first_col ; i<=last_col;i++){
            ans.push_back(mat[first_row][i]);
        }
        first_row++;

        for(int i = first_row;i<=last_row;i++){
            ans.push_back(mat[i][last_col]);
        }
        last_col--;

        if(first_row<last_row){
            for(int i = last_col;i>=first_col;i--){
             ans.push_back(mat[last_row][i]);
            }
            last_row--;
        }
       if(first_col<last_col){
        for(int i=last_row;i>first_row;i--){
            ans.push_back(mat[i][first_col]);
        }
        first_col++;
       }
    }
    return ans;
}
int main(){
    int ans;
    int arr[3][3]= {1,2,3,4,5,6,7,8,9};
   cout<<ans;
    return 0;

    
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][3]= {1,2,3,4,5,6,7,8,9};

    vector<int>ans;

    for (int col = 0; col < 3; col++)
    {
        if (col & 1)
        {
            // odd index -> bottom to top

            for (int row = 2; row >= 0; row--)
            {
                cout << arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
            
        }
        else{
            // even index -> top to bottem
            for(int row = 0; row<3;row++){
                cout << arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
                

            }
        }
    }

    return 0;
}
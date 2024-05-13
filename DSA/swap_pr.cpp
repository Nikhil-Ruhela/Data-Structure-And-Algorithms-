//    FIRST METHOD
// ====================

#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<",";
    }
}
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
   
    swapalternate(arr, 6);
    
    printarray(arr, 6);
    return 0;
}
 



//    SECOND METHOD
// =====================

// #include <iostream>
// using namespace std;

// void swapalternate(int arr[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }
// int main()
// {
//     int arr[6] = {1,2,3,4,5,6};
   
//     swapalternate(arr, 6);
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] <<",";
//     }
    
//     return 0;
// }
#include<iostream>
using namespace std;
void swap(int *x , int *y)
{
// int temp , x,y;
 int temp = *x;
 *x = *y;
 *y = temp;
 }
int main(){
    int x , y;
    x = 10;
    y = 20;
    swap(&x ,&y);
    cout<<x<<endl<<y<<endl;
    return 0;
}
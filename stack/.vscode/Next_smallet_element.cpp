#include<iostream>
#include<stack> 
#include<vector>
using namespace std;

vector<int> next_small_element(vector<int>&arr , int size){
    stack<int>s;
    s.push(-1);
    vector<int>ans(size);

    for(int i = size-1; i>=0;i--){
        int curr = arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
int main(){
    vector<int> inputVector;
    int inputSize;
    cout << "Enter the size of the vector: ";
    cin >> inputSize;
    
    cout << "Enter the elements of the vector:" << std::endl;
    for (int i = 0; i < inputSize; ++i) {
        int element;
        cin >> element;
        inputVector.push_back(element);
    }

    // Call the vector function with the input vector
    vector<int> outputVector = next_small_element(inputVector,inputSize);

    // Print the output vector
    cout << "Output vector: ";
    for (int i = 0; i < outputVector.size(); ++i) {
        cout << outputVector[i] << " ";
    }
    cout << endl;
    
     return 0;
} 

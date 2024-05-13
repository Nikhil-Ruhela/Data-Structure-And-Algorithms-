#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> sum_two_No(vector<int> &nums , int target){
unordered_map<int , int> elements_in_pair;

for(int i = 0;i< nums.size(); i++){
    int second_element = target - nums[i];
   
   auto number = elements_in_pair.find(second_element);

   if(number != elements_in_pair.end()){
    return {number->second , i};
   }
}
}


int main(){
    
    return 0;
}
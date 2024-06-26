#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

string first_non_repeating_character_in_string(string A){
    unordered_map<char , int>count;
    queue<int>q;
    string ans = "";
    for(int i=0;i<A.length();i++){
        char ch = A[i];
      
        count[ch]++;
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()]>1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
        }
        return ans;
    }
    
int main(){
    // queue<string>q;
    string s;
    cout<<"Enter your string: ";
    cin>>s;
    cout<<first_non_repeating_character_in_string(s);

    return 0;
}


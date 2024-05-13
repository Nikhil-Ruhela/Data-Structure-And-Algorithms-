#include<iostream>
#include<stack>
using namespace std;

bool find_redundant_brackets(string &s){
    stack<char>st;
    for(int i = 0;i<s.length();i++){
    char ch = s[i];
    if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        st.push(ch);
    }
    else{
        if(ch == ')'){
            bool isredundant = true;
            while(st.top() != '('){
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top == '/'){
                    isredundant = false;
                }
                st.pop();
            }
            if(isredundant == true){
                return true;
            }
        }
    }
    }
       return false;
}
int main(){
    stack<char>s;
    string str;
    cout<<"Enter Your Letter "<<endl;
    cin>>str;
 
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
    }


   find_redundant_brackets(str);
    return 0;
}
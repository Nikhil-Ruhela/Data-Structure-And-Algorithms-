#include <iostream>
#include <stack>
using namespace std;

// bool isvalid_parenthesis(string character)
void isvalid_parenthesis(string character)

{
    stack<int> s;

    for (int i = 0; i < character.length(); i++)
    {
        char ch = character[i];
        // if opening bracket stack push
        // if closing bracket stacktop check and pop

        if (ch == '{' || ch == '[' || ch == '(')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char top = s.top();
                if (ch == ')' && top == '(' ||
                    ch == ']' && top == '[' ||
                    ch == '}' && top == '{')
                {
                    s.pop();
                }
                else
                {
                    cout<<"parenthesis is not balanced "<<endl;
                    // return false;
                }
            }
            else
            {
                cout<<"parenthesis is not balanced "<<endl;
                // return false;
            }
        }
    }
    if (s.empty())
    {
        cout<<"parenthesis is balanced "<<endl;
        // return true;
    }
    else
    {
        cout<<"parenthesis is not balanced "<<endl;
        // return false;
    }
}
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top();
    }
    cout<<endl;
}
int main(){
    stack<char>s;
    string str;
    cout<<"Enter Your Letter "<<endl;
    cin>>str;
 
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        // isvalid_parenthesis(str);
    }
        isvalid_parenthesis(str);

    // print(s.top());
    return 0;
}
#include <iostream>
using namespace std;
bool palindrome(string s)
{
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            s.push_back(s[j]);
        }
    }
}
bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char tolowercase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch>='0' && ch<= '9')) 
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a'; // to convert upper case to lower case
        return temp;
    }
}
int main()
{

    return 0;
}
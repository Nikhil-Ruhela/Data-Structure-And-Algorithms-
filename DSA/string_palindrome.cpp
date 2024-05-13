#include <iostream>
using namespace std;

char touppercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'a' + 'A'; // to convert lower case to upper case
        return temp;
    }
}

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a'; // to convert upper case to lower case
        return temp;
    }
}
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool check_palindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    for (int i = 0; s < e; i++)
    {
        if (tolowercase(name[s]) != tolowercase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;      //how to skip special character ??
            e--;     
        }
    }
    return 1;
}
int main()
{
    char name[10];
    cout << "Enter ur name " << endl;
    cin >> name;
    cout << "your name is " << name << endl;

    int len = getlength(name);
    cout << "length " << getlength(name) << endl;
    cout << check_palindrome(name, len) << endl;

    cout << "Character " << tolowercase('b') << endl;
    cout << "Character " << tolowercase('C') << endl;
 
    string s = "nik'\0'hil";
    cout<<s;
    return 0;
}
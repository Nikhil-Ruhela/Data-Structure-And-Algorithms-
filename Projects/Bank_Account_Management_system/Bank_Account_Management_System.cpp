#include <iostream> // it is use of input output
#include <fstream>  // it is use of file handling
#include <sstream>  // it is use to convert any data type into string
#include <windows.h>
using namespace std;
//  define class of account
class Account{
private:
    string AccountNo, Password;
    int Balance;

public:
    Account() : AccountNo(""), Password(""), Balance(0) {}

    // Function to set account No.
    void setAccountNo(string id)
    {
        AccountNo = id;
    }
    // Function to set password
    void setPassword(string password)
    {
        Password = password;
    }
    // Function to set balence
    void setBalance(int balance)
    {
        Balance = balance;
    }
    // Function to get Account No.
    string getAccountNo()
    {
        return AccountNo;
    }
    // Function to get password
    string getPassword()
    {
        return Password;
    }
    // Function to get balance
    int getBalance()
    {
        return Balance;
    }
   
};

 // function to open account
    void Open_Account(Account user)
    {
        system("cls");
        string id, password;

        cout << "\t Enter Account No.: ";
        cin >> id;
        user.setAccountNo(id);

        cout << "\t Enter A Strong Password:";
        cin >> password;
        user.setPassword(password);

        user.setBalance(0);
        ofstream outfile("D:/Account.txt", ios::app); // ios::app => a new value is save in place of previous value
        if (!outfile)
        {
            cout << "\t Errot: File Can't Open" << endl;
        }
        else
        {
            outfile << "\t" << user.getAccountNo() << " : " << user.getPassword() << " : " << user.getBalance() << endl
                    << endl;
            cout << "\t Account Created Successfuly!" << endl;
        }
        outfile.close();
        Sleep(3000);
    }

    void Add_Case(){
        system("cls");
        string id;
        cout<<"\t Enter Account No: "<<endl;
        cin>>id;
        
        ifstream infile("D:/Account.txt");   // to read the data from the file we use ifstream and for write data in file we use ofstream
        ofstream outfile("D:/Account Temp.txt");
        if(!infile || !outfile){
            cout<<"\t Error: File can't open!"<<endl;
        }
        string line;
        bool found = false;
        while(getline(infile,line)){
            stringstream ss;
            ss<<line;
            string user_ID , user_password;
            int user_Balance;
            char delimiter;

            ss>>user_ID>>delimiter>>user_password>>delimiter>>user_Balance;         // delimiter is use to seperat one value to other
            if(id == user_ID){
                found = true;
                int cash;
                cout<<"\t Enter cash: "<<endl;
                cin>>cash;

                int new_Balance = user_Balance + cash;
                user_Balance = new_Balance;
                outfile<<"\t"<<user_ID<<" : "<<user_password<<" : "<<user_Balance;
                cout<<"\t New Balance is : "<<user_Balance<<endl;
            }
            else{
                outfile<<line<<endl;
            }
        }
        if(!found){
            cout<<"\t Enter Valid Account NO !"<<endl;
        }
        outfile.close();
        infile.close();
        remove("D:/Account.txt");
        rename("D:/Account Temp.txt","D:/Account.txt");
        Sleep(3000);
    }

    void Withdraw(){
        string id , password;

        cout<<"\t Enter AccountNo: "<<endl;
        cin>>id;

        cout<<"\t Enter Password: "<<endl;
        cin>>password;

        ifstream infile("D:/Account.txt");   
        ofstream outfile("D:/Account Temp.txt");
        if(!infile || !outfile){
            cout<<"\t Error: File can't open!"<<endl;
        }
        string line;
        bool found = false;
        while(getline(infile,line)){
            stringstream ss;
            ss<<line;
            string user_ID , user_password;
            int user_Balance;
            char delimiter;

            ss>>user_ID>>delimiter>>user_password>>delimiter>>user_Balance; 

            if(id== user_ID && password == user_password){
                found = true;
                int cash;
                cout<<"\t Enter Amount to we Withdrow: "<<endl;
                cin>>cash;
                if(user_Balance >= cash){
                int new_Balance = user_Balance - cash;
                user_Balance = new_Balance;
                outfile<<"\t"<<user_ID<<" : "<<user_password<<" : "<<user_Balance;
                cout<<"\t Transaction Was Successful !"<<endl;
                cout<<"\t Remaining Balance is : "<<user_Balance<<endl;
                }
                else{
                    cout<<"\t Sorry , Insuficent Balance !"<<endl;
                    outfile<<"\t"<<user_ID<<" : "<<user_password<<" : "<<user_Balance;
                }
            }
            else{
                outfile<<line<<endl;
        }
    }
     if(!found){
            cout<<"\t Invalid Account No Or Password !"<<endl;
        }
        outfile.close();
        infile.close();
        remove("D:/Account.txt");
        rename("D:/Account Temp.txt","D:/Account.txt");
        Sleep(3000);
    }
    
int main()
{
    Account user;

    bool exit = false;
    while (!exit)
    {
        system("cls"); // it is use to hide previous output
        int val;
        cout << "\t Welcome To Bank Account Management System " << endl;
        cout << "\t********************************************" << endl;
        cout << "\t 1.Open New Account." << endl;
        cout << "\t 2.Add Case." << endl;
        cout << "\t 3.Withdraw Case." << endl;
        cout << "\t 4.Exit." << endl;
        cout << "\t Enter Your Choice" << endl;
        cin >> val;
        if (val == 1)
        {
            Open_Account(user);
        }
        else if(val == 2){
            Add_Case();
        }
        else if(val == 3){
            Withdraw();
        }
        else if(val == 4){
            system("cls");
            exit = true;
            cout<<"\t Good Luck!"<<endl;
            Sleep(2000);
        }
        Sleep(2000);
    }
    return 0;
}
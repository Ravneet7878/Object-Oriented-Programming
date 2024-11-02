/* Write a program showing ATM functionalities using Object Oriented Programming 
1. Check Balance
2. Cash Withdraw
3. User Details 
4. Update Mobile Number 
5. Exit */

#include <bits/stdc++.h>
using namespace std;

class ATM
{
    private:
    long long account_no;
    string name;
    int pin;
    double balance;
    string mobile_no;
    
    public:
    void set_data(long long acc, string s, int PIN, double bal, string str)
    {
        account_no = acc;
        name = s;
        pin = PIN;
        balance = bal;
        mobile_no = str;
    }
    
    public:
    long long get_account_no() {return account_no;}
    string get_name() {return name;}
    int get_pin() {return pin;}
    double get_balance() {return balance;}
    string get_mobile_no() {return mobile_no;}
    
    public:
    void cash_withdraw(double amount)
    {
        if(amount && amount <= balance)
        {
            balance -= amount;
            cout << endl;
            cout << "Please Collect Your Cash" << endl;
            cout << "Available Balance : " << balance << endl;
            cout << endl;
            cin.ignore(); // Clear the newline character left in the buffer
            cin.get(); // Used to hold the screen until user press any key
        }
        
        else
        {
            cout << "Invalid Input or Insufficient Balance" << endl;
            cin.ignore();
            cin.get();
        }
    }
    
    public:
    void set_mobile_no(string mobile_prev, string mobile_new)
    {
        if(mobile_prev == mobile_no)
        {
            mobile_no = mobile_new;
            cout << "Sucessfully Updated The Mobile Number" << endl;
            cout << endl;
            cin.ignore();
            cin.get();
        }
        
        else cout << "Incorrect Old Mobile Number" << endl;
    }
};

int main() 
{
    int choice = 0, enter_pin;
    long long enter_account_no;
    
    system("cls"); // Used to clear the screen
    
    ATM user1;
    user1.set_data(1234567, "Ravneet", 1234, 10000.10, "011-25532553");
    
    do
    {
        system("cls");
        
        cout << "***** Welcome To The ATM *****" << endl;
        cout << "Enter Your Account Number : ";
        cin >> enter_account_no;
        cout << endl;
        cout << "Enter Your PIN : ";
        cin >> enter_pin;
        cout << "\n\n";
        
        if((enter_account_no == user1.get_account_no()) && (enter_pin == user1.get_pin()))
        {
            do
            {
                int withdraw_amount = 0;
                string old_mobile_no, new_mobile_no;
                
                system("cls");
                
                cout << "***** Welcome To The ATM *****" << endl;
                cout << "Select The Option :-" << endl;
                cout << "1. Check Balance" << endl;
                cout << "2. Cash Withdraw" << endl;
                cout << "3. User Details" << endl;
                cout << "4. Update Mobile Number" << endl;
                cout << "5. Exit" << endl;
                cin >> choice;
                cout << endl;
                
                switch(choice)
                {
                    case 1: 
                        cout << "Your Current Balance : " << user1.get_balance() << endl;
                        cin.ignore();
                        cin.get();
                        break;
                    
                    case 2:
                        cout << "Enter The Amount : ";
                        cin >> withdraw_amount;
                        user1.cash_withdraw(withdraw_amount);   
                        break;
                        
                    case 3:
                        cout << "User Details Are :-";
                        cout << "   Account Number : " << user1.get_account_no() << endl;
                        cout << "   Name : " << user1.get_name() << endl;
                        cout << "   Balance : " << user1.get_balance() << endl;
                        cout << "   Mobile Number : " << user1.get_mobile_no() << endl;
                        cin.ignore();
                        cin.get();
                        break;
                        
                    case 4:
                        cout << "Enter Old Mobile Number : ";
                        cin >> old_mobile_no;
                        
                        cout << "Enter New Mobile Number : ";
                        cin >> new_mobile_no;
                        
                        user1.set_mobile_no(old_mobile_no, new_mobile_no);
                        break;
                        
                    case 5:   
                        exit(0);
                        
                    default:
                        cout << "Enter Valid Data" << endl;
                }
            }
            while(1);
        }
    } 
    while(1);
    
    return 0;
}
#include <iostream>

using namespace std;

class BankAccount{
private:
    string account_number;
    string account_name;
    string account_type;
    long double current_balance;
    long double minimum_balance;
public:
    BankAccount(string account_number,string account_name, string account_type, long double current_balance, long double minimum_balance){
        this->account_number = account_number;
        this->account_name = account_name;
        this->account_type = account_type;
        this->current_balance = current_balance;
        this->minimum_balance = minimum_balance;
    }
    void set_name(string name){
        account_name = name;
    }
    void set_acc_num(string num){
        account_number = num;
    }
    void set_type(string type){
        account_type = type;
    }
    void set_balance(long double balance){
        current_balance = balance;
    }
    void set_min_bal(long double balance){
        minimum_balance = balance;
    }
    void show_info(){
        cout << "Account Number: " << account_number << endl;
        cout << "Account Name: " << account_name << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Current Balance: " << current_balance << endl;
        cout << "Minimum Balance: " << minimum_balance << endl;
    }
    void showbalance(){
        cout << "Current Balance: " << current_balance << endl;
    }
    void withdraw(long double money){
        if(money <0){
            cout << "Negative amount cannot be withdrawn" << endl;
        }
        else if(current_balance - money < minimum_balance){
            cout << "This transaction is not possible" << endl;
        }
        else{
            current_balance -= money;
        }
    }
    void deposit(long double money){
        if(money < 0) cout << "Negative amount cannot be deposited" << endl;
        else current_balance += money;
    }
    void giveInterest(){
        current_balance = current_balance * 1.029;

    }
    void giveInterest(float percent){
        current_balance = current_balance * (1+percent/100 - 0.01);
    }
    ~BankAccount(){
        cout << "Account of Mr. " << account_name << " with account no " << account_number << " is destroiyed with a balance BDT " << current_balance << endl; 
    }

};

int main(){
    BankAccount ruhan("210041116", "Ruhan", "savings", 250, 50);
    ruhan.show_info();
    cout << "Withdrawing Tk 201" << endl;
    ruhan.withdraw(201);
    cout << "Withdrawing Tk -1" << endl;
    ruhan.withdraw(-1);
    cout << "Withdrawing Tk 150" << endl;
    ruhan.withdraw(150);
    ruhan.showbalance();
    cout << "Depositing Tk -1" << endl;
    ruhan.deposit(-1);
    cout << "Depositing Tk 100" << endl;
    ruhan.deposit(100);
    ruhan.showbalance();
    cout << "Giving default interest" << endl;
    ruhan.giveInterest();
    ruhan.showbalance();
    cout << "Giving 20\% interest" << endl;
    ruhan.giveInterest(20);
    ruhan.showbalance();
}
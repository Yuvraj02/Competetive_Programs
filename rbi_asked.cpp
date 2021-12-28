#include <iostream>

using namespace std;

class Bank{

    public:

    string NAME;
    int ACCNO;
    string TYPE;
    int current_balance;

    void deposit(int depositeAmount){
        current_balance += depositeAmount;
    }

    void withdraw(int withdrawAmaount){
        if (withdrawAmaount > current_balance)
        {
            cout<<"Insufficient Balance"<<endl;
        }else{
            current_balance -= withdrawAmaount;
        }
    }
    void deposit(){}
    void withdraw(){}
};


int main(){
    int withdrawAmount,depositAmount;
    Bank obj;
    cin>>obj.NAME>>obj.ACCNO>>obj.TYPE>>obj.current_balance;
    cin>>depositAmount>>withdrawAmount;
    obj.deposit();
    obj.withdraw();
    obj.deposit(depositAmount);
    obj.withdraw(withdrawAmount);
    cout<<"NAME="<<obj.NAME<<endl;
    cout<<"ACCNO="<<obj.ACCNO<<endl;
    cout<<"TYPE="<<obj.TYPE<<endl;
    cout<<"BALANCE AMOUNT="<<obj.current_balance<<endl;

    return 0;
}
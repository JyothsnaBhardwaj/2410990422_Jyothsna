// Banking system for deposit and withdrawl
#include <iostream>
using namespace std;
int total_balance=0.0;
int transactions=0;
void deposit(double acc_balance, double amt){
    acc_balance += amt;
    total_balance += amt;
    transactions ++;
}
void withdraw(double acc_balance, double deduce){
    if(acc_balance>=deduce){
        acc_balance-=deduce;
        total_balance-=deduce;
        transactions++;
    }
    else{
        cout<< "Not valid amt."<< endl;
    }
}
void display(double acc_balance){
    cout<< "Total Bank Balance:"<< total_balance<< endl;
    cout<< "Total Account Balance:"<< acc_balance<< endl;
    cout<< "Total Transcations:"<< transactions<< endl;
}

int main(){
    double total_balance;
    double acc_balance;
    cout<< "Enter total Account Balance:"<< endl;
    cin>> acc_balance;
    cout << "Enter total Bank balance:"<< endl;
    cin>> total_balance;

    double amt;
    cout<< "Enter amt for deposit:"<< endl;
    cin>> amt;
    deposit(acc_balance, amt);
    display(acc_balance);

    double deduce;
    cout<<"Enter amt for withdrawl:"<<endl;
    cin>> deduce;
    withdraw(acc_balance, deduce);
    display(acc_balance);

    return 0;
}
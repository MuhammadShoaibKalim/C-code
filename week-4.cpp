/*Write a C++ program that performs a transaction in the existing balance of a Bank’s account. 
Take input from the user the amount he/she wants to either withdraw or deposit from account’s balance and displays 
the current balance after performing the transaction user wants to perform on the Bank’s account.*/

#include<iostream>
using namespace std;

int main(){
    int balance = 50000, amount;
	char transction_type;
    
    cout<<"Enter the transction type(Deposite 'D' Withdraw 'W') :";
    cin>>transction_type;
    if(transction_type=='D'){
    
	cout<<"Enter the amount you want to deposit: ";
    cin>>amount;
    
    if (amount < 0) {
        cout << "Enter the positive amount. "<<endl;
    } 
     else {
        balance += amount;
        cout<<"Transction is successful." <<endl;
        
    }
}

    else if(transction_type=='W'){
    
	cout<<"Enter the amount you want to withdraw : ";
    cin>>amount;
    
    if (amount < 0) {
        cout << "Enter the positive amount. "<<endl;
    } else if (amount > balance) {
        cout << "Insufficient balance is" <<balance<< endl;
    } else {
        balance -= amount;
         cout<<"Transction is successful." <<endl;
    }
}
    cout << "After Transction balance is : " <<balance<< endl;
    return 0;
}


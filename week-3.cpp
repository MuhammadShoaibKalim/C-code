/*Write a C++ program that takes following information as input for an 
employee’s profile: name, age, per day salary and number of days worked in a month. 
Display the data taken as input and also calculate and display the monthly salary of the employee.*/
#include<iostream>
using namespace std;
int main(){
	string name;
	int age, per_day_salary, no_of_days_in_month, monthly_salary;
	
	cout<<"Enter the data from user :"<<endl;
	
    cout<<"Enter Employee  Name :";
    cin>>name;
    
     cout<<"Enter Employee Age :";
    cin>>age;
    
     cout<<"Enter Employee per_day_salary :"<<endl;
    cin>>per_day_salary;
    
    cout<<"Enter Employee no_of_days_in_month :"<<endl;
    cin>>no_of_days_in_month;
    
    
    monthly_salary=per_day_salary*no_of_days_in_month;
    cout<<"Displaying Monthly Salary of the Employee :"<<endl;
    
    cout<<" The salary is : "<<monthly_salary;
    

      return 0;
 }

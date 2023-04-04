/*Write a C++ program that takes a student grade as an input and displays that grade.
 The grade is valid if it is A, B, C, D or F. Incase of an invalid grade input, 
 the program should display appropriate message.
*/
#include<iostream>
using namespace std;
int main(){
	char grade;
	cout<<"Enter the grade for student :";  //Take input from user
	cin>>grade;
	switch(grade){
		 case 'A':
		 cout<<"The grade is A";
		break;
		 case 'B':
		 cout<<"The grade is B";
		break;
		 case 'C':
		 cout<<"The grade is C";
		break;
		 case 'D':
		 cout<<"The grade is D";
		break;
		 case 'F':
		 cout<<"The grade is F";
		break;
		 default:
		 	cout<<"You failed to get good marks."; //Displaying the invalid message
			
	}
	
}

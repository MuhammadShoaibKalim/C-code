
/*Write a C++ program that takes following information as input:name,area,city,province, country,living status cnic ,block no, house no street no.
Display the data taken as input and also street no ,block no house no spiritly*/
#include<iostream>
using namespace std;
int main(){
    string name,area,city,province,country,living_status;
     string cnic;  //32409-7235471-1
	int street_no,block_no,house_no;
  
   
   cout<<" Enter the Details of a citizen :"<<endl;
   
       
   
        cout<<" Enter the Name of citizen : ";
        cin>>name;                     //shoaib

        cout<<" Enter the CNIC of citizen : ";
        cin>>cnic;                      //32-86528347-W9 
		  
        cout<<" Enter the block no. : ";
        cin>>block_no;                //01
   
        cout<<" Enter the street_no. : ";
        cin>>street_no;               //02
   
        cout<<" Enter the house_no. : " ;
        cin>>house_no;                //11
   
    cout<<" Enter the area of citizen : ";
    cin>>area;                    //Township
   
    cout<<" Enter the city of citizen : ";
    cin>>city;                    //Lahore
   
    cout<<" Enter the province of citizen : ";
    cin>>province;                //Punjab
   
    cout<<" Enter the country of citizen : ";
    cin>>country;                  //Pakistan
    
    cout<<" Living status of citizen : ";
    cin>>living_status;             //Yes/No
    
    cout<<" || Show the details of citizen || \n ";
 
	    cout<<" Name of citizen is = "<<name<<endl;  
	    
	    cout<<" CNIC of citizen is = "<<cnic<<endl;     
	    
//	    cout<<" Name of citizen is = "<<name<<endl;
	    
	    cout<<" The address of citizen is = " <<" block no. "<<block_no<<" , street no. "<<street_no<<" , house no. "<<house_no<<" ,  "<<area<<",  "<<city<<", "<<province<<", "<<country<<endl;
	      
	    cout<<" Living_status of citizen is = "<<living_status;
	    
}
    


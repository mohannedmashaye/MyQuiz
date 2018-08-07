#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

#include "MOHANNED.h"

MOHANNED::MOHANNED(string he, string e, string sch, string ho, int a){
	//set my string chacteristics 
	height = he;
	ethnicity = e;
	school = sch;
	hobbies = ho;
	age = a; 
}

void MOHANNED::menu(){
	//print the menu of options 
	cout<< "Questions about Mohanned:\n"
      << "---------------------------\n"
      <<"1) What is his height? \n"
      <<"2) What is his ethnicity? ;) \n"
      <<"3) Where does he go to school? \n"
      <<"4) What are his hobbies? \n"
      <<"5) How old is he? \n"
      <<"6) Exit Menu. \n"	 
	  <<endl;
}

int MOHANNED::infoMo(){
	//get user input
	int input = 0;
	//getline function is exlusive to strings, tried an int it didnt compile 
	cout<< "Please enter in which numbered question you want answered: ";
	cin>> input;
	//determine which item user entered, print respective information 
	if(input == 1)
		cout<<"Mohanned's height is: " << height << endl;
	else if(input == 2)
		cout<< "Mohanned's ethnicity is: " << ethnicity << endl;
	else if(input == 3)
		cout<< "Mohanned's school is: " << school << endl;
	else if(input == 4)
		cout<< "Mohanned's hobbies are: " << hobbies << endl;
	else if(input == 5)
		cout<< "Mohanned's age is: " << age << endl;
	else if(input == 6)
		cout<< "\nThank you for your interest!!! :)" <<endl;
	else if(input >6)
		cout<< "\nInvalid option, please try again." << endl;
        return input;
}
	


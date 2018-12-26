#include <iostream>
#include <sstream>
using namespace std;
#include <string>
#include "MOHANNED.h"

int main()
{

//just prints a nice white space line
cout<<endl;
//declare MOHANNED object and set characteristics
MOHANNED m("5'10", "Somali", "Carleton University", "Exercise & Coding", 20);
//called menu, which printed the options 
m.menu();
//THEN, i called the distinguishing funciton infoMo and looped the questions, when user enters 6, program terminates.
while(m.infoMo() != 6){
cout<< "" <<endl;
	}
}
/*
//when initializing array elements i need to put them in {} brackets
int array[5] = {1,2,3,4,5};

//endl stands for END LINE
for(int i =0; i<5;i++)
	cout<<array[i]<<endl;
return 0;
}
*/

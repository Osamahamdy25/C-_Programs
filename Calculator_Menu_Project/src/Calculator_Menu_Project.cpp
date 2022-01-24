//============================================================================
// Name        : Calculator_Menu_Project.cpp
// Author      : Eng / Osama Hamdy
// Version     : 2022
// Description : User interface of Calculator
//============================================================================

#include <iostream>
#include<iomanip>
#include<math.h>
#include<cmath>
using namespace std;

int main() {
 // Main Variables : Declaration + Initialization of variables

	double d_num1=0; // d for double value
	double d_num2=0;
	double d_result=0;
	int    i_choice=0; // i for integer value

	cout<<"\t\t\t\*** Welcome to our Calculator V1 **** \n\n\n\n";

	CalculatorStartingPoint :  // goto point re back here

	cout<<"Please enter Two Numbers \n";

	cin>>d_num1>>d_num2;

	//  User Input Validation

	if(cin.fail())
	{
		cout<<"You should enter correct values\n\n";
		cin.clear();
		cin.ignore(10000,'\n');
		goto CalculatorStartingPoint;
	}

	MenuStartingPoint:

	// Display the menu

	cout<<"\n Menu Options : \n";
	cout<<"\t To sum the number enter 1 \n";
	cout<<"\t To subtract the number enter 2 \n";
	cout<<"\t To multiply the number enter 3 \n";
	cout<<"\t To divide the number enter 4 \n";
	cout<<"\t To enter  the two number again enter 5 \n";

	cout<<"\n \t Enter the choice : ";
    cin>>i_choice;
	// input validation for user choice

	if (cin.fail())
	{

		cout<<"\t\t You should enter correct choice value \n\n";
		cin.clear();
		cin.ignore(10000,'\n');
		goto MenuStartingPoint;
	}

	// implementing the calculator logic

	if(i_choice==1)
		d_result=d_num1+d_num2;
	else if(i_choice==2)
			d_result=d_num1-d_num2;
	else if(i_choice==3)
			d_result=d_num1*d_num2;
	else if(i_choice==4)
	{
		if(d_num2==0.0)
		{
			cout<<"\t\t We can't divide by Zero try two new numbers \n\n";
			goto CalculatorStartingPoint;
		}

		d_result=d_num1/d_num2;
	}
	else if(i_choice==5)
			goto CalculatorStartingPoint;
	else
	{
		cout<<"\t\t Choice must be from 1 to 5 . Retry again\n\n";
		goto MenuStartingPoint;

	}

	// Diplay the result of the operation and then repeat the program
	cout<<"result of operation =  "<<d_result<<endl;
	goto CalculatorStartingPoint;
	return 0;
}

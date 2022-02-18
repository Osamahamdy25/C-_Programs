//============================================================================
// Name        : Static_in_OPP.cpp
// Author      : Osama Hamdy
// Version     : 2022
// Description : Examples to Explain the functionality of static keyword in c++
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;
/* explain the functionality of static keyword in a local variable */
void f()
{
	/* that's means everday the function called the variable  x will increment*/
	static int x=0;
	x++;
	cout<<x<<endl;
}
/* explain the functionality of static keyword in classes  */
class student {
	static int count ;
	char name[20];
	int first,second,Final,total,Id;
public:
	static void print_count()
	{
		cout<<"Students constructed : "<<count<<endl;
	}
	student()
	{
		strcpy(name,"No name");
		Id=0;
		total=0;
		first=second=Final=0;
		count++;
		print_count();
	}
}; // end of class
int student :: count=0; // varaible count related to the student class
int main() {
	student ::print_count();
	cout<<"\n construct 2 objects \n";
	student s1,s2; // variable count mutual between s1 and s2
	cout<<"\n construct 3 objects \n";
	student st[3];
	cout<<"number of object is ";
	student::print_count();

	return 0;
}

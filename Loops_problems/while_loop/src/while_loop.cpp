//============================================================================
// Name        : while_loop.cpp
// Author      : osama hamdy
// Version     : 2022
// Copyright   : Your copyright notice
// Description : repition (while - do while - while)
//============================================================================

#include <iostream>
using namespace std;

int main() {
/************* while loop *******/
/*	 int icount=0;
	 int isum=0;
	 while(icount<4)
	 {
		 cout<<"enter a number"<<endl;
		 int igrade;
		 cin>>igrade;

		 if(igrade<0||igrade>100)
		 {
			 cout<<"invalid grade . it will be ignored \n";
			 continue;
		 }

		 isum+=igrade;
		 icount++;

	 }

	 cout<<"Sum is : "<<isum<<endl;*/

	/******************* for loop ***************/

	/*for (int i=0,a=1,b=2,temp=0;i<10&&a<60;++i,temp=a+b,a=b,b=temp)
		cout<<a<<" "<<endl;  */

/*	int inum_students=3;
	int inum_subjects=4;

	for(int i=0;i<inum_students;i++)
	{
		cout<<"Enter "<<inum_subjects<<"grades for the current student : "<<endl;
		int grade_sum=0;
		for(int j=0;j<inum_subjects;j++)
		{
			int igrade; // i for integer value
			cin >> igrade;

			grade_sum+=igrade;

		}

		cout<<"Average of "<<i+1<<"ith student is: "<<(grade_sum*1.0)/inum_students<<endl;
	}*/



	/************************* do while ******************************/


	int i =0;
	do
	{
		cout<<"evluate me "<<endl;
		cout<<"enter 1 to continue"<<endl;
		cin>>i;

	}while(i==1);

	return 0;
}

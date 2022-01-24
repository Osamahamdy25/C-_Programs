//============================================================================
// Name        : repition_problems.cpp
// Author      : osama hamdy
// Version     : 2022
// Copyright   : Your copyright notice
// Description : problems for repitition
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 /********************************* problem 1 ***************************************/

	/*int icount=0;
	for(int i=0;i<100;i++)
	{
		if(i%4==0)
			icount++;
		else if (i%6==0&&i%10==0)
			icount++;
	}
	cout<<icount<<endl; */

	/******************************* problem 2 *************************************************/
	/*int icount=0;
	for(int i=0;i<100;i++)
	{
		for(int j=(i>=70 ? i+1 : 70);j<=200;++j)
		{
			if((i+j)%7 == 0)
				icount++;
		}

	}
	cout<<icount<<endl; */

	/******************************** problem 3 **************************************************/

	int icount = 0;

	for(int a=0;a<100;a++)
	{
		for(int b=0;b<100;b++)
		{
			for(int c=0;c<100;c++)
			{
				int d=100-(a+b+c);
				if(d>=0 && d<100)
					icount++;
			}
		}
	}


	return 0;
}

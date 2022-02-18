//============================================================================
// Name        : Enumeration.cpp
// Author      : Osama Hamdy
// Version     : 2022
// Copyright   : osama
// Description : Explain the functionality of enums in c++
//============================================================================

#include <iostream>
#include<string.h>
#include<cstring>
using namespace std;
string d[7]={"sat","sun","mon","tue","wed","thur","fri"};
enum days {sat=1,sun,mon,tue,wed,thur,fri};
class week{
	days d[7];
public :
	void setday(days w[])
	{
		for(size_t i=0;i<7;i++)
			{
			 	 d[i]=w[i];
			}
	}
	void p()
	{
		for(size_t i=0;i<7;i++)
					{
					 	 cout<<"the number of day "<<d[i]<<" = "<<d[i]<<endl;
					}
	}
};
int main() {

	/*days m[7]={sat,sun,mon,tue,wed,thur,fri};
	for(size_t i=0;i<7;i++)
	{
		cout<<m[i]<<" - "<<d[i]<<endl;
	}*/
	days d[7]={sat,sun,mon,tue,wed,thur,fri};
	week g;
	g.setday(d);
	g.p();
	return 0;
}

//============================================================================
// Name        : Constant_Object_Constant_Member.cpp
// Author      : osama hamdy
// Description : Explain the functionality of cons in C++
//============================================================================

#include <iostream>
using namespace std;
class Time
{
private:
	int h,m,s;
public:
	/* constant function can be called with constant and non constant objects */
	void print() const  // constant function
	{
		cout<<"The Time = "<<h<<":"<<m<<":"<<s<<endl;
	}
	Time(int i,int j ,int k)
	{
		h=i;
		m=j;
		s=k;
	}
};
int main() {
	 const Time n(12,0,0); // constant objects that's means it can't call any function that's not constant function
     n.print();
	return 0;
}

//============================================================================
// Name        : Operator_Overloading.cpp
// Author      : Osama Hamdy
// Version     : 2022
// Description : Explaining the functionality of operator overloading in c++
//============================================================================

#include <iostream>
using namespace std;
class triangle
{
private:
	float w,h;
public:
	triangle(float a=0,float b=0)
	{
		w=a;
		h=b;
	}
	void getdata()
	{
		cout<<"Enter width \n"<<endl;
		cin>>w;
		cout<<"Enter height \n";
		cin>>h;
	}
	void showdata()
	{
		cout<<"width = "<<w<<" and "<<" height = "<<h<<endl;

	}
	triangle operator+(triangle c2)
	{
		triangle c3;
		c3.w=w+c2.w; // width of the calling object
		c3.h=h+c2.w; // height of the calling object
		return c3;
	}
	triangle operator-(triangle c2)
	{
		triangle c3;
		c3.w=w-c2.w; // width of the calling object
		c3.h=h-c2.w; // height of the calling object
		return c3;
	}
	triangle operator*(triangle c2)
		{
			triangle c3;
			c3.w=w*c2.w; // width of the calling object
			c3.h=h*c2.w; // height of the calling object
			return c3;
		}
	triangle operator/(triangle c2)
			{
				triangle c3;
				c3.w=w/c2.w; // width of the calling object
				c3.h=h/c2.w; // height of the calling object
				return c3;
			}
};
int main() {
	triangle c1,c2(3.5,1.5),c3;
	c1.getdata();
	c3=c1*c2;
	c3.showdata();
	return 0;
}

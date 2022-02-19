//============================================================================================
// Name        : Frined_Function_and_Friend_Class.cpp
// Author      : Osama Hamdy
// Description : Examples to explain the functionality of friend function and friend class
//=============================================================================================

#include <iostream>
using namespace std;
class A
{
private :
	int k,l;
};
class B
{
private :
	int h,i;
};

class Tri;
class csquare;
class rect{
	friend int Sum(Tri T, rect r);
	int w,h;
	friend  rect duplicate (rect r);
public :
	rect(int a, int b)
	{
		w=a;
		h=b;
	}
	void set_values(int,int);
	int area(void)
	{
		return w*h;
	}
void conver(csquare);
};// end of rect class

class csquare
{
private :
	int side;
public :
	csquare(int s)
	{
		side=s;
	}
	friend class rect;
};
void rect::conver(csquare a)
{
	w=a.side;
	h=a.side;
}
class Tri
{
	friend int Sum(Tri T, rect r);
	int W,H;
public :
	Tri(int a, int b)
	{
		W=a;
		H=b;
	}
};
int Sum(Tri T, rect r)
{
	return T.W+r.w;
}
void rect::set_values(int a,int b)
{
	w=a;
	h=b;
}
/*rect duplicate (rect r)
{
	rect t;
	t.w=r.w*2;
	t.h=r.h*2;
	return t;
}*/
class myclass{
	int a,b;
public:
	myclass(int i,int j)
	{
		a=i;
		b=j;
	}
	friend int sum(myclass ob);
};
int sum(myclass ob)
{
	return ob.a+ob.b;
}
int main() {
	/*rect ra,rb;
ra.set_values(5, 7);
cout<<"the area before duplicate is "<<ra.area()<<endl;
rb=duplicate(ra);
cout<<"the area after duplicate is "<<rb.area()<<endl;*/
/*	rect r(2,3);
	Tri i(5,7);
	cout<<Sum(i,r)<<endl;*/

	csquare sqr(4);
	rect r(4,5);
	r.conver(sqr);
	cout<<r.area()<<endl;
	return 0;
}

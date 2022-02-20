//============================================================================
// Name        : this_in_oop.cpp
// Author      : Osama Hamdy
// Description : Explain the functionality of this in c++
//============================================================================

#include <iostream>
using namespace std;
// this is a pointer to object that call
class student
{
int id;
public :
	void address()
	{
		cout<<this<<endl;
	}
	void set_id(int id)
	{
		this->id= id ;
	}
	void print_id()
	{
		cout<<"Id is "<<id<<endl;
	}
};
int main() {
	student a;
	a.set_id(10);
	a.print_id();

	return 0;
}

#include <iostream>
#include <string.h>
class rect
{
    int *w,*h;
public:
    rect(int,int);
    ~rect();
    int area()
    {
        return *(w) * *(h);
    }
};
rect::rect(int a,int b)
{
 w= new int;
 h=new  int;
 *w=a;
 *h=b;
}
  rect::~rect()
  {
      delete w;
      delete h;
  }
using namespace std;
int main()
{ /****************** example 1 ********************************************/
  /*  int *p;
    p=new int;
    *p=10;
    cout<<" address of pointer p "<<p<<endl;
    cout<<" value of pointer p "<<*p<<endl;
    delete p;
    cout<<" address of deleted pointer "<<p<<endl;
    int val1=11;
    int val2=12;

    int *ptr1=&val1;
    int *ptr2=&val2;

    cout<<" value  of val1 "<<val1<<endl;
    cout<<" value of val2  "<<val2<<endl;


    cout<<" address of val1 "<<ptr1<<endl;
    cout<<" address of val2 "<<ptr2<<endl;

    *ptr1= 50;
    *ptr2=70;

    cout<<" new value  of val1 "<<val1<<endl;
    cout<<" new value of val2  "<<val2<<endl;
*/

/****************** Example 2 ********************************************/

 /*   int *p1,*p2;
    p1=new int ;
    *p1=10;
    cout<<&p1<<endl;
    cout<<" Memory Location of p1"<<p1<<endl;
    cout<<" p1 contains "<<*p1<<endl;
     p2=new int ;
    *p1=20;
    cout<<&p2<<endl;
    cout<<" Memory Location of p2 "<<p2<<endl;
    cout<<" p2 contains "<<*p2<<endl;
    delete p1;
    delete p2;
    */
   /****************** Example 3    ********************************************/
   rect r1(3,4),r2(5,6);
   cout<<" Area1 = "<<r1.area()<<endl;
   cout<<" Area2 = "<<r2.area()<<endl;

    return 0;
}

#include <iostream>
#include<math.h>
#include<cmath>
#include<algorithm>
 using namespace std;
int mul(int ,int );
int sum(int,int);
double avg(double , double , double);
int max(int ,int ,int);
void ref(int &x,int &y);
void print();
int  main()
{
  /*  int a=0,b=0;
    ref(a,b);
    int z=sum(a,b);
    int m =mul(10,50);
    cout<<"Result of Mul = "<<m<<endl;
    cout<<"Result of sum = "<<z<<endl;
    cout<<"Average = "<<avg(100,150,205)<<endl;
    cout <<"Maximum Number = "<<max(115,180,814)<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    print();*/

    /************ built in functions ***********************/
  /* int a=5,b=10;
   cout<<pow(2,3)<<endl;
   cout<<sqrt(9)<<endl;
   cout<<floor(9.2)<<endl;
   cout<< log(10)<<endl;
   cout<<max(50,40)<<endl;
   cout<<min(10,20)<<endl;
   swap(a,b);
   cout<<"a = "<<a<<endl;
   cout<<"b = "<<b<<endl;*/
    /***************************************************************/
    /**************************** swap without using temp value ***************/
    int x=10,y=5;
   /**
    xor method
    y=x^y;
    x=y^x;
    y=x^y;

     /** arthimatic method **/

   y=x+y;
   x=y-x;
   y=y-x;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;

    return 0;
}
int sum(int a,int b)
{
    cout<<"please enter two numbers"<<endl;
    cin>>a>>b;
    return a+b;
}
double avg(double m1, double m2, double m3)
{
return (m1+m2+m3)/3;
}
int max(int a,int b,int c )
{
   int m =a;
   if(m<b)
    m=b;
   if(m<c)
    m=c;
   return m;

}
void print()
{
    cout<<"\nosama Hamdy \n";
}
int mul(int x,int y =40 )
{
    return x*y;
}
void ref(int &x,int &y)
{
    x=x+5;
    y=y+5;
}


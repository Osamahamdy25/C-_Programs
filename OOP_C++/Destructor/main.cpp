#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;
/*********************** class Copy*********************************/
class Copy{
private:
int a1,a2,a3,a4,a5,a6;
public :
Copy(int aa1,int aa2,int aa3,int aa4,int aa5,int aa6)
{
    a1=aa1;
    a2=aa2;
    a3=aa3;
    a4=aa4;
    a5=aa5;
    a6=aa6;
}
Copy(const Copy &a)
{
    a1=a.a1;
    a2=a.a2;
    a3=a.a3;
    a4=a.a4;
    a5=a.a5;
    a6=a.a6;
}
void print()
{
    cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<< " "<<a5<<" "<<a6<<endl;
}

};
/******************* class for student *****************************/
class student {
private :
    char name[20];
    int id;
public :
    student(){
      cout<<"Empty  constructor for student class "<<endl;
    strcpy(name,"no name");
    id=0;
    }
    student(char n[],int i)
    {
        cout<<"paramterized constructor for student class "<<endl;
        strcpy(name,n);
        id=i;
    }
    // overloaded constructor
       student(char n[])
       {
           cout<<"paramterized constructor for array of character "<<endl;
           strcpy(name,n);
       }
    void print();


};
/******* class for Triangle ******************************/
class triangle{
private:
    float height;
    float  base;
public:
    // constructor for triangle
    triangle() // empty constructor
    {

        height=0;
        base =0;
        cout<<"height = "<<" " <<height<<"  "<<"base = "<<base<<" Triangle Class has been created "<<endl;
    }
    ~triangle()
    {
         cout<<height<<" "<<base<<endl;
         cout<<" Triangle Class has been Deleted "<<endl;
    }
    triangle(int h , int b) :height(h),base(b)// parameterized constructor
    {
        triangle t;

        cout<< " Triangle Class has been created "<<endl;

    }
    void setBase_setHeight(float b,float h)
    {
        height=h;
        base=b;
    }
    float getBase()
    {
        return base;
    }
    float getHeight()
    {
        return height;
    }
    float area()
    {
        return  .5*height*base;
    }
    void print();

};
/**********************************************************************/
    void triangle:: print()
    {
        cout<<"height = "<<height<<endl;
        cout<<"Base = "<<base<<endl;
        cout<<"Area = "<<area()<<endl;
    }
     void student :: print()
    {
        cout<<" Student Name = "<<name<<endl;
        cout<< " Student ID =  "<<id<<endl;
    }

/****** class for car *******/
class car
{
private:
    char name[15] ;
    char color[10];
    int max_speed;
    int model;
public:
    car () // empty constructor
    {
        cout<<"second constructor "<<endl;
    }
    car(char* n,char* c, int s , int m) // parameterized constructor
    {
        strcpy(name,n);
        strcpy(color,c);
        max_speed=s;
        model=m;
        cout<<"This a paramterized constructor for Car Class"<<endl;
    }
    void setName(char n[])
    {
        strcpy(name,n);

    }
    void setColor(char n[])
    {
        strcpy(color,n);

    }
    void set_speed(int s)
    {
        max_speed=s;
    }
     void set_model(int m)
    {
        model=m;
    }
    char*  get_name()
    {
        return name;
    }
    char* get_color()
    {
        return color;
    }
    int get_speed()
    {
        return max_speed;
    }
     int get_model()
    {
        return model;
    }
    void print();
    ~car();
};

  void car ::print()
    {
        cout<<"name = "<<name<<endl;
        cout<<"color = "<<color<<endl;
        cout<<"Max Speed = "<<max_speed<<endl;
        cout<<"Model = "<<model<<endl;
    }
    car::~car()
    {
        cout<<"Object Destructed"<<endl;
    }
int main()
{
   car c1("DIAMLER","Black",280,2020);
   c1.print();

    return 0;
}

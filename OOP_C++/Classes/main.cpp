#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;
/******* class for Triangle ******************************/
class triangle{
private:
    float height;
    float  base;
public:
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
    void print()
    {
        cout<<"height = "<<height<<endl;
        cout<<"Base = "<<base<<endl;
        cout<<"Area = "<<area()<<endl;
    }
};

/****** class for car *******/
class car
{
private:
    char name[15] ;
    char color[10];
    int max_speed;
    int model;
public:
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
    void print()
    {
        cout<<"name = "<<name<<endl;
        cout<<"color = "<<color<<endl;
        cout<<"Max Speed = "<<max_speed<<endl;
        cout<<"Model = "<<model<<endl;
    }
};

int main()
{
    car c;
    triangle t;
    c.setName("BMW");
    c.setColor("Black");
    c.set_model(2022);
    c.set_speed(330);
    t.setBase_setHeight(5,10);
    t.area();
    c.print();
    t.print();
    return 0;
}

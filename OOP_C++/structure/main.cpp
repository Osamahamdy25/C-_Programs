#include <iostream>
#include<string.h>
using namespace std;
struct Dis
{
    float  feet ;
    float inches;
};
struct exam{
float first;
float second;
float Final;
};
class subject
{
    char name[10];
    exam Exam;
public:
    subject()
    {
        strcpy(name,"no name");
        Exam={0,0,0};
    }
    subject(char n[],float fa,float s,float fi)
    {
        strcpy(name,n);
        Exam={fa,s,fi};
    }
    float total()
    {
        return Exam.Final+Exam.second+Exam.Final;
    }
    void print()
    {
        cout << " Subject >> "<< name<<endl;
        cout << " Fistst Exam = "<< Exam.first<<endl;
           cout << " Second Exam = "<< Exam.second<<endl;
              cout << " Final Exam = "<< Exam.Final<<endl;
    }
};
Dis add_distance(Dis d1,Dis d2)
{
    Dis result;
    result.feet=d1.feet+d2.feet;
    result.inches=d1.inches+d2.inches;
    return result;
}
struct car
{
    string name;
    string color;
    int maxspeed;
    int model;
}g,c,k;
int main()
{
   g.color="Red";
    g.name="BMW";
    g.model=2022;
    g.maxspeed=220;
    // another way of initialization
   c={"Mercedes","RED",280,2022};
    k={"Kia","Black",290,2021};
    cout<<"color = "<<g.color<<" "<<"Name = "<<g.name<< "  "<<"Model = "<<g.model<<"  "<<"Max speed = "<<g.model<<endl;
    cout<<"color  = "<<c.color<<" "<<"Name = "<<c.name<< "  "<<"Model = "<<c.model<<"  "<<"Max speed = "<<c.model<<endl;
    if(g.maxspeed<k.maxspeed)
        cout<<"Kia speed is more than BMW"<<endl;
   Dis x={15,20};
   Dis y={25,30};
   Dis z=add_distance(x,y);
    cout<<"z.feet = "<<z.feet<<"  "<<"z.inches = "<<z.inches<<endl;
    subject e("oop",50,49,45);
    e.print();
    return 0;
}

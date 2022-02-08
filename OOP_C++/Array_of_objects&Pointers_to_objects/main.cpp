#include <iostream>
#include <string.h>
using namespace std;
class student {
char name[20];
int ID;
public:
    student()
    {
        cout<<"empty constructor "<<endl;
        strcpy(name,"no name");
        ID=0;
    }
      student(char n[],int i)
    {
        cout<<"paratemrized constructor "<<endl;
        strcpy(name,n);
        ID=i;
    }
    void print()
    {
        cout<<name<<"\t"<<ID<<endl;
    }

};
int main()
{
    /******************** Exampe 1 ***************************/
    /*int arr [5]={10,20,30,40,50};
    cout<<arr<<endl;
    cout<<*(arr+4)<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    int *p=arr;
     for(int i=0;i<5;i++)
    {
        cout<<*(p++)<<endl;
    }*/

    /******************************************************************/
      /******************** Exampe 2 ***************************/
      student s1("osama",20151945),s2("Ahmed",20151945),*p;
      student arr[3]={s1,s2,student("Mahmoud",20151945)}; // array of objects
      p=arr; // address of first element of array
      for(int i=0;i<3;i++)
        (p++)->print();

    return 0;
}

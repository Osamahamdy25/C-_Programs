#include <iostream>
#include<iomanip>>
#include<cmath>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
void search(int arr[],int s,int n)
{
     bool g=false;
for(int i=0;i<s;i++)
{
    if(arr[i]==n)
        g=true;
}
if(g)
    cout<<"element found in array "<<endl;
else
    cout<<"element not found in array"<<endl;


}
int main()
{
 /*  int arr[5];
  for(int i = 0;i<5;i++)
  {
        cin>>arr[i];
  }
 for (int i =0;i<5;i++)
 {
     cout << "arr["<<i<<"]"<<" = "<<arr[i]<<endl;
 }
 int sum=0;
 for (int i =0;i<5;i++)
 {
        sum+=arr[i];
 }
 cout<<"sum of array = "<<sum<<endl;
  int mul=1;
 for (int i =0;i<5;i++)
 {
        mul*=arr[i];
 }
 cout<<"Multiply of array = "<<mul<<endl;*/
/**** using string built in func *****/
 /*char g[15]="Osama";
 char c[15]="Hamdy";
 char b[15]="1500" ;
 cout<<strcat(g,c)<<endl;
 cout<<strcpy(c,g)<<endl;
 cout<<strlen(g)<<endl;
 cout<<strlen(c)<<endl;
 cout<<strcmp(c,g)<<endl;
 cout<<atoi(b)+1<<endl;
 */

 /************ searching for element in array *******************************/
/* int arr[]={15,2,5,6,9,8,10};
 int n;
 cin>>n;
search(arr,7,n);*/

/******************* sorting for array elements ************************************/
/*for(int i=0;i<7;i++)
{
    for(int j=0;j<7;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int t;
            t=arr[j];
            arr[j+1]=arr[j];
            arr[j]=t;
        }
    }
}
for(int i = 0;i<7;i++)
{
 cout<<arr[i]<<"\t";
}*/
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int r=year%4;
    if(year%4 == 0 && (year%100 !=0 || year%400 ==0))
       {
           cout<<"This is Leap Year"<<endl;
       }
       else
        {
            cout<<"This is not Leap Year"<<endl;
        }
        return 0;
}

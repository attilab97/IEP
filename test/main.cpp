#include<iostream>
#include "dreptunghi.h"
using namespace std;
int main()
{
    Dreptunghi d1(6,5);
    Dreptunghi d2(3,4);
    cout<<"Aria1= "<<d1.arie()<<endl;
    cout<<"Aria2= "<<d2.arie()<<endl;
    d1 = d2;
    return 0;
}
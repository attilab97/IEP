#include<iostream>
#include "ncomplex.h"
using namespace std;
int main()
{
    NComplex c1(6,5);
    NComplex c2(3,4);
    cout<<"Nr1= "<<c1.toString()<<endl;
    cout<<"Nr2= "<<c2.toString()<<endl;
    cout<<"c1+c2= "<< c1.adunare(c2).toString()<<endl;
    cout<<"c1-c2= "<< c1.scadere(c2).toString()<<endl;
    return 0;
}
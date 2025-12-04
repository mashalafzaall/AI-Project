/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,max1,max2,finalmax;
   cout<<"enter first number ";
   cin>>num1;
   cout<<"enter second number ";
   cin>>num2;
   cout<<"enter third number ";
   cin>>num3;
   cout<<"enter fourth number ";
   cin>>num4;
    if (num1>num2)
    max1=num1;
    else 
    max1=num2;
    if (num3>num4)
    max2=num3;
    else
    max2=num4;
    if (max1>max2)
    finalmax=max1;
    else 
    finalmax=max2;
    cout<<"the maximum number is "<<finalmax<<endl;
    return 0;
}
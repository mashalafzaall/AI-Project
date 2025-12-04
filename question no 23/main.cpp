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
   float r,PI,area,circumference;
   PI=3.1416;
   cout<<"enter the value of radius of circle ";
   cin>>r;
   area=PI*r*r;
   circumference=2*PI*r;
   cout<<"the area of circle is "<<area<<endl;
   cout<<"the circumference of circle is "<<circumference<<endl;
   return 0;
}
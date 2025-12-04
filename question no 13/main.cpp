/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
   float radius,area;
   cout<<"enter radius of circle ";
   cin>>radius;
   area=PI*radius*radius;
   cout<<"the area of circle is "<<area;
   return 0;
}
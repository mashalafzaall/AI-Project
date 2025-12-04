/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,s,area;
    cout<<"enter the value of first side ";
    cin>>a;
    cout<<"enter the value of second side ";
    cin>>b;
    cout<<"enter the value of third side ";
    cin>>c;
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"the area of triangle is "<<area<<endl;
    return 0;
}
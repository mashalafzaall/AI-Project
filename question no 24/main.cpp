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
    int marks1,marks2,marks3,marks4,marks5,total;
    float average;
    cout<<"enter marks of first subject ";
    cin>>marks1;
    cout<<"enter marks of second subject ";
    cin>>marks2;
    cout<<"enter marks of third subject ";
    cin>>marks3;
    cout<<"enter marks of fourth subject ";
    cin>>marks4;
    cout<<"enter marks of fifth subject ";
    cin>>marks5;
    total=marks1+marks2+marks3+marks4+marks5;
    average=(total/5.0);
    cout<<"total marks: "<<total<<endl;
    cout<<"average marks: "<<average<<endl;
    return 0;
}
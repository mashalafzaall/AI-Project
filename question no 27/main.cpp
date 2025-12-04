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
    int hours,min,sec,totalsec;
    cout<<"enter time in hours ";
    cin>>hours;
    cout<<"enter time in minutes ";
    cin>>min;
    cout<<"enter time in seconds ";
    cin>>sec;
    totalsec=(hours*3600)+(min*60)+(sec);
    cout<<"total seconds are "<<totalsec;
    return 0;
}
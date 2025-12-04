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
   int rollno;
   int marks1;
   int marks2;
   int marks3;
   int total;
   float average;
   cout<<"enter your rollno ";
   cin>>rollno;
   cout<<"enter you marks in programming fundamentals ";
   cin>>marks1;
   cout<<"enter your marks in intoduction to computing ";
   cin>>marks2;
   cout<<"enter your marks in computer graphics ";
   cin>>marks3;
   total=marks1+marks2+marks3;
   average=(total/3.0);
   cout<<"total marks are "<<total<<endl;
   cout<<"average marks are "<<average<<endl;
   return 0;
}
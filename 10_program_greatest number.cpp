/* 
Name - Tanishka Kalra
 Enrollment No. - 0827CI201187
 Branch and Section - CSIT 3
 
 
 
 
 program - 10 “Program for input three number and find the greatest element using Simple if, Nested
if………else, if…..else if……..if Statement
*/

#include<iostream>
using namespace std;
int main()
{    int a,b,c,g;
    cout<<" ENTER THREE NUMBERS WHICH ARE TO BE COMPARED";
    cin>>a>>b>>c;
    if(a>b&&a>c){
        g=a;
    }
     else if(b>c&&b>a){
        g=b;
    }
     else { g=c;
}
    cout<<" the greatest number is "<<g;
}

/* 
Name - Tanishka Kalra
 Enrollment No. - 0827CI201187
 Branch and Section - CSIT 3
 
 
 
 
 program - 05
“Write a Program for Simple Interest and Compound Interest”
*/

#include<iostream>
#include <math.h>
using namespace std;
int main()
{
 int p , t ;
 float r , s , c;
 cout<<" enter principal , rate and time to calculate"<<endl;
 cin>>p>>r>>t;
 s = (p*r*t)/100;
 cout<<"the simple interest is"<<s;
 c= p* (pow((1 + r / 100), t));
 cout<<"the compound interest"<<c;
 return 0 ;


	
	
}

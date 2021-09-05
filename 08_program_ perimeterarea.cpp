/* 
Name - Tanishka Kalra
 Enrollment No. - 0827CI201187
 Branch and Section - CSIT 3
 
 
 
 
 program -9 “Program for input two number and check whether it is Equal or not”
*/
#include<iostream>
#include <math.h>
using namespace std;
int main(){
	float l, b  , a , p , d;
	cout<<"enter the dimensions f rectangle";
	cin>>l>>b;
	a = l*b;
	cout<<"The area is the rectangle is"<<a;
	p = 2*(l+b);
	cout<<" the perimeter of rectangle is"<<p;
	d = sqrt(l*l + b*b); 
	cout<<" the diagonal of rectangle is"<<d;
	return 0;
	
	
}

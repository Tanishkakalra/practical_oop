/* 
Name - Tanishka Kalra
 Enrollment No. - 0827CI201187
 Branch and Section - CSIT 3
 
 
 
 
Program: 4    “Write a Program for B.Tech. Mark sheet calculation (Total, Percentage and Result)”
*/
#include<iostream>
using namespace std;
int main(){
	int marks[5]  ; 
	cout<<"enter your marks";
	for ( int i =0; i <6; i++)
	{
		cin>>marks[i];
	}
	int percentage = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
	int total = ( marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);
	
	cout<<"your total is "<<total;
	cout<<"your percentage is"<<percentage;
	
	if (percentage >= 33)
	cout<<"you are passed";
	else if (percentage<33)
	{ 
	cout<<"you are failed";
	}
	
	return 0;
}

/* 
Name - Tanishka Kalra
 Enrollment No. - 0827CI201187
 Branch and Section - CSIT 3
 
 
 
 
 program -1 Write a Program for use of predefined sizeof() function to display the data typE 
*/



#include<iostream>
using namespace std;
int main(){
	int i ;
    char c ;
    cout<<"Enter a int to know its size";
    cin>>i;
    cout<<"the size of int"<<i<<"is"<<sizeof(i)<<endl;
    cout<<"Enter a char to know its size";
    cin>>c;
    cout<<"the size ofchar"<<i<<"is"<<sizeof(c)<<endl;
    return 0;
}

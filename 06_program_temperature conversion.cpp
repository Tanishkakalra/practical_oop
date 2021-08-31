/* 
Name - Tanishka Kalra
 Enrollment No. - 0827CI201187
 Branch and Section - CSIT 3
 
 
 
 
 program -6 “Write a Program for Convert Temperature from Celsius to Fahrenheit and Fahrenheit to celsius” 
*/



#include<iostream>
using namespace std;
int main(){
        float c , f;
        float t , q;
        cout<<"Enter  a temperature in celcius ";
        cin>>c;
        t= (c*1.8)+32;
        cout<<"the conversion of "<<c<<"in Fahrenheit  is"<<t;
        
         cout<<"Enter a temperature in  Fahrenheit ";
        cin>>f;
        q = (f-32)* 5/9 ;

        cout<<"the conversion of "<<f<<"in  Fahrenheit  is"<<q;
        
        
    return 0;
}

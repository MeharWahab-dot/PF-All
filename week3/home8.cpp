#include<iostream>
using namespace std;
main(){
int time,initialvelocity,acceleration;
cout<<"Enter Inital velocity (m/s):";
cin>>initialvelocity;
cout<<"Enter Acceleration (m/s^2):";
cin>>acceleration;
cout<<"Enter Time (s):";
cin>>time;
int Finalvelocity;
Finalvelocity=(acceleration*time)+initialvelocity;
cout<<"Final velocity (m/s):"<<Finalvelocity;
}
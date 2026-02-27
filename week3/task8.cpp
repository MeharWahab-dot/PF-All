#include<iostream>
using namespace std;
main(){
int voltage,power,current;
cout<<"Enter voltage (in volts):";
cin>>voltage;
cout<<"Enter current (in Amperes):";
cin>>current;
power=voltage*current;
cout<<"The power is:"<<power;
}
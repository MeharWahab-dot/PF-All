#include<iostream>
using namespace std;
main(){
string name;
int weightlose,daysreq;
cout<<"Enter the name of the person:";
cin>>name;
cout<<"Enter the weight you want to lose";
cin>>weightlose;
daysreq=weightlose*15;
cout<<name<< " will need" <<daysreq<< " days to lose " <<weightlose "kg";
}

#include<iostream>
using namespace std;
main(){
string name;
int matricmarks,intermarks,ecatmarks;
float aggregate;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter matriculation marks(out of 1100):";
cin>>matricmarks;
cout<<"Enter intermediate marks(out of 550):";
cin>>intermarks;
cout<<"Enter ecat marks(out of 400):";
cin>>ecatmarks;
aggregate=(matricmarks*0.1)/1100+(intermarks*0.4)/550+(ecatmarks*0.5)/400;
cout<<"Aggregate is"<<aggregate;


}


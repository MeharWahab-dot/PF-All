#include<iostream>
using namespace std;
main(){
int i,p,chance;
cout<<"Enter Imposter count:";
cin>>i;
cout<<"Enter Player count:";
cin>>p;
chance=100*(i/p);
cout<<"Chances are:"<<chance<<"%";
}
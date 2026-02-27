#include<iostream>
using namespace std;
main(){
int num,n1,n2,n3,n4;
cout<<"Enter a 4 digit number:";
cin>>n1;
cin>>n2;
cin>>n3;
cin>>n4;
int a,b,c,d;
a=n4%10;
b=n3%10;
c=n2%10;
d=n1%10;
int sum;
sum=a+b+c+d;
cout<<"Sum is :"<<sum;
}
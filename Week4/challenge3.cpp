#include<iostream>
using namespace std;
main(){
 int num1,num2,num;
 char op;
 cout<<"Enter the number:";
 cin>>num1;
 cout<<"Enter the operator:";
 cin>> op;
 cout<<"Enter the second number:";
 cin>>num2;
     if(op== '-' ){
    num=num1+num2;
 }   
 else if(op== '+' ){
    num=num1-num2;
 }
 else if(op=='/'){
    num=num1*num2;
 }
 else if(op=='*'){
    num=num1/num2;
 }
 cout<<"result="<<num;
}


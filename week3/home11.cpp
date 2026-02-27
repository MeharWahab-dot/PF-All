#include<iostream>
using namespace std;
main(){
int age,move,avgyears;
cout<<"Enter the person's age:";
cin>>age;
cout<<"Ener the number of times they have moved in:";
cin>>move;
avgyears=age/(move+1);
cout<<"Average number of years lived in the same house:"<<avgyears;
}


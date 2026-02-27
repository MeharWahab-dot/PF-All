#include<iostream>
using namespace std;
main(){
int size,cost,area,costperpound,costpersquarefoot;
cout<<"Enter the size of fertilzer bag in pounds:";
cin>>size;
cout<<"Enter the cost of the bag:";
cin>>cost;
cout<<"Enter area of the bag can cover:";
cin>>area;
costperpound=cost/size;
cout<<"The cost per pound is:" <<costperpound;
costpersquarefoot=cost/area;
cout<<costpersquarefoot;
}


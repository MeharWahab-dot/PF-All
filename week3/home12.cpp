#include<iostream>
using namespace std;
main(){
int sqrmtr,width,height,area,numberofwalls;
cout<<"Number of square meters you can paint:";
cin>>sqrmtr;
cout<<"Width of the single wall:";
cin>>width;
cout<<"Height of the single wall:";
cin>>height;
area=width*height;
numberofwalls=sqrmtr/area;
cout<<"Number of walls you can paint are:"<<numberofwalls;
}
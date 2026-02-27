#include<iostream>
using namespace std;
main(){
int min,fps,totalframe;
cout<<"Enter number of minute:";
cin>>min;
cout<<"Enter Frames per second";
cin>>fps;
int totalsec;
totalsec=min*60;
totalframe=totalsec*min;
cout<<"Total number of frames are:"<<totalframe;
}
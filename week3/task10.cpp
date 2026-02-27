#include<iostream>
using namespace std;
main(){
int win,winp,loss,draw,drawp,totalP;
cout<<"Enter number of wins:";
cin>>win;
winp=win+3;
cout<<"Enter number of loss";
cin>>loss;
cout<<"Enter number of draws";
cin>>draw;
drawp=draw+1;
totalP=drawp+winp+loss;
cout<<"Total points are"<<totalP<<"in Asia cup";
}
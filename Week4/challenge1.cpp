#include<iostream>
using namespace std;
main(){
    int bill,finalbill,dis;
    cout<<"Enter bill:";
    cin>>bill;
    if(bill<=5000){
        dis=bill*0.05;
    }
    if(bill>5000){
        dis=bill*0.10;
    }
    finalbill=bill-dis;
    cout<<"Your discounted bill is:"<<finalbill;
}
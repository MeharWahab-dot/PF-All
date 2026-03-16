#include<iostream>
using namespace std;
main(){
    int temp1,temp2,diff;
    cout<<"Enter the temperature:";
    cin>>temp1;
    cout<<"Enter the temperature:";
    cin>>temp2;
    diff=temp1-temp2;
    if(diff<0){
              cout<<"Too big difference";
    }
    else if(diff>20){
        cout<<"Too big difference";
    }
    else{
    cout<<"Program ends";
}
}
#include<iostream>
using namespace std;
main(){
    int x;
    cout<<"Enter the speed";
    cin>>x;
    if(x<=10){
        cout<<"slow";
    }
    else if(x<=50){
        cout<<"Average";
    }
    else if(x<=150){
        cout<"Fast";
    }
    else if(x<=1000){
        cout<<"ultra Fast";
        
    }
    else{
    cout<<"Extremely Fast";
}
}
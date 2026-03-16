#include<iostream>
using namespace std;
main(){
    string a,b,c;
    cout<<"Enter name of first brother:";
    cin>>a;
    cout<<"Enter name of second brother:";
    cin>>b;
    cout<<"Enter name of third brother:";
    cin>>c;
    int a1,a2,a3;
    cout<<"Enter age of first brother:";
    cin>>a1;
cout<<"Enter age of second brother:";
cin>>a2;    
cout<<"Enter age of third brother:";
    cin>>a3;
    if(a1>a2){
        if(a1>a3){
            cout<<"Mr."<<a <<" is the eldest";
        }
    }
    else if(a2>a3){
        if(a2>a1){
            cout<<"Mr."<<b <<" is the eldest";
        }
    }
    else{
    cout<<"Mr."<<c <<" is the eldest";
}
}
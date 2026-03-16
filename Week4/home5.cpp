#include<iostream>
using namespace std;
main(){
    int holiday,working,playtime;
    cout<<"Enter the number of holidays:";
    cin>>holiday;
    working=365-holiday;
    playtime=(working*63)+(holiday*127);
    int norm=30000;
    if(playtime<norm){
        cout<<"Tom sleeps well\n";
        int diff,hour,min;
        diff=norm-playtime;
        hour=diff/60;
        min=diff%60;
        cout<<hour<< " hours and "<<min<< " minutes less to play";
    }
    else{
         cout<<"Tom will run away\n";
        int diff,hour,min;
        diff=playtime-norm;
        hour=diff/60;
        min=diff%60;
        cout<<hour<< "  hours and "<<min<< " minutes to play";
           }
    }
    
#include<iostream>
using namespace std;
main(){
    int p1,p2,p3;
    float dis,afterdis,total;
    float rose=2.00;
    float white=4.10;
    float tulip=2.50;
    cout<<"Enter the number of rose:";
    cin>>p1;
    cout<<"Enter the number of white rose:";
    cin>>p2;
    cout<<"Enter the number of tulip:";
    cin>>p3;
    total=(p1*rose)+(p2*white)+(p3*tulip);
    cout<<"Original price:"<<total;
    if(total>200){
        dis=total*0.20;
        afterdis=total-dis;
        cout<<"Price after discount is:"<<afterdis;
    }
    
}
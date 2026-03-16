#include<iostream>
using namespace std;
main(){
    string country;
    int ticketprice;
    cout<<"Enter country name:";
    cin>>country;
    cout<<"Enter ticket price in dollars:";
    cin>>ticketprice;
    if(country == "ireland")
    {
        int discount=ticketprice*0.10;
        int afterdiscount;
        afterdiscount=ticketprice-discount;
        cout<<"Ticket Price:"<<afterdiscount;
    }
    else
    {
        int dis=ticketprice*0.05;
        int afterdis=ticketprice-dis;
        cout<<"Ticket Price:"<<afterdis;

}
}
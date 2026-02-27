#include<iostream>
using namespace std;
main(){
string name;
int adultticketprice,childtprice,adulttsold,childtsold;
int finalincome;
float charity,percent;
cout<<"Enter the movie name:";
cin>>name;
cout<<"Enter the adult ticket price:";
cin>>adultticketprice;
cout<<"Enter the child ticket price:";
cin>>childtprice;
cout<<"Enter the number of adult tickets sold:";
cin>>adulttsold;
cout<<"Enter the number of child tickets sold:";
cin>>childtsold;
cout<<"Enter the percentage of amount donated:";
cin>>charity;
int adultincome,childincome,totalincome;
adultincome=adultticketprice*adulttsold;
childincome=childtprice*childtsold;
totalincome=adultincome+childincome;
cout<<"Total income is:"<<totalincome;
percent=totalincome*(charity/100);
cout<<"\nThe amount to be donated in charity is:"<<percent;
finalincome=totalincome-percent;
cout<<"\nFinal income after charity is" <<finalincome;
}


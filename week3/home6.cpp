#include<iostream>
using namespace std;
main(){
float vegprice,fruitprice,totalcoins,rps;
int totalkgveg,totalkgfruits;
cout<<"Enter fruit price per kg (in coins):";
cin>>fruitprice;
cout<<"Enter Vegetable price per kg (in coins):";
cin>>vegprice;
cout<<"Enter total kg of vegetables:";
cin>>totalkgveg;
cout<<"Enter total kg of fruits:";
cin>>totalkgfruits;
totalcoins=(fruitprice*totalkgfruits)+(vegprice*totalkgveg);
rps=totalcoins/1.94;
cout<<"Total earnings in rupees (rps) is:"<<rps;
}
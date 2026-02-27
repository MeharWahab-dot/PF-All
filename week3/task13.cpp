#include<iostream>
using namespace std;
main(){
int population,birthrate,populationafterdecade;
cout<<"Enter the current world population:";
cin>>population;
cout<<"Enter the monthly birth rate per month:";
cin>>birthrate;
populationafterdecade=(birthrate*12)*30;
int totalpopulation;
totalpopulation=populationafterdecade+population;
cout<<"Population in three deacdes will be="<<totalpopulation;
}

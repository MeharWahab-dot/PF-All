#include<iostream>
using namespace std;
main(){
    int Month_salary=10000;
    int Advance_months=6;
    float advance=0.5;
    int advance_income=Month_salary*advance;
    int laptop=50000;
    int Total_advance=advance_income*Advance_months;
    if (Total_advance>laptop){
        cout<<"You can buy the laptop";
    }
    else{
        int months=laptop/advance_income;
        cout<<"Months required are:"<<months;
           
    }
    
}
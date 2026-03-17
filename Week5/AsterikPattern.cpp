#include<iostream>
using namespace std;
main(){
    int i,j;
    for(i=1;i<=5;i++)
    {	
        for( j=1;j<=i;j++)
        cout<<"*";
        cout<<"\n";
    }
    for(int k=5;k>=1;k--)
    {
        for(int p=1;p<=k;p++)
        cout<<"*";
        cout<<"\n";
    }
}


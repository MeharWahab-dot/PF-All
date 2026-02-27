#include<iostream>
using namespace std;
main(){
int MB;
float bits,kb,bytes;
cout<<"Enter megabytes:";
cin>>MB;
kb=MB*1024;
bytes=kb*1024;
bits=bytes*8;
cout<<MB<<" Mb is equal to" <<bits<< "bit";
}

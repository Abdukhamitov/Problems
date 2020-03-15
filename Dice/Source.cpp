#include <iostream>
using namespace std; int main() { long long a,b,c,d,mx,mn; cin>>c; mx=c*6; a=c/6; b=c%6; 
if (b==1) mn=a+6; if (b==2) mn=a+5; if (b==3) mn=a+4; if (b==4) mn=a+3; if (b==5) mn=a+2; 
if (b==0) mn=a; cout<<mn<<" "<<mx; } 
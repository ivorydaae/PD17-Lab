#include<iostream>
using namespace std;
int main(){int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>c){
int ya=a;a=c;
c=ya;
}  if(b>a&&b>c){
int yaya=b;b=c;c=yaya;}
if(a<b){
    int yayaya=a;a=b;b=yayaya;}
        {int yayayaya=a;a=b;b=yayayaya;}
      cout <<a<<" "<<b<<" "<<c;
return 0;}

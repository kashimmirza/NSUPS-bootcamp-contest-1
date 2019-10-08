#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#include<cstdio>
using namespace std;
int main(){
   int t;

cin>>t;

   double l,circle=0,square=0,shaded=0,dia=0;
   //pi=2*acos(0.0);
for(int i=1;i<=t;i++){
    cin>>l;
    circle=PI*l*l;
    dia=l*2;
    square=dia*dia;
    shaded=square-circle+.0000000001;
    printf("Case %d: %.2lf\n",i,shaded);



   }
   }






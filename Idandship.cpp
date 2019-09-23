#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
   char k;
   int n;
   cin>>n;
  while(n--){
    cin>>k;

   if(k=='B'||k=='b'){
    cout<<"BattleShip"<<endl;


   }
   else if(k=='C'||k=='c'){
      cout<<"Cruiser"<<endl;

   }
   else if(k=='D'||k=='d'){
    cout<<"Destroyer"<<endl;

   }
   else if(k=='F'||k=='f')
    cout<<"Frigate"<<endl;
   }
 return 0;

}

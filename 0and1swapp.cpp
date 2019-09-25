#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   int b[n];
   for(int i=0;i<n;i++){
       b[i]=a[i];


   }
   sort(b,b+n);
   int c1=0;
   for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
      c1++;
    }

   }
   if(c1==2||c1==0){
    cout<<"YES"<<endl;


   }
   else
   cout<<"NO"<<endl;



}

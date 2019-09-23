#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,a1,b1,t;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a>>b;
    a1=a,b1=b;
    t=0;


    while(b!=0){



            t=a%b;
            //cout<<t<<endl;
            a=b;
            b=t;

        }






    long long gcd=a;
    long long lcm= (a1*b1)/gcd;
    cout<<gcd<<" "<<lcm<<endl;
    }







}

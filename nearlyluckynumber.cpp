#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){
    long long a;
    cin>>a;
    int s=0;
    long long re=0;
    while(a!=0){
        re=a%10;
        if(re==4||re==7){
            s++;
        }
        a=a/10;


    }
    if(s==4||s==7){

        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;



}

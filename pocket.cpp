#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){

        cin>>a[i];


    }
    sort(a,a+n);
    int a1[1000],b1[1000];

    int ans=0,max=0;
    for(int i=0;i<n;i++){
             ans=0;

            for(int j=i;j<n;j++){
                if(a[i]==a[j]){
                        a1[i]=a[i];
                         b1[j]=a[i];
                    ans++;



                }


            }
            if(max<=ans){
                max=ans;
            }




    }
    cout<<max<<endl;







}

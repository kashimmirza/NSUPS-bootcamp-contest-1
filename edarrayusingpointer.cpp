#include<bits/stdc++.h>
using namespace std;
int main(){
  int m, n;
  cin>>m;
  cin>>n;
  int **b= new int*[n];
  for(int i=0;i<m;i++){
    b[i]=new int [m];



    }
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
         cin>>b[i][j];
     }
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cout<<b[i][j]<<" ";

      }
      cout<<endl;

    }
  }






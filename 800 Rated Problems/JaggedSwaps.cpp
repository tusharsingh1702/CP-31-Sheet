// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool static cmp(int a,int b){
      return a>b;
}
int main(){
      int t;
      cin>>t;
      while(t--){
           int n;
           cin>>n;
           vector<int>v;
         for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
         }

         if(v[0]==1){
            cout<<"Yes"<<endl;
         }
         else{
            cout<<"No"<<endl;
         }

      }

      return 0;
}
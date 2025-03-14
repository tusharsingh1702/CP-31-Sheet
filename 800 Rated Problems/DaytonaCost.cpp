// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cin>>t;
      while(t--){
           int n,k;
           cin>>n>>k;
            bool present=false;
            vector<int>v;
           for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num==k){
                  present=true;
            }
            v.push_back(num);
           }

           if(present){
            cout<<"Yes"<<endl;
           }
           else{
            cout<<"No"<<endl;
           }
          

      }

      return 0;
}
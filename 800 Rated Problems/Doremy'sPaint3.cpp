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

         unordered_map<int,int>mp;
         for(int i=0;i<n;i++){
            mp[v[i]]++;
         }

         if(mp.size()==1){
            cout<<"Yes"<<endl;
         }
         else if(mp.size()==2){
            vector<int>vec;
            for(auto it:mp){
                  vec.push_back(it.second);
            }
            if(abs(vec[0]-vec[1])<=1){
                  cout<<"Yes"<<endl;
            }
            else{
                  cout<<"No"<<endl;
            }  
         }
         else{
            cout<<"No"<<endl;
         }

      }

      return 0;
}
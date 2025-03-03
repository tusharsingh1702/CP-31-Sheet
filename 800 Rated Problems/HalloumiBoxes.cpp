// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
           int n,k;
           cin>>n>>k;
           vector<long long>vec;
           for(int i=0;i<n;i++){
            long long num;
            cin>>num;
            vec.push_back(num);
           }
           vector<long long>copy(vec.begin(),vec.end());
           sort(copy.begin(),copy.end());
           if(copy==vec || k>1){
            cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
 
      }
      return 0;
}
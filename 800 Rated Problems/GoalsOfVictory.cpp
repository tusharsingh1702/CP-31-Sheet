// #include <iostream>
// #include <numeric>
#include <bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cin>>t;
      while(t--){
           int n;
           cin>>n;
           vector<int>v;
           for(int i=1;i<n;i++){
                  int num;
                  cin>>num;
                  v.push_back(num);
           }
           int sum=accumulate(v.begin(),v.end(),0);
           cout<<sum*(-1)<<endl;
      }

      return 0;
}
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
           int n,x;
           cin>>n>>x;
           vector<int>vec;
           for(int i=0;i<n;i++){
            int num;
            cin>>num;
            vec.push_back(num);
           }
           int maxAns=vec[0]-0;

           if(n>1){
            for(int i=1;i<n;i++){
                  maxAns=max(maxAns,vec[i]-vec[i-1]);
            }
           }

           maxAns=max(maxAns,(x-vec[n-1])*2);

           cout<<maxAns<<endl;

           }

      return 0;
}
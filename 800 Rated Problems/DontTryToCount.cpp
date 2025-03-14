// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool getSubString(string x,string s,int m){
      int n=x.length();
      if(n<m){
            return false;
      }
      for(int i=0;i<=n-m;i++){
            if(x.substr(i,m)==s){
                  return true;
            }
      }
      return false;
}
int main(){
      int t;
      cin>>t;
      while(t--){
           int n,m;
           cin>>n>>m;
            string x="",s="";
            cin>>x;
            cin>>s;
            int i=0;
            bool isSubString=getSubString(x,s,m);
            if(isSubString){
                  cout<<i<<endl;
            }
            else{
                  bool isSubString=false;
                  while(i<5){
                        x+=x;
                        isSubString=getSubString(x,s,m);
                        if(isSubString){
                              cout<<i+1<<endl;
                              break;
                        }
                        i++;
                  }
                  if(!isSubString){
                        cout<<"-1"<<endl;
                  }
            }

      }

      return 0;
}
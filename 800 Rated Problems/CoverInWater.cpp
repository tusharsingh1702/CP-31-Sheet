#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
           int n;
           cin>>n;
            string s="";
            cin>>s;
            int emptyCells=0;
            int i=0;
            bool threeCells=false;
            while(i<n){
                  if(s[i]=='#'){
                        i++;
                        continue;
                  }
                  else if(i>0 && i<n-1 && s[i]=='.' && s[i-1]=='f' && s[i+1]=='.'){
                        threeCells=true;
                        break;
                  }
                  else{
                        s[i]='f';
                        emptyCells++;
                        i++;
                  }
            }
            if(threeCells){
                  cout<<"2"<<endl;
            }
            else{
                  cout<<emptyCells<<endl;
            }

      }

      return 0;
}
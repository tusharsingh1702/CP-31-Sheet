// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cin>>t;

      vector<vector<int>>point={{1,1,1,1,1,1,1,1,1,1},{1,2,2,2,2,2,2,2,2,1},
      {1,2,3,3,3,3,3,3,2,1},{1,2,3,4,4,4,4,3,2,1},
{1,2,3,4,5,5,4,3,2,1},{1,2,3,4,5,5,4,3,2,1},{1,2,3,4,4,4,4,3,2,1},{1,2,3,3,3,3,3,3,2,1},{1,2,2,2,2,2,2,2,2,1},{1,1,1,1,1,1,1,1,1,1}};
      while(t--){
            vector<vector<char>>vec(10,vector<char>(10,'.'));

            for(int i=0;i<10;i++){
                  for(int j=0;j<10;j++){
                        char c;
                        cin>>c;
                        vec[i][j]=c;
                  }
            }

            int points=0;
            for(int i=0;i<10;i++){
                  for(int j=0;j<10;j++){
                        if(vec[i][j]=='X'){
                              points+=point[i][j];
                        }
                  }
            }
            cout<<points<<endl;
      }
}


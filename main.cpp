#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m;
int result=0;
vector<int>v;
int main(){
  cin>>n>>m;
  for(int i=0; i<n; i++){
    int num;
    cin>>num;
    v.push_back(num);
  }

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      for(int k=j+1; k<n; k++){
        if(v[i]+v[j]+v[k]<=m && m-result>m-(v[i]+v[j]+v[k])) result = v[i]+v[j]+v[k];
      }
    }
  }
  cout<<result;
}
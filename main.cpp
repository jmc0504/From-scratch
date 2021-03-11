#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,x,y;



int main(){
  cin>>n;
  vector<pair<int,int>>size(n);
  vector<int>result(n,1);
  for(int i=0; i<n; i++){
    cin>>size[i].first>>size[i].second;
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(size[i].first<size[j].first && size[i].second<size[j].second && i!=j) result[i]++;
    }
    cout<<result[i]<<" ";
  }

 
}
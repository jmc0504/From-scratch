#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long n,price=0;
vector<long long>road;
vector<long long>oil;

int main(){
  cin>>n;
  for(int i=0; i<n-1; i++){
    int o;
    cin>>o;
    road.push_back(o);
  }
  for(int i=0; i<n; i++){
    int o;
    cin>>o;
    oil.push_back(o);
  }
  long long oil_price=1000000001,length;
  for(int i=0; i<n; i++){
    if(oil_price>oil[i]) oil_price = oil[i];
    price+=oil_price*road[i];
  }
  cout<<price;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N,result=0;


bool a(pair<int,int>b,pair<int,int>c){
  if(b.second==c.second) return b.first<c.first;
  return b.second<c.second;
}

int main(){
  cin>>N;
  vector<pair<long long,long long>>container(N);
  for(int i=0; i<N; i++){
    cin>>container[i].first>>container[i].second;
  }
  sort(container.begin(),container.end(),a);

  int first=-1,second=-1,num=0;
  for(int i=0; i<N; i++){
    if(container[i].first>=second) {
      first = container[i].first;
      second = container[i].second;
      result++;
    }
    if(first == container[N-1].first && second == container[N-1].second) break;
  }
  cout<<result;
}
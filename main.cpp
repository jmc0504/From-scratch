#include<iostream>
using namespace std;

int N,K,result=0;
int main(){
  cin>>N>>K;
  int* lis = new int[N];

  for(int i=0; i<N; i++){
    cin>>lis[i];
  }

  for(int i = N-1; i>-1; i--){
    if(K==0) break;
    result+=K/lis[i];
    K-=lis[i]*(K/lis[i]);
  }

  cout<<result;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,buffer;
int result=0;

int disintegrate(int a){
  int result=a, b=1;
  while(b*10<a) b*=10;
  while(b>0){
    result+=a/b;
    a-=b*(a/b);
    b/=10;
  }
  return result;
}


int main(){
  cin>>n;
  for(int i=1; i<n; i++){
    if(disintegrate(i)==n){
      result = i;
      break;
    }
  }
  cout<<result;
}
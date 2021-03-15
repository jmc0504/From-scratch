#include<iostream>
#include<vector>
using namespace std;

int n,num=666;
string t;

int main(){
  int size=0;
  cin>>n;

  while(true){
    t = to_string(num);
    if(t.find("666")!=-1) size++;
    if(size==n) break;
    else num++;
  }
  cout<<num;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string a;
vector<int>minus_index;
int result = 0, index = 0;

int main(){
  int minus = 1;
  cin>>a;
  for(int i=0; i<a.size(); i++){
    if(a[i] == '+' || a[i] == '-'){
      result+=stoi(a.substr(index,i))*minus;
      index = i+1;
      if(a[i] == '-') minus = -1;
    }
  }
  result+=stoi(a.substr(index,a.size()-index))*minus;
  cout<<result;
}
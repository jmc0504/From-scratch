#include<iostream>
#include<stack>
using namespace std;

int n,result=0;
stack<int>v;

int main(){
  cin>>n;

  for(int i=0; i<n; i++){
    int l;
    cin>>l;

    if(l!=0){v.push(l);}
    else{v.pop();}
  }
  
  for(int i=v.size(); i>0; i--){
    result+=v.top();
    v.pop();
  }
  cout<<result;
}

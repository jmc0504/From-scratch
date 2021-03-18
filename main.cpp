#include<iostream>
#include<vector>
using namespace std;

/*
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/


int n;
vector<int>v;
string x;

int main(){
  cin>>n;
  
  while(n){
    cin>>x;
    if(x.find("push")!=-1){
      cin>>x;
      int k = stoi(x);
      v.push_back(k);
    }
    else if(x.find("pop")!=-1){
      if(v.size()!=0){
        cout<<v[v.size()-1]<<endl;
        v.pop_back();
      }
      else cout<<-1<<endl;
    }
    else if(x.find("size")!=-1){
      cout<<v.size()<<endl;
    }
    else if(x.find("empty")!=-1){
      cout<<v.empty()<<endl;
    }
    else if(x.find("top")!=-1){
      if(v.size()!=0) cout<<v[v.size()-1]<<endl;
      else cout<<-1<<endl;
    }
    n--;
  }
}

#include<iostream>
#include<stack>
using namespace std;

string x;

int main(){
  
  while(true){
    getline(cin,x);
    stack<char> st;
    if(x==".") break;
    for(int i=0; i<x.size(); i++){
      if(x[i] == '[' || x[i] == '(')
        st.push(x[i]);

      else if(x[i] == ']'){
        if(st.empty() || st.top() != '['){
          cout<<"no"<<endl;
          break;
        }
        st.pop();
      }
    
      else if(x[i] == ')'){
        if(st.empty() || st.top() != '('){
          cout<<"no"<<endl;
          break;
        }
        st.pop();
      }

      if(i==x.size()-1){
        if(st.empty())cout<<"yes"<<endl;
        else cout<<"no"<<endl;
      }

    }
  }
  return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N,P,result=0;
vector<int>atm;
int main(){
 cin>>N;
 for(int i=0; i<N; i++){
   cin>>P;
   atm.push_back(P);
 }
 sort(atm.begin(),atm.end());
 for(int i=0; i<N; i++){
   for(int j=0; j<=i; j++){
     result+=atm[j];
   }
 }
 cout<<result;
}
#include<iostream>
#include<vector>
using namespace std;

int n,m,result = 99999;

int main(){
  cin>>n>>m;
  vector<vector<char>>chess(n,vector<char>(m));

  for(auto& row : chess){
    for(auto& col : row){
      cin>>col;
    }
  }
  
  int b_result,w_result;
  for(int col_point=0; col_point<m-7; col_point++){
    for(int row_point=0; row_point<n-7; row_point++){
      b_result=0,w_result=0;
      for(int row = row_point; row<row_point+8; row++){
        for(int col = col_point; col<col_point+8; col++){
          if ((row + col) % 2 == 0) {
						if (chess[row][col] == 'W') w_result++;
						else b_result++;
					}
					else {
						if (chess[row][col] == 'W') b_result++;
						else w_result++;
					}
        }
      }
      if(result>b_result) result = b_result;
      if(result>w_result) result = w_result;
    }
  }
  cout<<result;
}

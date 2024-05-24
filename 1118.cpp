#include <bits/stdc++.h>

using namespace std;

#define MAX 100

int cost[MAX][MAX];
int state[MAX][MAX];

int main(){
  int N;
  if(N == 0) return 0;
  while(cin>>N){
    for(int i=0;i<MAX;i++)
      for(int j=0;j<MAX;j++){
	cost[i][j] = -1;
	state[i][j] = 0;
      }
    
    
    for(int i=0;i<(N*(N-1))/2;i++){
      int x,y;
      cin>>x>>y;
      cin>>cost[x][y];
      cost[y][x] = cost[x][y];
      cin>>state[x][y];
      state[y][x]=state[x][y];
    }
    // Î´Íê´ıĞø


  }


}

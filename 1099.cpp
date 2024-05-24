#include <bits/stdc++.h>
#define MAX_SIZE 110

using namespace std;

int n,m;

char oil[MAX_SIZE][MAX_SIZE];
int flag[MAX_SIZE][MAX_SIZE];

int vaild(int i,int j){
  if(i>=0 && i<n && j>=0 && j<m){
    return 1;
  }
  return 0;
}
int ch1[8]={0,1,1,1,0,-1,-1,-1};
int ch2[8]={1,1,0,-1,-1,-1,0,1};
void dfs(int i,int j){
  for(int i1=0;i1<8;i1++){
    if(vaild(ch1[i1]+i,ch2[i1]+j) && oil[ch1[i1]+i][ch2[i1]+j]=='@'
       && flag[i+ch1[i1]][j+ch2[i1]]==0){
      flag[i+ch1[i1]][j+ch2[i1]] = 1;
      dfs(i+ch1[i1],j+ch2[i1]);
    }
  }
}
      

int main(){
  int ans = 0;
  for(int i=0;i<MAX_SIZE;i++)
    for(int j=0;j<MAX_SIZE;j++){
      oil[i][j] = '0';
      flag[i][j] = 0;
    }
      
  while(cin>>n){
    ans = 0;
    cin>>m;

    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
	flag[i][j] = 0;
    
    if(n == 0 && m == 0) break;
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
	cin>>oil[i][j];
    
   
    // 采用类似于图的深度优先遍历
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++){
	if(flag[i][j]==0 && oil[i][j]=='@'){
	  flag[i][j] = 1;
	  dfs(i,j);
	  ans++;
	}
      }

    cout<<ans<<endl;
  }
  return 0;
}
    
    

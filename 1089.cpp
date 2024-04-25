#include <bits/stdc++.h>

using namespace std;

typedef struct Node{
	int first;
	int second;
}Node;

int step[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

int mize[5][5];
vector<int> path; // 每次的路径 
vector<int> best; // 最好的路径 

void dfs(Node pos){
	if(pos.first == 4 && pos.second == 4){
		if(path.size() < best.size() || best.size() == 0){
			best.clear();
			for(int i=0;i<path.size();i++){
				best.push_back(path[i]);
			}
		}
		return;
	}
	
	
	for(int i=0;i<4;i++){
		int first = pos.first+step[i][0];
		int second = pos.second+step[i][1];
		if( first<5 && first >= 0 && second < 5 && second >= 0 &&
			mize[first][second] == 0){
				
			Node pos1;pos1.first = first;pos1.second = second;
			mize[first][second]=1;
			path.push_back(first*5+second);
			dfs(pos1);
			path.pop_back();
			mize[first][second]=0;
		}
	}
	

} 


int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>mize[i][j];
		}
	}
	path.push_back(0);
	Node node;
	node.first=0;node.second=0;
	// 矩阵输入完毕
	dfs(node);
	for(int i=0;i<best.size();i++){
		cout<<"("<<best[i]/5<<", "<<best[i]%5<<")"<<endl;
	}
	
	
} 

#include <bits/stdc++.h>

using namespace std;

int res = 0;

set<int> col; // 存放什么数值不合法 
set<int> lean; // 存放什么数值不合法 
set<int> rlean; // 存放什么数值不合法 

int n;

void Next(int line){
	for(int i=0;i<n;i++){
		// 四个检测值
		if(col.find(i) != col.end()) continue;
	    if(lean.find(line - i)!=lean.end()) continue; 
		if(rlean.find(line + i)!=rlean.end()) continue; 
		// 这个位置可以 
		if(line == n-1){// 这次递归已经是最后一行了 
			res++;
			return; 
		}
		else{			
			col.insert(i);
			lean.insert(line - i);
			rlean.insert(line + i);
			
			Next(line+1);
			
			col.erase(i);
			lean.erase(line - i);
			rlean.erase(line + i);
		}
			
	}
} 

int main(){

	cin>>n;
	Next(0);
	printf("%d\n",res);
	
} 



#include <bits/stdc++.h>

using namespace std;

int res = 0;

set<int> col; // ���ʲô��ֵ���Ϸ� 
set<int> lean; // ���ʲô��ֵ���Ϸ� 
set<int> rlean; // ���ʲô��ֵ���Ϸ� 

int n;

void Next(int line){
	for(int i=0;i<n;i++){
		// �ĸ����ֵ
		if(col.find(i) != col.end()) continue;
	    if(lean.find(line - i)!=lean.end()) continue; 
		if(rlean.find(line + i)!=rlean.end()) continue; 
		// ���λ�ÿ��� 
		if(line == n-1){// ��εݹ��Ѿ������һ���� 
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



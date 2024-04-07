#include <bits/stdc++.h>

using namespace std;

typedef struct Node{
	int value;
	int pos;
}Node;

void find(vector<Node>& vec,int start,int end,long num){
	if(start == end && vec[start].value == num){
		cout<<vec[start].pos<<endl;
		return;
	}
	else if(start == end && vec[start].value != num){
		cout<<-1<<endl;return;
	}

	int mid = (start+end) / 2;
	if(vec[mid].value == num){
		cout<<vec[mid].pos<<endl;
	}
	else if(vec[mid].value>num){
		end = mid;
		find(vec,start,end,num);
	}
	else{
		start = mid+1;
		find(vec,start,end,num);
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<Node> vec;
	for(int i=0;i<n;i++){
		Node num;
		cin>>num.value;
		num.pos =  i;
		if(i == 0){
			vec.push_back(num);
		}
		else{
			int last = vec[vec.size()-1].value;
			if(last != num.value){
				vec.push_back(num);
			}
		}
	
	}
	for(int i=0;i<m;i++){
		long num1;
		cin>>num1;
		find(vec,0,vec.size()-1,num1);
	}
	
	
	
	
	
	
}

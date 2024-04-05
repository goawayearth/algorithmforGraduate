#include <bits/stdc++.h>

using namespace std;

typedef struct{
	int first,second;
}Node; 

bool compare1(const Node& a,const Node& b){
	return a.first<b.first;
}

int main(){
	string s;
	stack<int> stack1;
	vector<Node> vec;
	while(cin>>s){
		vec.clear();
		for(int i=0;i<s.size();i++){
			if(s[i] == '('){
				stack1.push(i+1);
			}
			else{
				Node a;
				a.first = stack1.top();
				a.second = i+1;
				vec.push_back(a);
				stack1.pop();
			}
			
		}
		sort(vec.begin(),vec.end(),compare1);
		for(int i=0;i<vec.size();i++){
			printf("%d %d\n",vec[i].first,vec[i].second);
		}
	}
}

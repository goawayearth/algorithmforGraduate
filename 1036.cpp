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


/*

#include <bits/stdc++.h>

using namespace std;


int main(){
	string s;
	stack<int> stack1;
	map<int,int> map1; 
	while(cin>>s){
		map1.clear();
		for(int i=0;i<s.size();i++){
			if(s[i] == '('){
				stack1.push(i+1);
			}
			else{
				map1.insert(make_pair(stack1.top(),i+1));
				stack1.pop();
			}
			
		}
		map<int,int>::iterator it;
		for(it=map1.begin();it!=map1.end();it++){
			printf("%d %d\n",it->first,it->second);
		}
	}
}


*/
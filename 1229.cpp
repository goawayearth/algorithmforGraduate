#include <bits/stdc++.h>

using namespace std;


int main(){
	string s;
	while(cin>>s){
		stack<char> stack1;
		int i;
		for( i=0;i<s.size();i++){
			if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
				stack1.push(s[i]);
			}
			else if(s[i] == ')'){
				if(stack1.size()==0){
					break;
				}
				char c = stack1.top();
				if(c == '(') stack1.pop();
				else {
					break;
				}
			}
			else if(s[i] == ']'){
				if(stack1.size()==0){
					break;
				}
				char c = stack1.top();
				if(c == '[') stack1.pop();
				else {
					break;
				}
			}
			else if(s[i] == '}'){
				if(stack1.size()==0){
					break;
				}
				char c = stack1.top();
				if(c == '{') stack1.pop();
				else {
					break;
				}
			}
		}
		if(i==s.size() && stack1.size()==0){
			printf("yes\n");continue;
		}
		else printf("no\n");
	}
}
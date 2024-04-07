#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	while(cin>>s){
		stack<char> stack1; // 数值栈
		stack<char> stack2; // 符号栈
		for(int i=0;i<s.size();i++){
			if(s[i] == '+' || s[i] == '-' s[i] == '*' s[i] == '/'){
				//是符号
				if(stack2.size() == 0){
					stack2.push(s[i]);
				}
				else if()
			}
			else{
				//是数值
			}
		}
	}
} 
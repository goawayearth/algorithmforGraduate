#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long num;
		cin>>num;
		if(num == 0){
			printf("0\n");
			continue;
		}
		stack<int> stack1;
		while(num){
			stack1.push(num%8);
			num /= 8;
		}
		while(stack1.size()){
			printf("%d",stack1.top());
			stack1.pop();
		}
		printf("\n");
	}
	
} 

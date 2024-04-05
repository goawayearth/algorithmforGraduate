#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 0;
	while(cin>>n){
		vector<int> vec;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			vec.push_back(num);
		}
		for(int i=vec.size()-1;i>=0;i--){
			printf("%d ",vec[i]);
		}
		printf("\n");
	}
}
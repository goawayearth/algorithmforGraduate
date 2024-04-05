#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n == 0) {
			printf("error\n");
			continue;
		}
		vector<int> vec;
		int min = 0;
		for(int i=0;i<n;i++){
			int num;
			cin>>num; // 输入数据
			vec.push_back(num);
			if(num<vec[min]) min = i;
		}
		int mins = vec[min];
		vec[min] = vec[vec.size()-1];
		printf("%d\n",mins);
		for(int i=0;i<vec.size()-1;i++){
			printf("%d ",vec[i]);
		}
		printf("\n");

	}
}
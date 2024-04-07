#include <bits/stdc++.h>
using namespace std;

map<int,int> map1;



int main(){
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		int sum = 0;
		vector<int> vec;
		for(int i=m;i<=n;i++){
			if(map1.find(i) == map1.end()){
				// Ã»ÕÒµ½
				int one = i / 100;
				int two = (i - one * 100) / 10;
				int three = i % 10;
				if(pow(one,3)+pow(two,3)+pow(three,3) == i){
					vec.push_back(i);
				}
				
			}
			else{
				vec.push_back(i);
			}
		}
		if(vec.size() == 0){
			printf("no\n");
			
		}
		else{
			for(int i=0;i<vec.size()-1;i++){
				printf("%d ",vec[i]);
			}
			printf("%d\n",vec[vec.size()-1]);
		}
	}
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x;
	while(cin>>n>>x){
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(num != x) printf("%d ",num);
		}
	}
}
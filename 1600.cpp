#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		vector<int> vec(n+1);
		for(int i=1;i<=n;i++){
			scanf("%d",&vec[i]);
		}
		int start = 1;
		int end = 1;
		int pos = 1;int ans = 0;
		while(ans<=n){
			pos = end;
			for(int i=start;i<=end;i++){
				pos = max(pos,i+vec[i]);
			}
			if(pos>=n){
				break;
			}
			start = end+1;
			end = pos;
			ans++;
		}
		if(pos<n){
			printf("-1\n");
		}
		else
			printf("%d\n",ans-1);
	} 
	
	
	
	
}

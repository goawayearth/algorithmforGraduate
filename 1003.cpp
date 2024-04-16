#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	
	while(cin>>n){
		int res = 0;
		for(int i=0;i<n;i++){
			int w;
			cin>>w;
			
			int time = (w / 100);
			w -= (time * 100);
			res += time;

			time = (w / 50);
			w -= (time * 50);
			res += time;
			
			time = (w / 10);
			w -= (time * 10);
			res += time;
			
			time = (w / 5);
			w -= (time * 5);
			res += time;
			
			time = (w / 2);
			w -= (time * 2);
			res += time;
			
			time = (w / 1);
			w -= (time * 1);
			res += time;
		}
		cout<<res<<endl;
	}
	
}

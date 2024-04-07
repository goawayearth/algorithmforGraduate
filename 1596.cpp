#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		vector<long long> vec;
		vec.push_back(1); // 代表0的有几对 
		vec.push_back(0); // 代表1的有几对，1的生娃，0的长大 
		vec[0] = 1;
		vec[1] = 0;
		while(n--){
			long long grow = vec[0];
			long long adult = vec[1];
			vec[1] += grow;
			vec[0] = adult; 
		}
		printf("%lld\n",vec[0]+vec[1]);
	}
}

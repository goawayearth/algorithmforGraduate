#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		vector<long long> vec;
		vec.push_back(1); // ����0���м��� 
		vec.push_back(0); // ����1���м��ԣ�1�����ޣ�0�ĳ��� 
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

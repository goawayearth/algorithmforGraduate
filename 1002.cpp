#include <bits/stdc++.h>

using namespace std;

int main(){
	
	set<char> set1;
	set1.insert('~');
	set1.insert('!');
	set1.insert('@');
	set1.insert('#');
	set1.insert('$');
	set1.insert('%');
	set1.insert('^');

	string str;
	while(cin>>str){
		vector<int>vec(4);
		if(str.size() < 8){
			printf("NO\n");
			continue;
		}
		int n = str.size();
		for(int i=0;i<n;i++){
			if(str[i]>='A' && str[i]<='Z') vec[0] = 1;
			else if(str[i]>='a' && str[i]<='z') vec[1] = 1;
			else if(str[i]>='0' && str[i]<='9') vec[3] = 1;
			else if(set1.find(str[i]) != set1.end()) vec[2] = 1;
		}
		if(vec[0]+ vec[1] + vec[2] + vec[3] >= 3){
				printf("YES\n");
		}
		else printf("NO\n");
	}
}

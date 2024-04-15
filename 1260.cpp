#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	vector<char> vec(s.size());
	for(int i=0;i<s.size();i++){
		vec[i] = s[i];
	}
	int pos = 0;
	while(pos<vec.size()-1){
		if(vec[pos] == vec[pos+1]){
			vec.erase(vec.begin()+pos);
			vec.erase(vec.begin()+pos);
			pos--;
			if(pos<0) pos = 0;
		}
		else{
			pos++;
		}
	}
	/*for(int i=0;i<vec.size();i++){
		cout<<vec[i];
	}*/
	if(vec.size() == 0){
		cout<<"";
	}
	cout<<endl;
	
}
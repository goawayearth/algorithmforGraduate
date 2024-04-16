#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n>=0 && n <=71) cout<<'E'<<endl;
		else if(n>=72 && n <= 79) cout<<'D'<<endl;
		else if(n>=80 && n <= 99) cout<<'C'<<endl;
		else if(n>=100 && n <= 107) cout<<'B'<<endl;
		else if(n>=108 && n <= 120) cout<<'A'<<endl;
		else cout<<"Score is error!"<<endl;
	}
}

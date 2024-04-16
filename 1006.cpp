#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	while(cin>>m>>n){
		long long f = 0;// Å¼Êý 
		long long s = 0; 
		int start = m < n ? m : n;
		int end = n > m ? n+1 : m+1;

		for(int i=start;i<end;i++){
			if(i % 2 == 0){
				f += pow(i,2);
			
			}
			else{
				s += pow(i,3); 
			}
		}
		cout<<f<<" "<<s<<endl;
	}
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		vector<vector<int> > matrix(n,vector<int>(n));
//		int matrix[110][110];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>matrix[i][j];
			}
		}// ‰»ÎÕÍ±œ
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ",matrix[n-j-1][i]);
			}
			printf("\n");
		} 
	}
}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int min1 = 1000;
//
//void track(vector<int>&vec,stack<int>& stack1,int sum,int target,int pos){
//	if(sum == target){
//		int count = stack1.size();
//		if(min1 > count) min1 = count;
//		return;
//	}
//	else if(sum > target || pos >= vec.size()){
//		return ;
//	}
//	if(vec[pos] == 0) pos++;
//	sum += vec[pos];
//	stack1.push(pos);
//	track(vec,stack1,sum,target,pos); 
//	sum -= vec[pos];
//	stack1.pop();
//	track(vec,stack1,sum,target,pos+1); 
//}
//
//int main(){
//	int T;
//	cin>>T;
//	while(T--){
//		min1 = 1000;
//		
//		int n,m;
//		cin>>n>>m;
//		vector<int>vec(n);
//		stack<int> stack1;
//		for(int i=0;i<n;i++){
//			cin>>vec[i];
//		}
//		track(vec,stack1,0,m,0);
//		if(min1 == 1000) printf("-1\n");
//		else printf("%d\n",min1);
//		 
//	}
//} 


#include <bits/stdc++.h>

using namespace std;


int main(){
	int T;
	cin>>T;
	while(T--){
		int n,m;
		cin>>n>>m;
		vector<int> vec(n);// this is given for selecting
		vector<int> dy(m+1,1100);// this is every step of solution 
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		dy[0] = 0; // zero needs none
		for(int i=1;i<=m;i++){ // every step can select any number in vec
			for(int j=0;j<n;j++){
				if(vec[j] <= i && dy[i-vec[j]] != 1100){
					dy[i] = min(dy[i],dy[i-vec[j]]+1);
				}
			}
		}
		int min = dy[m] < 1100 ? dy[m]:-1;
		printf("%d\n",min);
	}
} 













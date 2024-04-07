#include <bits/stdc++.h>

using namespace std;

int main(){
	char str[110];
	int sum = 0;
	while(scanf("%s",str)!=EOF){
		sum++; // 记录是第几组
		int length = strlen(str);
		int left = 0;
		int right = length-1;
		while(right >= left){
			if(str[left] != str[right]){
				break;
			}
			right--;left++;
		}
		printf("case%d: ",sum);
		if(left<=right)
			printf("no\n");
		else 
			printf("yes\n");
	}
}

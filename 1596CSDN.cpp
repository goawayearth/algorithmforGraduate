#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;
int n;
LL f[55]={0,1,2}; // 使用long long 类型
 
void init(){
    for(int i = 3; i <= 50; i++){
        f[i] = f[i - 2] + f[i - 1]; // 自己推出前5项，总结出规律
    }
}
int main(){
    init(); // 预处理出前50项，提高效率
    while(~scanf("%d", &n)){
        printf("%lld\n", f[n]);
    }
    return 0;   
} 


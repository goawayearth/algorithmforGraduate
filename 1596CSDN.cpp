#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;
int n;
LL f[55]={0,1,2}; // ʹ��long long ����
 
void init(){
    for(int i = 3; i <= 50; i++){
        f[i] = f[i - 2] + f[i - 1]; // �Լ��Ƴ�ǰ5��ܽ������
    }
}
int main(){
    init(); // Ԥ�����ǰ50����Ч��
    while(~scanf("%d", &n)){
        printf("%lld\n", f[n]);
    }
    return 0;   
} 


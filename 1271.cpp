#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
	int data;
	struct Node* next;
}Node;

int main(){
	
	int N,L,R;
	cin>>N>>L>>R;
	Node* head = (Node*)malloc(sizeof(Node));
	Node* pos = head;
	head->next = NULL;
	for(int i=0;i<N;i++){
		Node *p = (Node*)malloc(sizeof(Node));
		cin>>p->data;
		p->next = NULL;
		pos->next = p;
		pos = p;
	}
	if(N == 1){
		cout<<head->next->data<<endl;
		return 0;
	}
	if(R == L){
		Node* pp = head->next;
		while(pp){
			cout<<pp->data<<" ";
			pp = pp->next;
		}
	cout<<endl;
	return 0;
	}
	
	
	// 数据输入完毕
	int times = L - 1;
	pos = head;
	while(times--){
		pos = pos->next;
	}
	
	
	Node* Left = pos->next; 
	Node* first = Left->next;
	Node* second = first->next;
	int ti = R - L;
	while(ti--){
		Left->next = second;
		first->next = pos->next;
		pos->next = first;
		if(ti){
			first = second;
			second = first->next;
		}
	}
	
	
	
	Node* pp = head->next;
	while(pp){
		cout<<pp->data<<" ";
		pp = pp->next;
	}
	cout<<endl;
} 

#include <bits/stdc++.h>

using namespace std;
typedef struct Node{
	int data;
	struct Node *next;
}Node;
int main(){
	Node* head = (Node*)malloc(sizeof(Node));
	head->next = NULL; 
	Node* p = head;
	int N,k;
	cin>>N>>k;
	for(int i=0;i<N;i++){
		Node *t = (Node*)malloc(sizeof(Node));
		cin>>t->data;
		t->next = NULL;
		p->next = t;
		p = t;
	}
	// 需要走 N - k步 
	p = head;
	int t1=N-k;
	while(t1--){
		p = p->next;
	} 
	Node* q = p->next;
	p->next = q->next;
	free(q);
	p = head->next;
	while(p){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
	
} 

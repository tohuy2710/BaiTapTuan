#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

Node *deleteHead(Node *l){
	Node *p = l;
	p = p->next;
	delete(l);
	return p;
}

Node *deleteAt(Node *l, int k){
	Node *p = l;
	for (int i = 0; i < k-1; i++){
		p = p->next;
	}
	Node *temp = p->next;
	p->next = p->next->next;
	delete(temp);
	return l;
}

Node* deleteNode(Node* head, int pos)
{
    if(pos == 0){
        return deleteHead(head);
    }
    return deleteAt(head, pos); 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    
    return 0;
}
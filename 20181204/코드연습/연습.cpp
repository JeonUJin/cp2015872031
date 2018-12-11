#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int score;
	struct node* pNext;
} Node;

void printLL(Node*ptr){
	while(ptr != NULL){
		printf("score = %d\n", ptr -> score);
		ptr = ptr -> pNext;
	}
}

Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(ptr));
	ptr -> score = input;
	ptr -> pNext = NULL;

	return ptr;
}

void addHead(Node** ppHead, Node* pNewNode){
	pNewNode -> pNext = *ppHead;
	*ppHead = pNewNode;
}

int main(){
	Node* pHead = NULL, *ptr;
	pHead = createNode(10);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	printLL(pHead);

	return 0;
}













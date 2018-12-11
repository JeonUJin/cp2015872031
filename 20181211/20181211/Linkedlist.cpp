//Linked List 연습
#include <stdio.h>
#include <stdlib.h>
	typedef struct node {
	int score;
	struct node* pNext;
} Node;

	typedef struct linkedlist{
		Node* pHead;
		Node* pTail;
		int nNode;
	} Linkedlist;

double averageLL(Node*ptr){
	int sum = 0, count = 0;
	double average;
	while(ptr != NULL){
		sum += ptr -> score;
		count++;
	
		ptr = ptr -> pNext;
	}
	average = (double) sum/count;
	return average;
}

//함수 returnTail()
//입력 : 연결리스트
//출력 : 마지막 노드의 포인터
//부수효과 : 없음
Node* returnTail(Node*ptr){
	if(ptr ==NULL)//연결리스트에 노드가 없음
		return NULL;
	
	while(ptr != NULL){
		if (ptr -> pNext == NULL)
			return ptr;
		ptr = ptr -> pNext;
	}
}

//함수 : addTail()
//입력 : 연결리스트, 추가하려는 노드 포인터
//출력 : 없음
//부수효과 : 추가하려는 노드가 연결리스트의 tail 로 추가됨
void addTail(Node* pHead, Node* pNode){
	if(pHead == NULL){
		printf("error \n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail -> pNext = pNode;                ////여기에 NULL 넣으면 함수가 터져버림 주의!
}



//함수 printL() 화면에 연결리스트의 score 값을 출력
//입력 연결리스트(연결리스트의 헤드노드 포인터)
//출력 없음
//부수효과 없음
/*void printLL(Node*ptr){
	while(ptr != NULL){
		printf("score = %d\n", ptr -> score);
		ptr = ptr -> pNext;
	}
}*/

void printLL(Linkedlist* pList){
	Node*ptr = pList -> pHead;
	while(ptr != NULL){
		printf("score = %d\n", ptr -> score);
		ptr = ptr -> pNext;
	}
}
//함수 createNode() 
//입력 성적
//출력 노드하나를 동작할당으로 생성하여 반환한다. 이때 score = 입력 pNext = NULL로 한다.
//부수효과 없음
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL; //while 문이 위에 있으므로 스코어 입력후 구문 끝나도록 설정
	return ptr;
}
//함수 addHead()
//입력 연결리스트, 새 노드
//출력 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가
/*void addHead(Node** ppHead, Node* pNewNode){         
	pNewNode -> pNext = *ppHead;
	*ppHead = pNewNode;
}*/

void addHead(Linkedlist* pList, Node* pNewNode){         
	if(pList -> pHead == NULL)
		pList -> pTail = pNewNode;

	//#1
	pNewNode -> pNext = pList -> pHead;
	//#2
	pList -> pHead = pNewNode;
	(pList -> nNode)++;
}


int main(){
	/*double test;
	test = 10/4; //1. (10/4) --> 2를 반환. 2. 정수형 2를 double형 2.0으로 변환
	printf("test = %f\n", test);
	test = 10.0/4; //1. (10.0/4) --> 2.5를 반환
	printf("test = %f\n", test);
	test = ((double)10)/4; //1. 정수형(int) 10을 실수형(double) 10.0으로 변환
	printf("test = %f\n", test);
*/
	Linkedlist* pList;
	pList = (Linkedlist*) malloc(sizeof(Linkedlist));
	pList -> pHead = pList -> pTail = NULL; pList -> nNode = 0;
	addHead (pList, createNode(10));
	addHead (pList, createNode(20));
	addHead (pList, createNode(30));
	addHead (pList, createNode(40));
	printLL (pList);

	/*Node* pHead = NULL, *ptr;//헤드노드의 포인터, Null이면 연결리스트가 없다는 뜻으로 약속하자.
	pHead = createNode(11);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	addTail(pHead, createNode(100));
	//pHead->pNext = createNode(20);
	//printLL(pHead);
	printLL(pHead);
	printf("average = %f\n", averageLL(pHead));
	
	pHead = NULL;
	addTail(pHead, createNode(100));
	printLL(pHead);
	*/
	return 0;
}

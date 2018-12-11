//Linked List ����
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

//�Լ� returnTail()
//�Է� : ���Ḯ��Ʈ
//��� : ������ ����� ������
//�μ�ȿ�� : ����
Node* returnTail(Node*ptr){
	if(ptr ==NULL)//���Ḯ��Ʈ�� ��尡 ����
		return NULL;
	
	while(ptr != NULL){
		if (ptr -> pNext == NULL)
			return ptr;
		ptr = ptr -> pNext;
	}
}

//�Լ� : addTail()
//�Է� : ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//��� : ����
//�μ�ȿ�� : �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail �� �߰���
void addTail(Node* pHead, Node* pNode){
	if(pHead == NULL){
		printf("error \n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail -> pNext = pNode;                ////���⿡ NULL ������ �Լ��� �������� ����!
}



//�Լ� printL() ȭ�鿡 ���Ḯ��Ʈ�� score ���� ���
//�Է� ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//��� ����
//�μ�ȿ�� ����
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
//�Լ� createNode() 
//�Է� ����
//��� ����ϳ��� �����Ҵ����� �����Ͽ� ��ȯ�Ѵ�. �̶� score = �Է� pNext = NULL�� �Ѵ�.
//�μ�ȿ�� ����
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL; //while ���� ���� �����Ƿ� ���ھ� �Է��� ���� �������� ����
	return ptr;
}
//�Լ� addHead()
//�Է� ���Ḯ��Ʈ, �� ���
//��� ����
//�μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰�
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
	test = 10/4; //1. (10/4) --> 2�� ��ȯ. 2. ������ 2�� double�� 2.0���� ��ȯ
	printf("test = %f\n", test);
	test = 10.0/4; //1. (10.0/4) --> 2.5�� ��ȯ
	printf("test = %f\n", test);
	test = ((double)10)/4; //1. ������(int) 10�� �Ǽ���(double) 10.0���� ��ȯ
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

	/*Node* pHead = NULL, *ptr;//������� ������, Null�̸� ���Ḯ��Ʈ�� ���ٴ� ������ �������.
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

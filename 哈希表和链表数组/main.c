#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//存放80000000个随机数据的超大哈希表，判断是否存在该键值，调用putnum()和checknum()函数，演示程序是随机存储随机数演示，所以我用time来置入种子
#define GroupNum 80  //这个表示单表上限
#define MAXtip 1000000    //设置链表指针上限

/*下面是演示功能调参区*/
int times=10000;//存随机数的次数

//结束

struct Nodelist {
	int key;
	struct Nodelist* next;
};

struct Nodelist* head[MAXtip];
int biggestnums[MAXtip];
int smallestnums[MAXtip];
int survivorNode = 0;

struct Nodelist* CreateNodelist(int key);
struct Nodelist* AddNewNode(struct Nodelist* head1, int key);
struct Nodelist* SearchNode(struct Nodelist* head1, int key);
struct Nodelist* DeleteNode(struct Nodelist* head1, int key);
int countnode(struct Nodelist* head1);

bool putnum(int key);
bool checknum(int key);
void __example(void);//演示功能

int main(void) {
	__example();
	return 0;
}

struct Nodelist* CreateNodelist(int key) {
	struct Nodelist* node = (struct Nodelist*)malloc(sizeof(struct Nodelist));
	node->key = key;
	node->next = NULL;
	return node;
}

struct Nodelist* AddNewNode(struct Nodelist* head1, int key) {
	struct Nodelist* node = CreateNodelist(key);
	if (head1 == NULL) return node;
	struct Nodelist* tail = head1;
	while (tail->next != NULL) tail = tail->next;
	tail->next = node;
	return head1;
}

struct Nodelist* SearchNode(struct Nodelist* head1, int key) {
	struct Nodelist* node = head1;
	while (node != NULL) {
		if (node->key == key) return node;
		node = node->next;
	}
	return NULL;
}

struct Nodelist* DeleteNode(struct Nodelist* head1, int key) {
	struct Nodelist* node = head1;
	struct Nodelist* prev = NULL;
	while (node != NULL && node->key != key) {
		prev = node;
		node = node->next;
	}
	if (node == NULL) return head1;
	if (prev == NULL) {
		struct Nodelist* newhead = node->next;
		free(node);
		return newhead;
	}
	prev->next = node->next;
	free(node);
	return head1;
}

int countnode(struct Nodelist* head1) {
	int count = 0;
	while (head1 != NULL) {
		count++;
		head1 = head1->next;
	}
	return count;
}

bool putnum(int key) {
	for (int i = 0; i < survivorNode; i++) {
		if (SearchNode(head[i], key) != NULL) return false;

		if (countnode(head[i]) < GroupNum) {
			head[i] = AddNewNode(head[i], key);
			if (key > biggestnums[i]) biggestnums[i] = key;
			if (key < smallestnums[i]) smallestnums[i] = key;
			return true;
		}
		if (key > biggestnums[i]) {
			int evict = biggestnums[i];
			head[i] = DeleteNode(head[i], evict);
			head[i] = AddNewNode(head[i], key);
			int mx = key, mn = key;
			for (struct Nodelist* p = head[i]; p != NULL; p = p->next) {
				if (p->key > mx) mx = p->key;
				if (p->key < mn) mn = p->key;
			}
			biggestnums[i] = mx;
			smallestnums[i] = mn;
			return putnum(evict);
		}
		if (key < smallestnums[i]) {
			int evict = smallestnums[i];
			head[i] = DeleteNode(head[i], evict);
			head[i] = AddNewNode(head[i], key);
			int mx = key, mn = key;
			for (struct Nodelist* p = head[i]; p != NULL; p = p->next) {
				if (p->key > mx) mx = p->key;
				if (p->key < mn) mn = p->key;
			}
			biggestnums[i] = mx;
			smallestnums[i] = mn;
			return putnum(evict);
		}
	}
	if (survivorNode < MAXtip) {
		head[survivorNode] = CreateNodelist(key);
		biggestnums[survivorNode] = key;
		smallestnums[survivorNode] = key;
		survivorNode++;
		return true;
	}
	return false;
}

bool checknum(int key) {
	for (int i = 0; i < survivorNode; i++) {
		if (key >= smallestnums[i] && key <= biggestnums[i]) {
			if (SearchNode(head[i], key) != NULL) return true;
		}
	}
	return false;
}

void __example(void) {
	srand(time(NULL));
	int tmp;
	printf("{");
	for (int i = 1; i <= times; i++) {
		tmp = i;//(rand()+(314*rand()%1200)*rand()%2147483647);
		//putnum(tmp);
		if (putnum(tmp)) printf("%d,",tmp);
	}
	tag:
	printf("}\n");
		//TODO	
		scanf("%d",&tmp);
		if(checknum(tmp)){
				printf("\ntrue");
			}else{
				printf("false");
			}
			printf("\n");
			goto tag;
			
}

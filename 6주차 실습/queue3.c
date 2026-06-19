#include <stdio.h>
#include <stdlib.h>
#include "queue3.h"

LQueueType* createLinkedQueue(void) {
  LQueueType *LQ;
  LQ = (LQueueType*)malloc(sizeof(LQueueType));
  LQ->front = NULL;
  LQ->rear = NULL;
  return LQ;
}

int isLQEmpty(LQueueType* LQ) {
  if(LQ->front == NULL){
    printf(" Linked Queue is empty! ");
    return 1;
  }
  else return 0;
}

void enLQueue(LQueueType *LQ, element item) {
  QNode* newNode = (QNode*)malloc(sizeof(QNode));
  newNode->data = item;
  newNode->link = NULL;
  if(LQ->front == NULL) { //현재 연결 큐가 공백 상태인 경우
    LQ->front = newNode;
    LQ->rear = newNode;
  }
  else { // 현재 연결 큐가 공백 상태가 아닌 경우
    LQ->rear->link = newNode;
    LQ->rear = newNode;
  }
}

element deLQueue(LQueueType* LQ){
  QNode * old = LQ->front;
  element item;
  if(isLQEmpty(LQ)) return ;
  else {
    item = old -> data;
    LQ->front = LQ->front->link;
    if (LQ->front = NULL)
      LQ->rear = NULL;
    free(old);
    return item;
  }
}

element peekLQ(LQueueType* LQ){
  element item;
  if (isLQEmpty(LQ)) return;
  else {
    item = LQ->front->data;
    return item;
  }
}

void printLQ(LQueueType* LQ) {
  QNode* temp = LQ->front;
  printf(" Linked Queue: [");
  while (temp) {
    printf("%3c", temp->data);
    temp = temp -> link;
  }
  printf(" ] ");
}

int main(void) {
  LQueueType *LQ = createLQueue();
  element data;
  printf("\n ***** 연결 큐 연산 ***** \n");
  printf("삽입 A>>"); enLQueue(LQ, 'A'); printLQ(LQ);
  printf("삽입 B>>"); enLQueue(LQ, 'B'); printLQ(LQ);
  printf("삽입 C>>"); enLQueue(LQ, 'C'); printLQ(LQ);
  data = peekLQ(LQ); printf("peek item: %c\n", data);
  printf("\n삭제 >>"); data = deLQueue(LQ); printLQ(LQ);
  printf("\t삭제 데이터 : %c", data);
  printf("\n삭제 >>"); data = deLQueue(LQ); printLQ(LQ);
  printf("\t삭제 데이터 : %c", data);
  printf("\n삭제 >>"); data = deLQueue(LQ); printLQ(LQ);
  printf("\t삭제 데이터 : %c", data);

  printf("\n 삽입 D>>"); enLQueue(LQ, 'D'); printLQ(LQ);
  printf("\n 삽입 E>>"); enLQueue(LQ, 'E'); printLQ(LQ);
  getchar(); return 0;
}
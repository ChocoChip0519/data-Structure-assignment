#include <stdio.h>
#include <stdlib.h>
#include "queue1.h"

QueueType* createQueue() {
  QueueType* Q = (QueueType*)malloc(sizeof(QueueType));
  Q->front = -1;
  Q->rear = -1;
  return Q;
}

int isQueueEmpty(QueueType* Q) {
//true =1, false = 0
  if (Q->front == Q->rear) {
    printf("큐가 비어있습니다.\n");
    return 1;
  }
  else return 0;
}

int isQueueFull(QueueType* Q) {
  if(Q->rear == Q_SIZE -1) {
    printf("큐가 꽉 찼습니다.\n");
    return 1;
  }
  else return 0;
}

void enQueue(QueueType* Q, element item) {
  if (isQueueFull(Q)) return;
  else {
    Q->rear = Q->rear + 1;
    Q->queue[Q->rear] = item;
  }
}
element deQueue(QueueType* Q) {
  if (isQueueEmpty(Q)) return 0;
  else {
    Q->front = Q->front +1;
    return Q->queue[Q->front];
  }
}
element peek(QueueType* Q) {
  if (isQueueEmpty(Q)) return 0;
  else {
    return Q->queue[Q->front + 1];
  }
}

void printQ(QueueType* Q) {
  printf("Queue: [ ");
  for (int i = Q->front + 1; i <= Q->rear; i++) {
    printf("%c ", Q->queue[i]);
  }
  printf("]\n");
}

int main(void){
  printf("***** 순차 큐 연산 *****\n");
  QueueType* Q1 = createQueue();
  element data;
  printf("삽입 A>>"); enQueue(Q1, 'A'); printQ(Q1);
  printf("삽입 B>>"); enQueue(Q1, 'B'); printQ(Q1);
  printf("삽입 C>>"); enQueue(Q1, 'C'); printQ(Q1);
  data = peek(Q1); printf("peek item: %c\n", data);
  printf("\n삭제 >>"); data = deQueue(Q1); printQ(Q1);
  printf("\t삭제 데이터 : %c", data);
  printf("\n삭제 >>"); data = deQueue(Q1); printQ(Q1);
  printf("\t삭제 데이터 : %c", data);
  printf("\n삭제 >>"); data = deQueue(Q1); printQ(Q1);
  printf("\t삭제 데이터 : %c", data);

  printf("\n 삽입 D>>"); enQueue(Q1, 'D'); printQ(Q1);
  printf("\n 삽입 E>>"); enQueue(Q1, 'E'); printQ(Q1);

  return 0;
}

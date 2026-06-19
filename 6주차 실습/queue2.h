#pragma once
#define cQ_SIZE 4

typedef char element;

typedef struct {
  element queue[cQ_SIZE];
  int front, rear;
} QueueType;

QueueType* createQueue();
int isQueueEmpty(QueueType* cQ);
int isQueueFull(QueueType* cQ);
void enQueue(QueueType* cQ, element item);
element deQueue(QueueType* cQ);
element peekcQ(QueueType* cQ);
void printCQ(QueueType* cQ);
#ifndef _QUEUE_H
#define _QUEUE_H

#include "stdbool.h"
#include "stdio.h"

#define ElementType int
#define MAXSIZE     10
#define ERROR       0xff


typedef struct {
    ElementType *data;
    unsigned int front;           // 队头位置
    unsigned int rear;            // 队尾位置
    unsigned int size;   // 队列大小
} Queue;


bool CreateQueue(Queue *queue,ElementType *buffer);
bool isFull(Queue *queue);
bool isEmpty(Queue *queue);
bool Enqueue(Queue *queue,ElementType element);
void Dequeue(Queue *queue);
void MakeEmpty(Queue *queue);
ElementType FrontAndDequeue(Queue *queue);
ElementType Front(Queue *queue);
void printfQueue(Queue *queue);

#endif





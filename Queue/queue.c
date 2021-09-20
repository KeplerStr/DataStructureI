#include "queue.h"

/**
 * @brief 创建一个队列，需要从外部传入空间
 */
bool CreateQueue(Queue *queue,ElementType *buffer) 
{
    if (queue != NULL && buffer != NULL)
    {
        queue->front = 0;           // 队头指针
        queue->rear = 0;            // 队尾指针
        queue->size = 0;            // 队列大小
        queue->data = buffer;       // 缓冲区
        return true;
        /* code */
    }
    else
        return false;
}

/**
 * @brief 判断队列是否为满
 */ 
bool isFull(Queue *queue)
{
    return (queue->size == MAXSIZE);
}

/**
 * @brief 判断队列是否为空
 */ 
bool isEmpty(Queue *queue)
{
    return (queue->size == 0);
}

/**
 * @brief 入队操作
 */
bool Enqueue(Queue *queue,ElementType element)
{
    if(isFull(queue))
    {
        printf("Full queue");
        return false;                           // 队列已经满了
    }
    queue->data[queue->rear++] = element;       // 队尾加入元素
    queue->size++;                              // 大小加1
    queue->rear %= MAXSIZE;                     // 队尾指针循环判定
    
    return true;
}

/**
 * @brief 出队操作
 */ 
void Dequeue(Queue *queue)
{
    queue->size--;                          // 大小减1
    queue->front++;                         // 队头指针加1
    queue->front %= MAXSIZE;                // 队头指针循环   
}

/**
 * @brief 队列清空
 */ 
void MakeEmpty(Queue *queue)
{
    queue->size = 0;
    queue->front = 0;
    queue->rear = 0;
}

/**
 * @brief 取队头元素
 */ 
ElementType Front(Queue *queue)
{
    return queue->data[queue->front];
}

/**
 * @brief 取队头元素并且出队
 */ 
ElementType FrontAndDequeue(Queue *queue)
{
    unsigned int index = queue->front;
    
    Dequeue(queue);

    return queue->data[index];
}

/**
 * @brief 打印队列
 */ 
void printfQueue(Queue *queue)
{
    int index = queue->front;

    if (isEmpty(queue))
    {
        printf("queue is empty!!!\n");
        return;
        /* code */
    }
    
    for (int i = 0; i < queue->size; i++)
    {
        printf("%d ",queue->data[index++]);
        /* code */
    }
    printf("\n");
}

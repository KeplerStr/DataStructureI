#include <stdio.h>
#include "queue.h"

int main(int argc, char const *argv[])
{
    ElementType buffer[MAXSIZE];

    Queue queue;
    CreateQueue(&queue, buffer);

    for (size_t i = 0; i < MAXSIZE; i++)
    {
        Enqueue(&queue, i);
        /* code */
    }

    printfQueue(&queue);

    for (size_t i = 0; i < MAXSIZE/2; i++)
    {
        if (! isEmpty(&queue))
        {
            Dequeue(&queue);
        }else{
            printf("Queue Empty");
        }
    }

    printfQueue(&queue);

    for (size_t i = 0; i < MAXSIZE/2; i++)
    {
        if (! isEmpty(&queue))
        {
            Dequeue(&queue);
        }else{
            printf("Queue Empty");
        }
    }
    printfQueue(&queue);

    for (size_t i = 0; i < MAXSIZE; i++)
    {
        Enqueue(&queue, i);
        /* code */
    }

    printfQueue(&queue);

    MakeEmpty(&queue);

    printfQueue(&queue);

    return 0;
}
#include <stdio.h>

#include "queue.h"


int main (void) {
    struct Queue queue;
    double x;
    queueInit(&queue);
    push(&queue,1);
    push(&queue,2);
    push(&queue,3);

    printf("%lf \n", queue.start->data);
    printf("%lf \n", queue.start->next->data);
    printf("%lf \n", queue.start->next->next->data);

    pop(&queue, &x);
    printf("%lf %lf \n", queue.start->data, x);


    return 0;
}
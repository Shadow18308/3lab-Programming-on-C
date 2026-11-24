#include <stdlib.h>
#include "queue.h"


void queueInit (struct Queue *q) {
    q->size = 0;
    q->start = NULL;
    q->end = NULL;
}

int push (struct Queue *q, double data) {
    struct Node *n = malloc(sizeof(struct Node));

    if (n == NULL) return 1;

    n->data = data;
    n->next = NULL;

    if (q->end != NULL) {
        q->end->next = n;
    } else {
        q->start = n;
    }

    q->end = n;
    q->size++;
    
    return 0;   
}

int pop (struct Queue *q, double *buf) {
    struct Node *n;

    if (q->start == NULL) return 1;
     
    n = q->start;
    *buf = n->data;
    q->start = n->next;
    if (q->start == NULL)
        q->end = NULL;

    free(n);
    q->size--;
    return 0;
}
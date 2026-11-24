#ifndef QUEUE_H
#define QUEUE_H

struct Node {
    double data;
    struct Node *next;
};

struct Queue {
    struct Node *start;
    struct Node *end;
    int size;
};


void queueInit (struct Queue *q);
int push (struct Queue *q, double data);
int pop (struct Queue *q, double *out);

#endif
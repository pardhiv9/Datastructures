#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

// Stack structure
struct Stack {
    int items[MAX_STACK_SIZE];
    int top;
};

// Initialize stack
void initStack(struct Stack *s) {
    s->top = -1;
}

// Check if stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Check if stack is full
int isFull(struct Stack *s) {
    return s->top == MAX_STACK_SIZE - 1;
}

// Push item onto stack
void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push item.\n");
    } else {
        s->top++;
        s->items[s->top] = value;
    }
}

// Pop item from stack
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop item.\n");
        return -1;
    } else {
        int poppedItem = s->items[s->top];
        s->top--;
        return poppedItem;
    }
}

// Peek at top item of stack
int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot peek at item.\n");
        return -1;
    } else {
        return s->items[s->top];
    }
}

// Print contents of stack
void printStack(struct Stack *s) {
    printf("Stack contents: ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Driver program
int main() {
    struct Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printStack(&s);

    printf("Popped item: %d\n", pop(&s));
    printStack(&s);

    printf("Peeked item: %d\n", peek(&s));
    printStack(&s);

    return 0;
}

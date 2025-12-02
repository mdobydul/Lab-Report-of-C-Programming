#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;


void push(int x) {
    if(top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}


int pop() {
    if(top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}


void insertAtBottom(int x) {
    if(top == -1) {
        push(x);
        return;
    }
    int temp = pop();
    insertAtBottom(x);
    push(temp);
}


void reverseStack() {
    if(top == -1)
        return;
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}


void display() {
    int i;
    for(i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int n, i, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        push(val);
    }

    printf("Original Stack: ");
    display();

    reverseStack();

    printf("Reversed Stack: ");
    display();

    return 0;
}

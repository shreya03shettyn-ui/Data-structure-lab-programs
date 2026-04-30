//implement stack operation using arrays
#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // Maximum size of stack

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", val);
    } else {
        top++;
        stack[top] = val;
        printf("Pushed %d\n", val);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop\n");
    } else {
        printf("Popped %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}

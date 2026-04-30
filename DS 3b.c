//implementing stack operations using linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap Overflow!\n");
        return;
    }
    newNode->data = val;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d\n", val);
}

void pop() {
    if (top == NULL) {
        printf("Stack Underflow!\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped %d\n", top->data);
    top = top->next;
    free(temp);

void display() {
    struct Node* ptr = top;
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        while (ptr != NULL) {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}

int main() {
    push(100);
    push(200);
    push(300);
    display();
    pop();
    display();
    return 0;
}

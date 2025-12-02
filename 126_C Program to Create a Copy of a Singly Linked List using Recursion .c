#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* copyList(struct Node* head) {
    if(head == NULL)
        return NULL;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = head->data;
    newNode->next = copyList(head->next);
    return newNode;
}

void printList(struct Node* head) {
    while(head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    int n, val;
    scanf("%d", &n);
    struct Node *head = NULL, *temp, *tail = NULL;
    for(int i = 0; i < n; i++) {
        scanf("%d", &val);
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = val;
        temp->next = NULL;
        if(head == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    struct Node* copiedList = copyList(head);
    printList(copiedList);

    return 0;
}

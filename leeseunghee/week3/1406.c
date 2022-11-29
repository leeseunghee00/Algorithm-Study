#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Node {
    char data;
    struct Node* next;
    struct Node* prev;
} Node;

void print(Node* n) {
    Node* temp = n;
    temp = temp->next;

    while (temp) {
        printf("%c", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = '!';
    head->prev = head->next = NULL;

    Node* cur = head;
    char t;

    while ((t = getchar()) != '\n') {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = t;
        newNode->prev = cur;
        newNode->next = NULL;
        cur->next = newNode;
        cur = newNode;
    }

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char c;
        scanf(" %c", &c);

        switch (c) {
        case 'L': {
            if (cur->prev) cur = cur->prev;
            break;
        }
        case 'D': {
            if (cur->next) cur = cur->next;
            break;
        }
        case 'B': {
            if (cur->prev == NULL) continue;
            Node* del = (Node*)malloc(sizeof(Node));

            del = cur;
            cur = del->prev;

            if (del->next) {
                cur->next = del->next;
                del->next->prev = cur;
                del->prev = NULL;
            }
            else {
                cur->next = NULL;
            }
            break;
        }
        case 'P': {
            char tmp;
            scanf(" %c", &tmp);

            Node* newNode = (Node*)malloc(sizeof(Node));

            newNode->data = tmp;
            newNode->prev = cur;

            if (cur->next) {
                newNode->next = cur->next;
                cur->next->prev = newNode;
            }
            else {
                newNode->next = NULL;
            }

            cur->next = newNode;
            cur = cur->next;
            break;
        }
        }
    }

    head = head->next;

    while (head) {
        printf("%c", head->data);
        head = head->next;
    }

}
#include <stdio.h>
#define MAX_SIZE 100

int queue[];
int front = -1;
int rear = -1;

void add_element() {
    int data;
    printf("Enter the element to add: ");
    scanf("%d", &data);
    
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot add element.\n");
        return;
    }
    queue[++rear] = data;
    if (front == -1) {
        front = 0;
    }
    printf("Element %d added to the queue.\n", data);
}

void remove_element() {
    int position;
    printf("Enter the index of the element to remove: ");
    scanf("%d", &position);
    
    if (front == -1 || front > rear || position < front || position > rear) {
        printf("Invalid position. Cannot remove element.\n");
        return;
    }
    int removedElement = queue[position];
    for (int i = position; i < rear; i++) {
        queue[i] = queue[i + 1];
    }
    rear--;
    printf("Element %d removed from the queue.\n", removedElement);
}

void find_and_remove_element() {
    int data;
    printf("Enter the element to find and remove: ");
    scanf("%d", &data);
    
    if (front == -1 || front > rear) {
        printf("Queue is empty. Cannot find and remove element.\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        if (queue[i] == data) {
            remove_element(i);
            return;
        }
    }
    printf("Element %d not found in the queue.\n", data);
}

void print_queue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    
    while (1) {
        printf("1. Add element\n");
        printf("2. Remove element by index\n");
        printf("3. Find and remove element\n");
        printf("4. Print queue data\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_element();
                break;
            case 2:
                remove_element();
                break;
            case 3:
                find_and_remove_element();
                break;
            case 4:
                print_queue();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}

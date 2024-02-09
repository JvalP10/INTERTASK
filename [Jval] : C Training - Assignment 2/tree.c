#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

Node* createNode() {
    Node* newNode = (Node*)malloc(sizeof(Node));

    printf("Enter node id: ");
    scanf("%d", &(newNode->id));

    printf("Enter project name: ");
    scanf("%s", newNode->project);

    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void insertNode(Node** root) {
    if (*root == NULL) {
        *root = createNode();
        return;
    }

    int choice;
    printf("Enter 1 to insert node to the left or 2 to insert node to the right of %d: ", (*root)->id);
    scanf("%d", &choice);

    if (choice == 1) {
        insertNode(&((*root)->left));
    } else if (choice == 2) {
        insertNode(&((*root)->right));
    } else {
        printf("Invalid choice. Node not inserted.\n");
    }
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int treeHeight(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

void freeTree(Node* root) {
    if (root == NULL) {
        return;
    }

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

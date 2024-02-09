#include "tree.h"
#include <stdio.h>

int main() {
    Node* root = NULL;

    insertNode(&root);

    printf("Tree height: %d\n", treeHeight(root));

    freeTree(root);

    return 0;
}

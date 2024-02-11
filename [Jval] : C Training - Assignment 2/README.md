
# Tree Implementation in C

This is a simple C program that implements a binary tree data structure. It allows users to create a tree, insert nodes, calculate the height of the tree, and free the memory used by the tree.

## Usage

1. Compile the code using a C compiler (e.g., gcc):
   ```
   gcc main.c tree.c -o tree
   ```

2. Run the executable:
   ```
   ./tree
   ```

3. Follow the prompts to create and manipulate the tree.

## Functions

### `createNode()`

This function creates a new node for the tree. It prompts the user to enter the node's ID and project name.

### `insertNode()`

This function inserts a node into the tree. If the tree is empty, it creates a root node. Otherwise, it prompts the user to choose whether to insert the node to the left or right of a given node.

### `treeHeight()`

This function calculates the height of the tree. It recursively calculates the height of the left and right subtrees and returns the maximum height plus one.

### `freeTree()`

This function frees the memory used by the tree. It recursively frees the memory of each node in the tree.

## Tree Structure

The tree is implemented using a binary tree structure. Each node contains an ID and a project name. It also has pointers to its left and right child nodes.

Please note that this is a simplified implementation for educational purposes and may not cover all possible scenarios or optimizations.

Feel free to modify and expand upon this code according to your needs. Happy coding!

THANK YOU! 

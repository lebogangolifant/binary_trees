# 0x1D. C - Binary trees

This repository contains a collection of C functions that operate on binary trees. Binary trees are hierarchical data structures composed of nodes, where each node has at most two children, referred to as the left child and the right child. The provided functions cover various tasks related to binary trees, including creation, traversal, manipulation, and analysis.

## Concepts

- __Binary tree__
- __Data Structure and Algorithms - Tree__
- __Tree Traversal__
- __Binary Search Tree__
- __Data structures: Binary Tree__

## Requirements

- Editors: [emacs](https://www.gnu.org/software/emacs/), [vi, vim](https://www.vim.org/)
- Files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Use `Betty` to check coding style. [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)


## Usage
Each task is implemented in a separate C file. To test the implementations, you can compile the corresponding source files along with the provided test and main files.

## Example:
To compile Task 1, use the following commands:
```sh
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```

Run the Task:
```sh
./0-node
```

## Print function
Utility file containing functions to print binary trees in various formats (draws binary tree on to the console for visualization purposes)
- [binary_tree_print.c](https://github.com/alx-tools/0x1C.c)


## Tasks

| File Name              | Description                                                                                   |
|------------------------|-----------------------------------------------------------------------------------------------|
| 0-binary_tree_node.c   | Defines the `binary_tree_node` function, which creates a new binary tree node.                            |
| 1-binary_tree_insert_left.c  | Defines the `binary_tree_insert_left` function to insert a new left child to a given node.       |
| 2-binary_tree_insert_right.c | Defines the `binary_tree_insert_right` function to insert a new right child to a given node.       |
| 3-binary_tree_delete.c       | Defines the `binary_tree_delete` function to delete an entire binary tree.                            |
| 4-binary_tree_is_leaf.c      | Defines the `binary_tree_is_leaf` function to check if a node is a leaf node.                               |
| 5-binary_tree_is_root.c      | Defines the `binary_tree_is_root` function to check if a node is the root of a tree.      |
| 6-binary_tree_preorder.c     | Defines the `binary_tree_preorder` function for pre-order traversal.        |
| 7-binary_tree_inorder.c      | Defines the `binary_tree_inorder` function for in-order traversal.         |
| 8-binary_tree_postorder.c    | Defines the `binary_tree_postorder` function for post-order traversal.       |
| 9-binary_tree_height.c       | Defines the `binary_tree_height` function to calculate the height of a binary tree.                     |
| 10-binary_tree_depth.c       | Defines the `binary_tree_depth` function to calculate the depth of a node in a binary tree.            |
| 11-binary_tree_size.c        | Defines the `binary_tree_size` function to calculate the size (number of nodes) of a binary tree.                     |
| 12-binary_tree_leaves.c      | Defines the `binary_tree_leaves` function to count the number of leaves in a binary tree.                        |
| 13-binary_tree_nodes.c       | Defines the `binary_tree_nodes` function to count the number of non-leaf nodes in a binary tree.  |
| 14-binary_tree_balance.c     | Defines the `binary_tree_balance` function to determine the balance factor of a binary tree.                       |
| 15-binary_tree_is_full.c     | Defines the `binary_tree_is_full` function to check if a binary tree is full.                          |
| 16-binary_tree_is_perfect.c  | Defines the `binary_tree_is_perfect` function to check if a binary tree is perfect.                        |
| 17-binary_tree_sibling.c     | Defines the `binary_tree_sibling` function to find the sibling of a node.             |
| 18-binary_tree_uncle.c       | Defines the `binary_tree_uncle` function to find the uncle of a node.               |
| 100-binary_trees_ancestor.c  | Defines the `binary_trees_ancestor` function to find the lowest common ancestor of two nodes. |
| 101-binary_tree_levelorder.c | Defines the `binary_tree_levelorder` function for level-order traversal.     |
| 102-binary_tree_is_complete.c | Defines the `binary_tree_is_complete` function to check if a binary tree is complete.                     |
| 103-binary_tree_rotate_left.c | Defines the `binary_tree_rotate_left` function to perform a left rotation on a binary tree.                |
| 104-binary_tree_rotate_right.c| Defines the `binary_tree_rotate_right` function to perform a right rotation on a binary tree.               |
| 110-binary_tree_is_bst.c     | Defines the `binary_tree_is_bst` function to check if a binary tree is a valid Binary Search Tree.    |
| 111-bst_insert.c             | Defines the `bst_insert` function to insert a value into a Binary Search Tree.                  |
| 112-array_to_bst.c           | Defines the `array_to_bst` function to build a Binary Search Tree from an array.                |







# 0x1D. C - Binary trees

## Resources
* [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)
* [Delete a tree](https://www.geeksforgeeks.org/write-a-c-program-to-delete-a-tree/)

## Description
What you should learn from this project:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## More Info
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

### Basic Binary Tree
-------
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
--------
### Binary Search Tree
--------
typedef struct binary_tree_s bst_t;
--------
### AVL Tree
--------
typedef struct binary_tree_s avl_t;
--------
### Max Binary Heap
--------
typedef struct binary_tree_s heap_t;
--------

## Print function
To match the examples in the tasks, you are given [this function](https://github.com/alx-tools/0x1C.c)

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction
--------

## Author
+ Wajdi khelifi - [wajdi-khelifi](https://github.com/wajdi-khelifi)
+ seifbenothman - [seifbenothman](https://github.com/seifbenothman)


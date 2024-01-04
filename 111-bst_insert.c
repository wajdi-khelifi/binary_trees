#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree.
 * @tree: double pointer to the root node of the BST to insert the value.
 * @value: value to store in the node to be inserted.
 * Return: Always 0 (Success)
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = NULL;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	tmp = *tree;
	if (value < tmp->n)
	{
		if (tmp->left == NULL)
		{
			tmp->left = binary_tree_node(tmp, value);
			return (tmp->left);
		}
		return (bst_insert(&(tmp->left), value));
	}
	if (value > tmp->n)
	{
		if (tmp->right == NULL)
		{
			tmp->right = binary_tree_node(tmp, value);
			return (tmp->right);
		}
		return (bst_insert(&(tmp->right), value));
	}
	return (NULL);
}

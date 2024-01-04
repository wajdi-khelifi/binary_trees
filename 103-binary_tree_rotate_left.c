#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  performs a left-rotation on a binary tree
 * @tree: pointer to binare_tree_t
 * Return: pointer to the new root node of the tree once rotated;
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp, *x;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		x = tree->right->left;
		tmp = tree->right;
		tmp->parent = tree->parent;
		tmp->left = tree;
		tree->parent = tmp;
		tree->right = x;
		if (x)
			x->parent = tree;
		return (tmp);
	}
	return (NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  performs a rigth-rotation on a binary tree
 * @tree: pointer to binare_tree_t
 * Return: pointer to the new root node of the tree once rotated;
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp, *x;

	if (tree == NULL)
		return (NULL);
	if (tree->left)
	{
		x = tree->left->right;
		tmp = tree->left;
		tmp->parent = tree->parent;
		tmp->right = tree;
		tree->parent = tmp;
		tree->left = x;
		if (x)
			x->parent = tree;
		return (tmp);
	}
	return (NULL);
}

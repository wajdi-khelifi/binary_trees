#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node the right-child of another node.
 *@parent: pointer to the node to insert the right-child in.
 *@value: the value to store in the new node,
 * Return: return a pointer to the created node, or NULL on failure or if no.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *link = NULL;

	if (parent == NULL)
		return (NULL);
	link = malloc(sizeof(binary_tree_t));
	if (link == NULL)
		return (NULL);

	link->n = value;
	link->parent = parent;
	link->left = NULL;
	link->right = NULL;
	if (parent->right == NULL)
		parent->right = link;
	else
	{
		link->right = parent->right;
		parent->right = link;
		link->right->parent = link;
	}
	return (link);
}

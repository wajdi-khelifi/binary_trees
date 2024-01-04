#include "binary_trees.h"
/**
 * aux_sort - create the tree using the half element of the array
 * @parent: parent of the node to create
 * @array: sorted array
 * @begin: position where the array starts
 * @last: position where the array ends
 * Return: tree created
 */
avl_t *aux_sort(avl_t *parent, int *array, int begin, int last)
{
	avl_t *root;
	binary_tree_t *tmp;
	int center = 0;

	if (begin <= last)
	{
		center = (begin + last) / 2;
		tmp = binary_tree_node((binary_tree_t *)parent, array[center]);
		if (tmp == NULL)
			return (NULL);
		root = (avl_t *)tmp;
		root->left = aux_sort(root, array, begin, center - 1);
		root->right = aux_sort(root, array, center + 1, last);
		return (root);
	}
	return (NULL);
}
/**
 * sorted_array_to_avl - create a alv tree from sorted array
 * @array: sorted array
 * @size: size of the sorted array
 * Return: alv tree form sorted array
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return (NULL);
	return (aux_sort(NULL, array, 0, ((int)(size)) - 1));
}

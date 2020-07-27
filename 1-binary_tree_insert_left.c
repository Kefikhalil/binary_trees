#include "binary_trees.h"

/**
 * binary_tree_insert_left - insrerts node as left child
 * @parent: pointer
 * @value: value
 *
 * Return: 0
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = value;
	tmp->parent = parent;
	if (parent->left != NULL)
	{
		tmp->left = parent->left;
		tmp->left->parent = tmp;
	}
	parent->left = tmp;
	return (tmp);
}

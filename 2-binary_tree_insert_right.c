#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node at the right of a node
 * @parent: pointer
 * @value: value
 *
 * Return: 0
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->right = parent->right;
	if (parent->right)
	parent->right->parent = node;	
	node->parent = parent;
	node->left = NULL;
	node->n = value;

	return (node);
}
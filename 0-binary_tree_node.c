#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer
 * @value: value
 *
 * Return: 0
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

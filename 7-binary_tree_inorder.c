#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a tree Inorder
 * @tree: pointer
 * @func: pointer
 *
 * Return: 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
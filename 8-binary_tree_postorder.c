#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree on postorder
 * @tree: pointer
 * @func: pointer
 *
 * Return: 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
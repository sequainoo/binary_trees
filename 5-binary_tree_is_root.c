#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a ttree is root
 * @node: a pointer to a node aka tree
 * Return: 1 if node is root 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* a tree or node is root if parent is null */
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}

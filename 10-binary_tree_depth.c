#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a given tree
 * @tree: tree/node in question
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	binary_tree_t *node;

	if (tree == NULL)
		return (0);

	depth = 0;
	node = (binary_tree_t *)tree;
	while (node->parent != NULL)
	{
		node = node->parent;
		depth += 1;
	}
	return (depth);
}

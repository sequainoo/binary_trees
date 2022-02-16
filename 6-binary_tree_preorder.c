#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the tree in preorder
 * @tree: the tree to travel
 * @func: the operation to perform once a node is visited
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

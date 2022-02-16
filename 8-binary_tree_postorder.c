#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses tree postorder:
 * @tree: the tree  t traverse
 * @func: oeration to perform on tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		func(tree->n);
		binary_tree_postorder(tree->right, func);
	}
}

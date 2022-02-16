#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses tree inorder: like a sort
 * @tree: the tree  t traverse
 * @func: oeration to perform on tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

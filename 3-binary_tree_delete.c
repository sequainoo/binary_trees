#include "binary_trees.h"

/**
 * free_binary_node - frees the node
 * @node: a pointer to the node to free
 */
void free_binary_node(binary_tree_t *node)
{
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	free(node);
}

/**
 * binary_tree_delete - Wipes out every node of the tree.
 * @tree: The tree to delete - a pointer to the root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free_binary_node(tree);
	}
}

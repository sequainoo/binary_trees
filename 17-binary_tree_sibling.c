#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: the node in question
 * Return: a pointer to the node or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (node);
	/* if its a root node return null: root has no sibling */
	if (node->parent == NULL)
		return (NULL);

	/* if node is the same as the parent's left then sibling is right*/
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

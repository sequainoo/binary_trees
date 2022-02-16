#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a given value as right child of a parent
 * @parent: pointer to the node to insert right child into
 * @value: Value of the new node
 * Return: A pointer to the new node or null if parent is null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
		new_node->right = parent->right;
	parent->right = new_node;
	return (new_node);
}

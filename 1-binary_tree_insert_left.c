#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a value as the left child of a another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to insert as left child
 * Return: Returns the node inserted or null if paarent is empty
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* create new_node thats linked to the parent */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* insert node then as a left-child of parent */
	parent->left = new_node;
	return (new_node);
}

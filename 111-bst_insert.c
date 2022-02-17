#include "binary_trees.h"

/**
 * bst_insert - insert value into binary search tree
 * @tree: a pointer to a pointer to root of tree
 * @value: value to insert
 * Return: pointer to inserted node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *current, *parent;

	if (*tree == NULL)
	{
		new_node = binary_tree_node(NULL, value);
		if (new_node == NULL)
			return (NULL);
		*tree = new_node;
		return (new_node);
	}

	current = *tree;
	parent = NULL;
	while (1)
	{
		parent = current;
		if (value < current->n)
		{
			current = current->left;
			if (current == NULL)
			{
				new_node = binary_tree_node(parent, value);
				parent->left = new_node;
				return (new_node);
			}
		}
		else if (value == current->n)
			return (NULL);
		else if (value > current->n)
		{
			current = current->right;

			if (current == NULL)
			{
				new_node = binary_tree_node(parent, value);
				parent->right = new_node;
				return (new_node);
			}
		}

	}
}

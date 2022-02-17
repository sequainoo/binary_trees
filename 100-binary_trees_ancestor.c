#include "binary_trees.h"

/**
 * moveup - moves node up some levels
 * @node: node in question
 * @levels_up: the number of levels up to move
 * Return: pointer to the level moved to or NULL
 */
binary_tree_t *moveup(binary_tree_t *node, int levels_up)
{
	int count = 0;

	while (count < levels_up)
	{
		node = node->parent;
		count += 1;
	}
	return (node);
}

/**
 * depth - finds the depth of a given tree
 * @tree: tree/node in question
 * Return: the depth
 */
size_t depth(const binary_tree_t *tree)
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

/**
 * binary_trees_ancestor - gets the lowest common ancestor of two nodes
 * @first: one of the nodes
 * @second: one of the nodes
 * Return: a pointer to their lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	int depth_first, depth_second, diff;
	binary_tree_t *first_parent, *second_parent;

	if (!first || !second)
		return (NULL);
	if (!first->parent || !second->parent)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);

	depth_first = depth(first);
	depth_second = depth(second);
	diff = depth_first - depth_second;
	first_parent = (binary_tree_t *)first;
	second_parent = (binary_tree_t *)second;

	if (diff < 0)
		/*move right parent up diff times */
		second_parent = moveup(second_parent, diff * -1);
	if (diff > 0)
		first_parent = moveup(first_parent, diff);
	while (first_parent != second_parent)
	{
		first_parent = first_parent->parent;
		second_parent = second_parent->parent;
	}
	return (first_parent);
}

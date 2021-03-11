#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int hl = 0;
	int hr = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL)
	{
		hr = hr - 1;
	}
	else
	{
		hr = binary_tree_height(tree->right);
	}
	if (tree->left == NULL)
	{
		hl = hl - 1;
	}
	else
	{
		hl = binary_tree_height(tree->left);
	}
	return (hl - hr);
}

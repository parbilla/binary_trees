#include "binary_trees.h"

/**
 * binary_tree_is_full - if a binary tree is full
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 1 if it is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL) 
	{
		full = binary_tree_is_full(tree->left);
		full = binary_tree_is_full(tree->right);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (full);
}

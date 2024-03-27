#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left, full_right;

	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}

	if ((tree->left != NULL) && (tree->right != NULL))
	{
		full_left = binary_tree_is_full(tree->left);

		if (full_left != 0)
		{
			full_right = binary_tree_is_full(tree->right);
		}
		return (full_left && full_right);
	}
	else
	{
		return (0);
	}
}

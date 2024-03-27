#include "binary_trees.h"
/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: pointer to a root node of the tree to measure balance factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
	{
		return (0);
	}

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}

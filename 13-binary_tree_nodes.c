#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts
 * the number of leaves in a binary tree
 * @tree: pointer to the root node of the binary tree to count the nodes
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNodes = 0, rightNodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	leftNodes += binary_tree_nodes(tree->left);
	rightNodes += binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (leftNodes + rightNodes);
	}
	else
	{
		return (1 + (leftNodes + rightNodes));
	}
}

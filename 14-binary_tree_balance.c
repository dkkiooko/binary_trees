#include "binary_trees.h"

size_t height(const binary_tree_t *tree);
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree
* Return: balance facor, if tree is NULL return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (height(tree->left) - height(tree->right));
}

/**
* height - height of subtree left/right
* @tree: tree
* Return: height of tree
*/
size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

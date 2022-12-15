#include "binary_trees.h"
size_t height(const binary_tree_t *tree);
/**
* binary_tree_height - measures height of a binary tree
* @tree: pointer to the root node of the tree d
* Return: height of tree, or NULL if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (height(tree) - 1);
}

/**
* height - measure height of binary tree
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

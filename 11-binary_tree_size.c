#include "binary_trees.h"
/**
* binary_tree_size - measures size of a binary tree
* @tree: pointer to the root node
* Return: size of binary tree, or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	else
		return (0);
}

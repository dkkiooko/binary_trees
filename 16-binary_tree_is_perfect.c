#include "binary_trees.h"
size_t binary_tree_size(const binary_tree_t *tree);

/**
* binary_tree_is_perfect - checks whether binary tree is perfect
* @tree: pointer to the root node
* Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	return (0);
}

/**
* binary_tree_size - measures size of binary tree
* @tree: pointer to root node of tree to measure the size
* Return: if tree is NULL, the function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	else
		return (0);
}

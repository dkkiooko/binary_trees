#include "binary_trees.h"
/**
* binary_tree_uncle - finds uncle of a node
* @node: pointer to the node
* Return: pointer or NULL if node is NULL or no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *current = node;

	if (!current || !current->parent || !current->parent->parent)
		return (NULL);
	if (current->parent == current->parent->parent->right)
		return (current->parent->parent->left);
	else
		return (current->parent->parent->right);
}

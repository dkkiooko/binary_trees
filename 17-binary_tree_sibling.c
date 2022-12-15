#include "binary_trees.h"
/**
* binary_tree_sibling - funds the sibling of a node
* @node: pointer to the node
* Return: pointer to sibling, NULL if no sibling or a NULL parent
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *current = node;

	if (current == NULL || current->parent == NULL)
		return (NULL);
	if (current == current->parent->right)
		return (current->parent->left);
	else
		return (current->parent->right);
}

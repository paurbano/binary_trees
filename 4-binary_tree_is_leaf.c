#include "binary_trees.h"
/**
* binary_tree_is_leaf - inserts a node as the left-child of another node
* @node : pointer to node
* Return: 1 if is leaf 0 if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL && node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

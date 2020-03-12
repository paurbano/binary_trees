#include "binary_trees.h"
int maxDepth(const binary_tree_t *node);
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to node root
* Return:  measure the height.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (maxDepth(tree) - 1);
}

/**
* maxDepth - measures the height of a binary tree
* @node: pointer to node
* Return: measure the height.
*/
int maxDepth(const binary_tree_t *node)
{
	/* compute the depth of each subtree */
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		/* use the larger one */
		if (lDepth > rDepth)
			return (lDepth + 1);
		if (lDepth < rDepth)
			return (rDepth + 1);
}

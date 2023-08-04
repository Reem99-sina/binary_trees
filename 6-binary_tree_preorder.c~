#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the parent of the node to create.
 * @func: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
void binary_tree_preorder(const binary_tree_s *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
func(tree->n);
binary_tree_preorder(tree->parent, func);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}

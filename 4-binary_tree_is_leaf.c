#include "binary_trees.h"

/**
 *binary_tree_delete - deletes an entire binary tree
 *@tree: pointer to list
 *Return:not return
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
return (node->left == NULL && node->right == NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}
binary_tree_t *new_node = binary_tree_node(parent, value);
if (new_node == NULL)
{
return (NULL);
}
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}
parent->right = new_node;
return (new_node);
}

#include <iostream>
using namespace std;
  
// A Binary Tree Node
struct Node
{
    int data;
    Node *left, *right;
};
int parent_node = 0;
  
// A utility function to create a new 
// Binary Tree Node
Node *newNode(int item)
{
    Node *temp = new Node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
/* It returns level of the node if it is
present in tree, otherwise returns 0.*/
int getLevel(Node *root, Node *node, int level)
{
      
    // base cases
    if (root == NULL)
        return 0;
    if (root == node)
        return level;
  
    // If node is present in left subtree
    int downlevel = getLevel(root->left,
                             node, level + 1);
    if (downlevel != 0)
        return downlevel;
  
    // If node is not present in left subtree
    return getLevel(root->right, node, level + 1);
}

 void findParent(struct Node* node,
                int val, int parent)
{
    if (node == NULL)
        return;
 
    // If current node is the required node
    if (node->data == val) {
 
        // Print its parent
       // cout << parent;
        parent_node = parent;
        

    }
    else {
 
        // Recursive calls for the children
        // of the current node
        // Current node is now the new parent
        findParent(node->left, val, node->data);
        findParent(node->right, val, node->data);
    }
}
  
/* Print nodes at a given level such that 
sibling of node is not printed if it exists */
void printGivenLevel(Node* root, Node *node, int level)
{
    // Base cases
    if (root == NULL || level < 2)
        return;
  
    // If current node is parent of a node 
    // with given level
    if (level == 2)
    {
        if (root->left == node || root->right == node)
            return;
        if (root->left)
            cout << root->left->data << " ";
        if (root->right)
            cout << root->right->data;
    }
  
    // Recur for left and right subtrees
    else if (level > 2)
    {
        printGivenLevel(root->left, node, level - 1);
        printGivenLevel(root->right, node, level - 1);
    }
}
  
// This function prints cousins of a given node
void printCousins(Node *root, Node *node, int node_num)
{
    // Get level of given node
    int level = getLevel(root, node, 1);
    //cout<<level;
    findParent(root, node_num, node->data);
    cout<<parent_node;
    // Print nodes of given level.
    printGivenLevel(root, node, level);
}
  
// Driver Code
int main()
{
    int node; 
    Node *root = newNode(4);
    root->left = newNode(3);
    root->right = newNode(9);
    root->left->left = newNode(5);
    root->left->right = newNode(6);
    root->right->left = newNode(1);
    root->right->right = newNode(8);
    cin>>node;

    printCousins(root, root->left->right, node);
  
    return 0;
}
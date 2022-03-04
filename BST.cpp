#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *newNode(int key)
{
    struct node *temp = new node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root)
{

    if (root)
    {
        inorder(root->left);
        cout << root->key << endl;
        inorder(root->right);
    }
}

struct node *insert(struct node *root, int key)
{
    if (root == NULL)
        return newNode(key);

    if (key < root->key)
        root->left = insert(root->left, key);

    else if (key > root->key)
        root->right = insert(root->right, key);

    return root;
}

// Find the min value in a BST
struct node * minValueNode(struct node * root){
    struct node * current = root;
    if(current && current->left){
        minValueNode (current->left);
    }
    return current;
}

struct node * deleteNode(struct node * root, int key){
    // base case
    if(!root) return root;

    // solving using recursion,
    // value is less than root node
    if(key < root->key) {
        root -> left = deleteNode(root->left, key);
    }
    else if(key > root->key){
        root -> right = deleteNode(root->right, key);
    }
    // if root is the element to be deleted, we got some more lines of code to write. 
}


int main(){
    struct node * root = NULL;
    root = insert(root, 50);
    insert(root, 20);
    insert(root, 30);
    insert(root, 60);
    insert(root, 70);
    insert(root, 90);
    insert(root, 80);
    inorder(root);
    return 0;
}



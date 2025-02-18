#include <bits/stdc++.h>
using namespace std;

// Template for N-ary Tree Node
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children; // Store pointers instead of objects

    // Constructor
    TreeNode(T val)
    {
        data = val;
    }

    // Destructor to free memory
    ~TreeNode()
    {
        for (auto child : children)
        {
            delete child;
        }
    }
};
void print(TreeNode<int> *root)
{
    int d = root->data;
    cout << d << " -> ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " ";
    }
    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]); 
    }
}

int main()
{

    TreeNode<int> *root = new TreeNode<int>(2);
    TreeNode<int> *node1 = new TreeNode<int>(3);
    TreeNode<int> *node2 = new TreeNode<int>(4);
    TreeNode<int> *node3 = new TreeNode<int>(5);
    TreeNode<int> *node4 = new TreeNode<int>(6);
    TreeNode<int> *node5 = new TreeNode<int>(7);

    root->children.push_back(node1);
    root->children.push_back(node2);
    root->children.push_back(node3);

    node2->children.push_back(node4);
    node2->children.push_back(node5);

    print(root);

    return 0;
}
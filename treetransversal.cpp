#include "stack"
#include <iostream>
#include "list"

using namespace std;

// tree node
struct Node{
    int value;
    Node * left;
    Node * right;
    Node(int val){
        this->value = val;
        left =right=NULL;
    }
};
class TreeTransversal{
public:
    // preorder transversal
    void preorderTrans(struct Node *node){
        // first going to root node then right then left node .
        // if no node exists
        if(node==NULL){
            return;
        }
        cout<<node->value<<endl;
        preorderTrans(node->left);
        preorderTrans(node->right);

    }
    // postorder transversal
    void postorderTrans(struct Node * node){
        // first going to left node then right then parent node
        if(node==NULL){
            return;
        }
        postorderTrans(node->left);
        postorderTrans(node->right);
        cout<<node->value<<endl;
    }
    void inorderTrans(struct Node * node){
        // first left node then parent node then right node
        if(node==NULL){
            return;
        }
        inorderTrans(node->left);
        cout<<node->value<<endl;
        inorderTrans(node->right);
    }

};


int main() {

    TreeTransversal t;

    // making root nodes
    struct Node * root = new Node(5);

    // making a tree for implementation
    root->left = new Node(10);
    root->right = new Node(2);
    root->left->left = new Node(12);
    root->left->right = new Node(4);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    cout<<" Inorder Tree Transversal  "<<endl;
    t.inorderTrans(root);

    cout<<" Preorder Tree Transversal  "<<endl;
    t.preorderTrans(root);

    cout<<" Postorder Tree Transversal  "<<endl;
    t.postorderTrans(root);

    return 0;
}


#include "stack"
#include <iostream>
#include "list"

using namespace std;

// Node struct
struct Node{

    int value;
    Node* right;
    Node* left;
    Node(int val) {
        this->value = val;
        this->left = this->right = NULL;
    }
};

class levelTransversal{

public:

    bool printNode(Node* node, int lvl ){

        if(node==NULL){
            return false;
        }
        if(lvl==1){
            cout<<node->value<<endl;
            return true;
        }

        bool left = printNode(node->left,lvl-1);
        bool right = printNode(node->right,lvl-1);

        return left || right;
    }

    void transverse(Node* node){

        int level = 1;
        while(printNode(node,level)){
            level++;
            cout<<" Level "<<level<<endl;
        }
    }

};

int main() {

    levelTransversal t;

    // making root nodes
    struct Node * root = new Node(5);

    // making a tree for implementation
    root->left = new Node(10);
    root->right = new Node(2);
    root->left->left = new Node(12);
    root->left->right = new Node(4);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    cout<<" Level Tree Transversal  "<<endl;
    t.transverse(root);
    return 0;
}
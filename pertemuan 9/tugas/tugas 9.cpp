//#include <iostream>
//using namespace std;
//
//class Node {
//    public:
//        int data;
//        Node* left;
//        Node* right;
//        
//        Node(int value) {
//            data = value;
//            left = NULL;
//            right = NULL;
//        }
//};
//
//class Tree {
//    public:
//        Node* root;
//        
//        Tree() { root = NULL; }
//        
//        void insert(int value) {
//            root = insert(root, value);
//        }
//        
//        Node* insert(Node* node, int value) {
//            if (node == NULL) {
//                node = new Node(value);
//            } else if (value <= node->data) {
//                node->left = insert(node->left, value);
//            } else {
//                node->right = insert(node->right, value);
//            }
//            return node;
//        }
//        
//        void preorder() { preorder(root); }
//        
//        void preorder(Node* node) {
//            if (node == NULL) return;
//            cout << node->data << " ";
//            preorder(node->left);
//            preorder(node->right);
//        }
//};
//
//int main() {
//    Tree tree;
//    tree.insert(18);
//    tree.insert(30);
//    tree.insert(29);
//    tree.insert(32);
//    tree.insert(33);
//
//    cout << "Pre - order traversal : ";
//    tree.preorder();
//    cout << endl;
//    
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//const int MAX_NODES = 100;
//
//int tree[MAX_NODES];
//
//void initializeTree() {
//    for (int i = 0; i < MAX_NODES; i++) {
//        tree[i] = -1;
//    }
//}
//
//void setNode(int index, int value) {
//    if (index < MAX_NODES) {
//        tree[index] = value;
//    }
//}
//
//void inorderTraversal(int curr) {
//    if (curr < MAX_NODES && tree[curr] != -1) {
//        inorderTraversal(2 * curr + 1);
//        cout << tree[curr] << " ";
//        inorderTraversal(2 * curr + 2);
//    }
//}
//
//int main() {
//    initializeTree();
//
//    setNode(0, 18);  // Root
//    setNode(1, 30);  // anaknya kiri 18
//    setNode(2, 33);  // anaknya kanan 18
//    setNode(3, 29);  // anaknya kiri 30
//    setNode(4, 32);  // anaknya kanan 30
//
//    cout << "In-order traversal: ";
//    inorderTraversal(0);
//    cout << endl;
//
//    return 0;
//}



#include <iostream>
using namespace std;

const int MAX_NODES = 100;

int tree[MAX_NODES];

// Initialize the tree with -1 to indicate empty positions
void initializeTree() {
    for (int i = 0; i < MAX_NODES; i++) {
        tree[i] = -1;
    }
}

// Manually create the specified tree structure
void createTree() {
    tree[0] = 18;   // Root
    tree[1] = 30;   // Left child of root
    tree[2] = 33;   // Right child of root
    tree[3] = 29;   // Left child of 30
    tree[4] = 32;   // Right child of 30
}

void postorderTraversal(int curr) {
    if (curr < MAX_NODES && tree[curr] != -1) {
        postorderTraversal(2 * curr + 1);  // Visit left subtree
        postorderTraversal(2 * curr + 2);  // Visit right subtree
        cout << tree[curr] << " ";         // Visit current node
    }
}

int main() {
    initializeTree();

    // Create the specified tree structure
    createTree();

    // Perform post-order traversal
    cout << "Post-order traversal: ";
    postorderTraversal(0);
    cout << endl;

    return 0;
}






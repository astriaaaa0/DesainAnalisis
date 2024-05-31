#include<iostream>
using namespace std;
 
struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

//Function to visit nodes in Preorder
void Preorder(struct Node *root) {
	// base condition for recursion
	// if tree/sub-tree is empty, return and exit
	if(root == NULL) return;

	cout <<("\n ",root->data)<<" "; // Print data
	Preorder(root->left);     // Visit left subtree
	Preorder(root->right);    // Visit right subtree
}

//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	cout<<("\n ",root->data)<<" ";  //Print data
	Inorder(root->right);      // Visit right subtree
}

//Function to visit nodes in Postorder
void Postorder(Node *root) {
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	cout<<("\n ",root->data)<<" "; // Print data
}

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}
 
int main() {
cout<<"\tPOSISI AWAL TREE"<<endl;
cout<<"\t       R\n\t      / \\\n\t     A   E\n\t    /\n\t   S\n\t  / \\\n\t I   T\n\n";
	Node* root = NULL;
	root = Insert(root,'R'); 
	root = Insert(root,'I');
	root = Insert(root,'A'); 
	root = Insert(root,'S'); 
	root = Insert(root,'E'); 
	root = Insert(root,'T');
	//Print Nodes in Preorder. 
	cout<<"Preorder: ";
	Preorder(root);
	cout<<"\n";
	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
	//Print Nodes in Postorder
	cout<<"Postorder: ";
	Postorder(root);
	cout<<"\n";
}


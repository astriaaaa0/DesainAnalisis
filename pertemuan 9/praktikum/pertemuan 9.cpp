//Program Tree
#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* left;
		Node* right;
		
		Node (int value) {
			data = value;
			left = NULL;
			right = NULL;
		}
};

class Tree {
	public:
		Node* root;
		
		Tree () {root = NULL;}
		
		void insert(int value) {
			root = insert(root, value);
		}
		
		Node* insert (Node* node, int value) {
			if (node == NULL) {
				node = new Node (value);
			} else if (value <= node -> data) {
				node -> left = insert (node -> left, value);
			} else {
				node -> right = insert (node -> right, value);
			}
			return node;
		}
		
		void inorder () { inorder(root); }
		
		void inorder (Node* node) {
			if (node == NULL) return;
			inorder (node -> left);
			cout<< node -> data <<" ";
			inorder (node -> right);
		}
};

int main (){
	Tree tree;
	tree.insert(10);
	tree.insert(5);
	tree.insert(15);
	tree.inorder();
	
	return 0;
}


// 

//#include <iostream>
//using namespace std;
//
//const int MAX_NODES = 100;
//
//int tree [MAX_NODES];
//int n;
//
//void insertNode (int x) {
//	int curr = 0;
//	while (tree[curr] != -1) {
//		if (x < tree[curr]) {
//			curr = 2 * curr + 1;
//		}
//		else {
//			curr = 2 * curr + 2;
//		}
//	}
//	
//	tree [curr] = x;
//	n++;
//}
//
//void inorderTraversal (int curr) {
//	if (tree[curr] != -1) {
//		inorderTraversal (2 * curr + 1);
//		cout << tree[curr] << " ";
//		inorderTraversal (2 * curr + 2);
//	}
//}
//
//int main () {
//	for (int i = 0; i < MAX_NODES; i++) {
//		tree[i] = -1;
//	}
//	n = 0;
//	
//	int x;
//	char pilihan;
//	
//	do {
//		cout << " Masukkan nilai pada binary tree : ";
//		cin >> x;
//		insertNode(x);
//		cout << " Ingin memasukkan nilai lain ( y / n ) ? : ";
//		cin >> pilihan;
//	}while (pilihan == 'y' || pilihan == 'Y');
//	
//	cout << " In-order traversal : ";
//	inorderTraversal(0);
//	
//	return 0;
//}


//STUDI KASUS 61 & TUGAS LATIHAN 65

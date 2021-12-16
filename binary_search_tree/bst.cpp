#include <iostream>
using namespace std;

class Node {
public:
	int key;
	Node *left;
	Node *right;

	Node(int key){
		this->key = key;
		left = right = NULL;
	}
};


bool search(Node *root,int key){

	if(root == NULL){
		return false;
	}

	if(key < root->key){

		return search(root->left,key);

	}else if (key > root->key)
	{
		return search(root->right,key);

	}else{

		return true;
	}
}
Node* insert(Node * root,int key) {

	if(root == NULL){
		return new Node(key);
	}

	if(key < root->key){
		root->left = insert(root->left,key);
	}else{
		root->right = insert(root->right,key);
	}
	return root;
}
void printInOrderTraversal(Node *root){
	if(root == NULL){
		return;
	}

	printInOrderTraversal(root->left);
	cout<< root->key <<",";
	printInOrderTraversal(root->right);
}

int main(){

	Node* root = NULL;
	int arr[] = {8,3,10,1,6,14,4,7,13};
	for(int x:arr){
		root = insert(root,x);
	}
	//printInOrderTraversal(root);
	cout << search(root,11) << endl;
}
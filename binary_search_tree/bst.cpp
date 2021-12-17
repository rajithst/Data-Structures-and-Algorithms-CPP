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

Node* findMin(Node * root){
	while(root->left!=NULL){
		root = root->left;
	}
	return root;
}


Node* remove(Node * root,int key){

	if (root == NULL)
	{
		return NULL;

	}else if (key > root->key)
	{
		root->right = remove(root->right,key);

	}else if (key < root->key)
	{
		root->left = remove(root->left,key);

	}else{

		if(root->left == NULL && root->right == NULL){ // if leaf node

			delete root;
			root = NULL;

		}else if (root->left ==NULL) //which means root->right only exist
		{
			Node * temp = root;
			root = root->right;
			delete temp;

		}else if (root->right == NULL) // which means root->left only exist
		{
			Node * temp = root;
			root = root->left;
			delete temp;

		}else{						   // node has both left and right childs

			//find in-order successor (which sitting in most left in right subtree)
			Node * temp = findMin(root->right); //found in-order successor
			root->key = temp->key; //copy in-order successor value to current node
			root->right = remove(root->right,temp->key); //finally remove the inorder-successor node from right subtree of current node
		}
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
	//cout << search(root,11) << endl;
	root = remove(root,8);
	printInOrderTraversal(root);
	cout<<endl;
	root = remove(root,6);
	printInOrderTraversal(root);
}
#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
	char data;
	unordered_map<char,Node*> m;
	bool isTerminal;

	Node(char data){
		data = data;
		isTerminal = false;
	}
};

class Trie{

	Node*root;

	public:
		Trie(){
		root = new Node('\0');
	}

	void insert(string word){

		Node*temp = root;

		for(char ch:word){
			if(temp->m.count(ch)==0){
				Node*n = new Node(ch);
				temp->m[ch] = n;
			}
			temp = temp->m[ch];
		}
		temp->isTerminal = true;
	}

	bool search(string word){

		Node*temp = root;
		for(char ch:word){

			if(temp->m.count(ch)==0){
				return false;
			}
			temp = temp->m[ch];
		}
		return temp->isTerminal;
	}
};

int main(){

	Trie t;
	string words[] = {"apple","ape","no","news","not","never"};
	for(string w:words){
		t.insert(w);
	}

	int q;
	cin >> q;
	string search_word;
	while(q--){
		cin>>search_word;
		if(t.search(search_word)){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
}
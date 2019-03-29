//binary tree
#include <iostream>
using namespace std;

class node{
	public:
	//data to store 
	int data;
	// making the node pointers
	node * left;
	node * right;
	node * par;
	//making the constructor
	node(int val){
		data = val;
		right = NULL;
		left = NULL;
	}
};

class bst{
	public:
	node * root;
	bst(){
		root=NULL;
	};
	void ins(int value){
		insh(root, value);
	}
	void insh(node * curr, int value){
		//base case if curr is null insert there
		if(curr == NULL){
			curr = new node(value);
			if (root == NULL) root = curr;
			return;
		}
		
		//else compare curr data with value
		else if (value < curr->data){
			if (curr->left==NULL){
				curr->left = new node(value);
				curr->left->par=curr;
			}
			//if value < curr data -> move left and inserthelper
			else{
				insh(curr->left,value);
			}
		}

			//else move right and call inserthelper
		else if (value > curr->data){
			if (curr->right==NULL){
				curr->right = new node(value);
				curr->left->par=curr;
			}
			else{
				insh(curr->right,value);
			}
		}
	}
	void display(){
		display2(root);
	}
	void display2(node * curr){
	//base condition
		if(curr == NULL) return;
	//display left
		display2(curr->left);
	//display current 
		cout<<curr->data<<",";
	//display right
		display2 (curr->right);


	}
	node * search(node * curr, int val){
	//if reached the end of the tree , or found the value
		if (curr == NULL || curr->data == val) return curr;
	//if could not find the value
		else if (val<curr->data) return search(curr->left,val);
		else return search(curr->right,val);
	}

	node * fmin(node * curr){
		if (curr->left !=NULL) fmin(curr->left);
		else return curr;
	}
	int count(){
		count2(root);
	}
	int count2 (node * curr,int i){
		if(curr== NULL){
			cout<<0<<endl;
		}
		else if(
	//next class friday
	//height();
	//deletenode();
	
	//1.search
	//2.findmin findmax
	//3.replacenp{case 1, case 2, case 3}
	//4.delnode
	//5.height










};




int main(){
	bst b1;
	b1.ins(4);
	b1.ins(3);
	b1.ins(7);
	b1.ins(2);
	b1.ins(5);
	b1.display();
	cout<<endl;

return 0;
}


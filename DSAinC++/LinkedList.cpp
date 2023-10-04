using namespace std;
#include <iostream>
#include <climits>

class node{
	public:
		int data;
		node * next;
		
		node(int x){
			data = x;
			next = NULL;
		}
};

class List{
	public:
	node * root;
	int size;
		List(){
			size = 0;
			root = NULL;
		}
		
		void add(int x){
			node * curr = root;
			node * newnode = new node(x);
			size++;
			if(root == NULL){
				root = newnode;
			}
			else{
				while(curr->next){
					curr = curr->next;
				}
				curr->next = newnode;
			}	
		}
		
		void display(){
			node * curr = root;
			while(curr){
				cout << curr->data << " -> ";
				curr = curr->next;
			}
			cout << "null" << endl;
		}
		
		int count(){
			node * curr = root;
			int count = 0;
			while(curr->next){
				curr = curr->next;
				count += 1;
			}
			return count + 1;
		}
		
		int rcount(node * curr){
			if(!curr){
				return 0;
			}
			return 1 + rcount(curr->next); 
		
		}
		
		int sum(){
			int sum = 0;
			node * curr = root;
			while(curr){
				sum += curr->data;
				curr = curr->next;
			}
			return sum;
		}
		
		int rsum(node * curr){
			if(!curr){
				return 0;
			}
			return curr->data + rsum(curr->next);
		}
		
		void max(){
			int value = INT_MIN;
			node * curr = root;
			while(curr){
				if(curr->data > value){
					value = curr->data;
				}
				curr = curr->next;
			}
			cout << "MAX " << value;
		}
		
		int rmax(node * p){
			int x = 0;
			if(!p)
				return INT_MIN;
			x = rmax(p->next);
			return x > p->data? x : p->data;
		}
		
		node* search(int key){
			 node * curr = root;
			 while(curr){
			 	if(curr->data == key){
			 		return curr;
			 	}
			 	curr = curr->next;
			 }
			 return NULL;
		}
		
		node* rsearch(int key, node * p){
			if(!p)
				return NULL;
			if(p->data==key)
				return p;
			return rsearch(key,p->next);
		}
		
		void insert(int x,int idx){
			node * newnode = new node(x);
			node * curr = root;
			while(--idx){
				curr = curr->next;
			}
			newnode->next = curr->next;
			curr->next = newnode; 
		}
		
		void remove(int idx){
			node * curr = root;
			while(--idx){
				curr = curr->next;
			}
			node * del = curr->next;
			curr->next = curr->next->next;
			free(del);
		}
		
		void prepend(int x){
			node * newnode = new node(x);
			newnode->next = root;
			root = newnode;
		}
		
		int pop(){
			node * curr = root;
			while(curr->next->next){
				curr = curr->next;
			}
			node * del = curr->next;
			curr->next = NULL;
			return del->data;
			free(del);
			
		}
};


int main(){
	List a;
	a.add(1);
	a.add(2);
	a.add(3);
	a.add(69);
	a.add(4);
	a.add(5);
	
	a.display();
	a.insert(420,5);
	a.remove(4);
	a.prepend(57);
	a.display();
	cout << a.pop();
	a.display();
}
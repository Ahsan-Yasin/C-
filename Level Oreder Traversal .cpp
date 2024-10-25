#include <iostream>   
#include <queue>
using namespace std; 
 struct tree
{
	int data;
	tree* left;
	tree* right;
	tree(int value)
	{
		data = value;
		left = NULL;
		right = NULL;
	}
}; 
 void insert(tree * &head, int value)
	 {
	 	if (!head)
	 	{
	 		head = new tree(value);
	 		return;
	 	}
	 	else if (value > head->data)
	 	{
	 		return insert(head->right, value);   
	 	}
	 	else if (value < head->data)
	 	{
	 		return insert(head->left, value);
	 	}
	 	else
	 	{
	 		return;
	 	} 
}
 void  LevelOrderTraversal(tree* root)
 {
	 if (!root)
		 return; 
	 queue<tree*>Q; 
	 Q.push(root); 
	 while (!Q.empty())
	 {
		 tree* current = Q.front();
		 cout<<current->data<<" ";  
		 if (current->left)
			 Q.push(current->left);  
		 if (current -> right) 
			 Q.push(current->right); 
		 Q.pop(); 
		 
	 }
 }
 int main()
 {
	 tree* head = NULL;
	 insert(head, 7);
	 insert(head, 4);
	 insert(head, 1);
	 insert(head, 3);
	 insert(head, 9);
	 insert(head, 12);
	 insert(head, 10); 
	 LevelOrderTraversal(head); 
 }
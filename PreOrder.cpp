//#include <iostream>
//using namespace std; 
//struct tree
//{
//	int data;
//	tree* left;
//	tree* right;
//	tree(int value)
//	{
//		data = value; 
//		left = NULL; 
//		right = NULL; 
//	} 
// }; 
//void preOrder(tree* root)
//{
//	if (!root)
//	{
//		return;
//	}
//	cout << root->data << " ";
//	preOrder(root->left); 
//
//	preOrder(root->right);
//
//}
//void insert(tree*& head, int value)
//{
//	if (!head)
//	{
//		head = new tree(value);
//		return; 
//	}
//	else if (value> head->data)
//	{
//		return insert(head->right, value);
//	}
//	else if(value<head->data)
//	{
//		return insert(head->left, value );
//	}
//	else
//	{
//		return;    
//	}
//}
//int main()
//{
//	tree* root = NULL; 
//	insert(root,1);
//	insert(root, 2);
//	insert(root, 5);
//	insert(root, 3);
//	insert(root, 6);
//	insert(root, 4);
//	postOrder(root); 
//}
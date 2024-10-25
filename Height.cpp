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
//}; 
//int  height(tree*root) 
//{
//	if (!root)
//		return -1 ; //as null sjould not be counted 
//	int m1 = height(root->left)+1; // traversing the whole left sub tree
//	int m2 = height(root->right)+1;//traversing the whole righ sub tree
//	return m1 > m2 ? m1 : m2;  // checking which side had longer path 
//    
//}
//void inOrder(tree* root)
//{
//	if (!root)
//	{
//		return;
//	}
//	cout << root->data << " ";
//	inOrder(root->left);
//
//	inOrder(root->right);
//	
//}
//void insert(tree*& head, int value)
//{
//	if (!head)
//	{
//		head = new tree(value);
//		return;
//	}
//	else if (value > head->data)
//	{
//		return insert(head->right, value);
//	}
//	else if (value < head->data)
//	{
//		return insert(head->left, value);
//	}
//	else
//	{
//		return;
//	} 
//}
//int main()
//{
//	tree* root = NULL;
//	insert(root, 1);
//	insert(root, 2);
//	insert(root, 5);
//	insert(root, 3);
//	insert(root, 6);
//	insert(root, 4);
//	postOrder(root);
//}
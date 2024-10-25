//#include <iostream> 
//using namespace std; 
// struct tree
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
// void insert(tree * &head, int value)
//	 {
//	 	if (!head)
//	 	{
//	 		head = new tree(value);
//	 		return;
//	 	}
//	 	else if (value > head->data)
//	 	{
//	 		return insert(head->right, value);
//	 	}
//	 	else if (value < head->data)
//	 	{
//	 		return insert(head->left, value);
//	 	}
//	 	else
//	 	{
//	 		return;
//	 	} 
//	 } 
// int size(tree* root )
// {
//	 if (!root)
//		 return  0; 
//	 return  size(root->left) + size(root->right) + 1; 
// }
//int main()
//{
//	tree* str = NULL; 
//	insert(str, 7);
//	insert(str, 5);
//	insert(str, 3);
//	insert(str, 4);
//	insert(str, 9);
//	insert(str, 6);
//	insert(str, 12);
//	insert(str, 13 ); 
//	cout << size(str)<<endl ; 
//}
//#include <iostream>
//using namespace std; 
//struct node
//{
//	int data;
//	node* left; 
//	node* right;  
//	node(int value)
//	{
//		data = value; 
//		left = NULL; 
//		right = NULL;
//	} 
//};
//void insert(node*& root,int value )
//{ 
//	if (root == nullptr)
//	{ 
//		root = new node(value);  
//		return;  
//	 }
//	else if ( value<root->data )   
//	{ 
//		return  insert(root->left, value);
//	}  
//	else  if(value>root->data )
//	{
//		return  insert(root->right, value);
//	} 
//	else
//	{
//		return; 
//	} 
//	cout << "Error ";
//} 
//void PreOrder(node* root)
//{ 
//	if (root == NULL)
//
//	{
//		return;  
// 	} 
//	cout << root->data << " "; 
//	PreOrder(root->left);
//	PreOrder(root->right);
// }
//int min_element(node* root)
//{
//	if (!root->left)
//	{
//		return root->data;
//	 }
//	else
//	{
//		return min_element(root->left);
//	}
//} 
//int max_element(node* root) 
//{
//	if (!root->right)
//	{
//		return root->data;
//	}
//	else
//	{
//		return max_element(root->right);
//	}
//}
// bool BinarySearch(node* root, int value)
//{
//	 if (root == nullptr)
//	 {
//		 return false;
//	 } 
//	    
//	 if (root->data == value)
//	 {  
//		 return true;    
//	 } 
//	 else if (value >root->data )
//	 { 
//
//		 return  BinarySearch(root->right, value);
//	 }        
//	 else if (value < root->data)
//	 {
//		 return  BinarySearch(root->left , value);
//	 }
//}
//int main()
//{ 
//	node* tree=nullptr;  
//	insert(tree,4);  // root 
//	insert(tree, 3); //left 
//	insert(tree, 1);//right   
//	insert(tree, 2); //left left   
//	insert(tree, 5);//left left 
//	insert(tree, 8); //right right right  
//	insert(tree, 6);
//	insert(tree, 7);
//	insert(tree, 12); 
//	insert(tree, 11);  
//	insert(tree, 7); 
//	insert(tree, 9); 
//	
//	//PreOrder(tree);
//	//cout << endl;
//	//cout << BinarySearch(tree, 11);
//	//cout << endl << min_element(tree);  
//	cout << endl << max_element(tree); 
//}
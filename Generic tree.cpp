//#include <iostream>
//using namespace std;
//struct GenericTree
//{
//	GenericTree* child;
//	GenericTree* sibling;
//	int data; 
//	GenericTree(int value)
//	{
//		data = value; 
//		child = NULL; 
//		sibling = NULL;
//	} 
//};
//int sum(GenericTree* root)
//{
//
//	if (root)
//	{ 
//		int Sum = root->data;
//		
//	
//		return Sum + sum(root->child)+ sum(root->sibling);
//		 
//	 }
//	return 0;
// } 
//int  count_siblings(GenericTree* root)
//{
//	if (root)
//	{
//		return count_siblings(root->sibling) + 1;
//	}
//	return 0;
//	 
//}
//int main()
//{
//	GenericTree* tree = new GenericTree(1); 
//
//	tree->child = new GenericTree(2); 
//	tree->child->sibling = new GenericTree(3);
//	tree->child->sibling->child = new GenericTree(5);
//	tree->child->sibling->sibling = new GenericTree(6);
//	cout << "Sum : " << sum(tree) << endl; 
//	cout << "Siblings : " << count_siblings(tree->child)<<endl;
//}
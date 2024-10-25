////#include <iostream>
////using namespace std;  
////struct  node
////{ 
////	int data;  
////	node* left; 
////	node* right;
////	node(int value)
////	{
////		data = value;
////		left = NULL;
////		right = NULL;
////	}
//// int linear_search(int arr[], long size, long value)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == value)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//bool  binary_search(int arr[], long  size, long bounds, long value)
//{
//	long mid = size / 2;
//
//	if (mid >= bounds || mid <= bounds)
//	{
//		return false;
//	}
//	if (arr[mid] == value)
//	{
//		return true;
//	}
//	else if (arr[mid] < value)
//	{
//		return binary_search(arr, mid - 1, bounds, value);
//	}
//	else
//	{
//		return binary_search(arr, mid + 1, bounds, value);
//	}
//
//
//}
////};  
////int main()
////{
////	node* root; 
////	root = new node(1); 
////	root->left = new node(2); 
////	root->right = new node(3);
////}
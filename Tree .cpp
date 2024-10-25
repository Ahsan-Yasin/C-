//#include <iostream>  
//#include <stack>
//#include <queue>
//using namespace std;  
//struct node
//{
//	int data; 
//	node* right; 
//	node* left; 
//	node(int val)
//	{ 
//		data = val; 
//		right = NULL; 
//		left = NULL;
//	}
//}; 
//void PreOrder(node* root); 
//void InOrder(node* root); 
//void PostOrder(node* root); 
//int TreeMax(node* root);
//bool Find(node* root  ,int value  )  ; 
//bool Find_Method_2(node* root, int value); 
//void insertInBinary(node* &root, int data);   
//int size(node* root); 
//void PrintReverse(node* root);
//void Delete(node*& root); 
//int Sum(node* root);
//node* swap(node* root);
//int main() 
//{
//	node* tree = new node(1); 
//	 
//	tree->left = new  node(2);  
//	tree->right = new  node(3); 
//	tree->left->left = new node(4); 
//	tree->left->right = new node(5); 
//	tree->right->left = new node(6);
//	tree->right->right = new node(7); 
//	//insertInBinary(tree, 8);
//	//insertInBinary(tree, 9);  
//	//insertInBinary(tree, 10);
//	//insertInBinary(tree, 12);
//
//	PreOrder(tree);  
//	cout <<" |\n"; 
//	InOrder(tree); 
//	cout <<" |\n";
//	PostOrder(tree);
//
//	cout <<" |" << endl << "---ENDS HERE---| \n"; 
//	cout<<"MAX : "<<TreeMax(tree)<<endl ; 
//	cout << "FIND : " << Find(tree, 3) << endl; 
//	cout << "FIND 2 : " << Find_Method_2(tree, 7)<<endl ; 
//	cout << "SIZE OF TREE : " << size(tree) << endl; 
//	//Delete(tree);
//	PrintReverse(tree);   
//	PrintReverse(swap(tree)); 
//	cout << endl << "SUM : " << Sum(tree) << endl;
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
//void InOrder(node* root) 
//{
//	if (root == NULL)
//	{
//		return;
//	} 
//	InOrder(root->left);
//	cout << root->data << " ";  
//	InOrder(root->right);
//	
//}
//void PostOrder(node* root)
//{
//	if (root == NULL)
//	{
//		return; 
//	}
//	PostOrder(root->left);
//	PostOrder(root -> right); 
//	cout << root->data << " ";
//}  
//int TreeMax(node* root)
//{  
//	static int max;
//	if (!root)
//	{ 
//		return 0; 
//
//	 }
//	else
//	{ 
//		TreeMax(root->left);  
//		TreeMax(root->right); 
//		if (root->data > max)
//		{
//			max = root->data; 
//		}
//
//	}
//	return max; 
//	 
//}
//bool Find(node* root,int num)
//{  
//	static bool flag=false ; 
//	if (root) 
//	{
//		if (root->data == num)
//		{
//			flag = true;
//		}
//		else
//		{ 
//			Find(root->left, num);
//			Find(root->right, num);
//		}
//		  
//	} 
//	else
//		return false;
//
//
//	return flag;
//	 
//	  
//}
//bool Find_Method_2(node* root, int value)
//{ 
//	bool temp; 
//	if (!root)
//	{ 
//		return false; 
//	 }
//	else 
//	{ 
//		if (root->data == value)
//		{ 
//			return true;  
//		 }  
//		temp = Find_Method_2(root->left, value);  
//		  
//		if (temp)   
//		{    
//			return temp;  
//		}     
//		else
//		{
//			return   Find_Method_2(root->right, value);
//		} 
//		 
//	}  
//	  
//}
//void insertInBinary(node*& root, int data)
//{
//	if (root == NULL)
//	{
//		root = new node(data);
//		return;
//	}
//	else
//	{
//
//		if (data > root->data)
//		{
//			return	insertInBinary(root->right, data);
//
//		}
//		else
//		{
//			return insertInBinary(root->left, data);
//		}
//	} 
//} 
//int size(node* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	 }
//	else
//	{ 
//		return  size(root->left) + size (root->right) +1 ;  
//
//	}
//}  
//void PrintReverse(node* root)
//{
//	 
//		if (root == nullptr) {
//			return;
//		}
//
//		// Create a queue for normal level order traversal
//		queue<node*> q;
//		// Create a stack to store the nodes in reverse level order
//		stack<node*> s;
//
//		// Enqueue the root node 
//		q.push(root);
//
//		// Perform level order traversal
//		while (!q.empty()) {
//			// Dequeue a node from the queue
//			node* current = q.front();
//			q.pop(); 
//			  
//			// Push the current node onto the stack
//			s.push(current); 
//
//			// Enqueue the right child first, then the left child
//			if (current->right) {
//				q.push(current->right);
//			}
//			if (current->left) {
//				q.push(current->left);
//			}
//		}
//		  
//		// Pop all nodes from the stack and print them
//		while (!s.empty()) {
//			cout << s.top()->data << " ";
//			s.pop();
//		}
//		cout << endl; 
//	
//
//	
//} 
//void Delete(node* &root)
//{
//	if (root == NULL)
//		return; 
//	else
//	{
//		Delete(root->left); 
//		Delete(root->right); 
//		delete root; 
//		root = nullptr; 
//	}
//}
//int  Sum(node* root)
//{
//	if (root == NULL)
//		return 0;
//	else
//		return  root->data + Sum(root->left) + Sum(root->right);
//	 
//}
//node* swap(node* root)
//{
//	if (root == nullptr) {
//		return NULL ;
//	}
//
//	// Swap the left and right children
//	node * temp = root->left;
//	root->left = root->right;
//	root->right = temp;
//
//	// Recursively swap the children of the left and right subtrees
//	swap(root->left);
//	swap(root->right);
//	  
//	return temp;
//}
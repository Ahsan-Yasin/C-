//#include <iostream>
//using namespace std;
//
//class node  
//{
//	 	   
//public: 
//	  
//	static int num;
//	int value;
//	node* next;   
//	node(int val)
//	{
//		num++; 
//		value = val;
//		next = nullptr;  
//		
//	} 
//}; 
// int node::num = 0;
//void insert(node*& head, int value)
//{
//	 
//	node* ptr = new node(value); 
//	if (head == nullptr)
//	{   
//		head = ptr;
//	} 
//	node* temp = head; 
//     
//	while (temp->next!= nullptr)
//	{
//		temp=temp->next;
//	}
//	temp->next = ptr;  
//}
//void const  display  ( node* head )
//{ 
//	while (head != nullptr)
//	{ 
//		cout << head->value << "  ";
//		head=head->next;
//	}   
//	cout << endl;
//} 
//node* reverse(node* head)
//{
//	node* current = head; 
//	node* next;   
//	node* previous = NULL; 
//	while (current != nullptr)
//	{
//		next = current->next;     
//		current->next = previous; 
//		previous = current; 
//		current = next;
//	}
//	return  previous; 
// }    
//node* revesrse_node(node* &head,int k) 
//{
//	if (head == nullptr)
//	{
//		return head;
//	}
//	node* current = head; 
//	node* next=NULL;  
//	node* previous = NULL; 
//	int count = 0;    
//	while (current != nullptr && count <k)
//	{
//		next = current->next; 
//		current->next = previous;
//		previous = current;
//		current = next; 
//		count++;
//	}
//	 if(next!=NULL)
//	head->next = revesrse_node(next, k);
//
//	 return previous;
//} 
//node* reverse_recursive(node* &head)
//{
//	//cout << endl;
//	//display(head);
//	if (head == NULL || head->next == NULL) 
//	{ 
//		return head  ; 
//	  }  
//	//cout<<head->value<<" "; 
//
//	node* ptr = reverse_recursive(head->next); 
////	cout << ptr->value << " \n";  
//	head->next->next = head;  
//	head->next = NULL;   
//	display(ptr);   
//	return ptr; 
//}  
//void RemoveCycle(node*& head)
//{
//	if (head == nullptr || head->next == nullptr) 
//	{
//		return; // No cycle to remove if list is empty or has only one node
//	}
//
//	node* bunny = head;
//	node* turtle = head;
//	do
//	{
//		bunny=bunny->next->next;
//		turtle = turtle->next; 
//		  
//	} while (bunny != turtle); 
//	bunny = head ;  
//	while (bunny->next!= turtle->next  )
//	{ 
//		bunny = bunny->next;
//		turtle = turtle->next;
//		 
//	}  
//	 
//	// Now bunny and turtle are at the start of the cycle
//	// Set the next of the last node in the cycle to null to break the cycle
//	turtle = turtle->next; // Move turtle to the node after the cycle
//	while (turtle->next != bunny) 
//	{ 
//		turtle = turtle->next;
//	}
//	turtle->next = nullptr;
//	
//}
//bool Detect_Cycle(node*& head)
//{ 
//	node* bunny = head;
//	node* turtle = head; 
//	while (bunny->next != NULL && bunny != NULL)
//	{ 
//		bunny = bunny->next->next;
//		turtle = turtle ->next;
//		if (bunny == turtle)
//
//		{
//			return true;
//		}
//
//	 }
//	return false;
//}
//void do_it (node * &head)
//{
//	node* start = head;
//	while (start->next->next != nullptr)
//	{
//		start = start->next;  
//	} 
//	start->next  = head;
//} 
//int main()   
//{   
//	node* start = new node(1);  
//	insert(start, 2);    
//	insert(start, 3);     
//	insert(start, 4);
//	insert(start, 11); 
//	insert(start, 7);  
//	insert(start, 10);  
//	display(start);
//	//display(start);
//	//cout << endl << start->num << endl;
////	start = reverse(start); 
////	display(start);
//	//cout << endl << start->num << endl;
//	//start = reverse_recursive(start); 
//	//cout << "end result : \n";
//	//display(start);
//	start=  revesrse_node(start,2); 
//	display(start); 
//	do_it(start);
//	//display(start);
////   	cout << Detect_Cycle(start);
//	RemoveCycle(start); 
//	display(start);
//}    

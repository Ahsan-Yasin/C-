//#include<iostream> 
//using namespace std;
//class LinkedList
//{
//public:
//	int value;
//	LinkedList* next;
//	static int num;
//	LinkedList(int val)
//	{
//		num++; 
//		this->value = val;
//		next = nullptr;  
//	} 
//	
//}; 
// int  LinkedList::num = 0;
//void insertion(LinkedList*& head,int val)
//{
//	LinkedList* ptr = new LinkedList(val);
//	LinkedList* temp = head;  
//
//	while (temp->next != nullptr)      
//	{
//
//		temp= temp->next;   
//	 }
//	temp->next = ptr; 
//} 
//void  insert_in_middle(LinkedList*& head, int index,int value)
//{
//	LinkedList* temp = head;
//	int count = 0;
//	if (index == 0) {
//		LinkedList* new_node = new LinkedList(value);
//		new_node->next = head;
//		head = new_node; 
//		return;
//	}  
//	while (count < index-1  )   
//	{ 
//		if (temp == nullptr)  
//		{  
//			cout << "Index not found!\n"; 
//			return;
//		} 
//		temp = temp->next;             
//		count++;   
// 	} 
//	
//	cout << endl<<count << endl;
//	LinkedList* type = new  LinkedList(value);
//	type->next = temp->next;  
//	temp->next= type;          
//	 
//	 
//
//} 
//void insert_start(LinkedList*& head, int value)
//{
//	
//	LinkedList* node = new LinkedList(value);
//	node->next = head; 
//	head = node;
//	
// }
//int Count(LinkedList* head) 
//{
//	int count = 0;
//	LinkedList* temp = head;
//	while (temp != nullptr)
//	{
//		count++;
//		temp = temp->next; 
//	}
//	return count;
//}
//void const Display(LinkedList* head) 
//{           
// 	while (head!= nullptr)                 
//	{ 
//		cout << head->value << "->";          
//		head = head->next;              
//     }  
//	cout<<"NULL" << endl; 
//}      
//void del_head(LinkedList*& head)
//{
//	if(head==nullptr)
//	{
//		return; 
//	}
//	LinkedList* temp = head;
//	head = head->next;  
//	
//	delete temp;  
//	
//}
//void del(LinkedList*& head, int val) 
//{
//	LinkedList* temp = head; 
//	if (head == nullptr)
//	{
//		return;
//	}
//	else if (head->value == val)
//	{
//		del_head(head); 
//		return; 
//	}
//
//		while (temp->next->value != val  ) 
//		{
//			
//			temp = temp->next;       
//
//			if (temp->next == NULL)
//			{
//				cout << "\nVALUE NOT FOUND.... \n";
//				return; 
//			}  
//			
//		}       
//		LinkedList* val_LinkedList = temp->next;
//		temp->next = temp->next->next;
//		delete  val_LinkedList;
//		 
//} 
//void  del_tail(LinkedList*&head)
//{
//	if (head == nullptr)
//	{ 
//		return; 
//    } 
//	else
//	{ 
//	LinkedList* temp = head;
//	while (temp ->next->next  != nullptr)
//	{
//		temp = temp->next;
//	}  
//	  
//	delete temp->next; 
//	temp->next = nullptr; 
//	 }
//} 
//bool Search(LinkedList* head, int key)
//{
//	LinkedList* temp = head;
//	while (temp != nullptr)
//	{
//		temp = temp->next;
//		if (temp->value == key)
//		{
//			return true;
//		}
//		
//	 }
//	return false;
//}
//int main()              
//{             
//	LinkedList* head=new LinkedList(5); 
//	bool flag = true;
//	int i;
//	insertion(head, 4);          
//	insertion(head, 3);                       
//     insertion(head, 1);  
//     insertion(head, 7);             
////	Display(head);           
////	//del(head, 3);    
////	//del_head(head); 
////	//del(head, 49);    
////	//del(head, 7);  
//	insertion(head, 4);  
//    insertion(head, 9);
// //    del(head, 4); 
////	del(head, 1);  
//
//	Display(head);
//	insert_in_middle(head, 6, 25);
//	insert_in_middle(head, 5, 20); 
//	insert_in_middle(head, 4, 15);
//	insert_in_middle(head, 3, 10); 
//	insert_in_middle(head, 2, 5);
//	insert_start(head, 111);
//	insert_start(head, 6767);
//
//	Display(head);  
//	cout << Count(head) << endl;
//	del_tail(head);
//	Display(head);
//	if (Search(head, 111))
//	{
//		cout << "\nVALUE FOUND !\n";
//	}
//	else
//	{
//		cout << "\nVALUE NOT FOUND\b\n";
//	}
//}      
//  
//
//

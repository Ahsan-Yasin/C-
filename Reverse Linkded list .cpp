//#include <iostream>
//using namespace std;
//class LinkedList
//{
//public:
//	int value;
//	LinkedList* next;
//	LinkedList(int val)
//	{
//		value = val;
//		next = nullptr;
//	}
//};
//void insert(LinkedList*&head,int val)
//{
//	LinkedList* inset = head;
//	while (inset->next!= nullptr)
//	{ 
//		inset = inset->next;   
//	 }
//	LinkedList* copy = new LinkedList(val);
//	inset->next  = copy;   
//}
//void Display(LinkedList* head) 
//{
//	cout << endl;
//	while (head != NULL)
//	{
//		
//		cout << head->value << " ";
//		head = head->next; 
//	 }
//	cout << endl;
//}  
//LinkedList *Reverse(LinkedList*& head)
//{
//	LinkedList* current = head; 
//	LinkedList* previous = NULL; 
//	LinkedList* next=NULL    ;
//	while (current != nullptr) 
//	{
//		next = current->next;
//		current->next = previous; 
//		previous = current;
//		current = next; 
//	}
//	return previous;
// }
//LinkedList* ReverseRecursive(LinkedList*& head)
//{   
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}  
//	LinkedList* ptr = ReverseRecursive(head->next);
//	head->next->next = head;
//	head->next = NULL;  
//	return ptr;
//} 
//int main()  
//{
//	LinkedList* start = new LinkedList(1);
//	insert(start, 2);
//	insert(start, 3); 
//	insert(start, 4);
//	insert(start, 5); 
//	cout << "ORIGNAL : ";
//	Display(start);
//	start=Reverse(start);
//	cout << "REVERSE : ";
//	Display(start);  
//	cout << "REVERSED AGAIN : ";
//	start = ReverseRecursive(start);
//	Display(start);
//}
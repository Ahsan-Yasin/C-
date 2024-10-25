//#include <iostream>
//using namespace std; 
//#define  size 100
//
//class stack
//{
//	int* arr;
//	int top;
//public:
//	stack()
//	{
//		arr = new int[size];
//		top = -1;
//	 }
//	void push(int val)
//	{
//		if (top == size - 1)
//		{
//			cout << "Stack overflow\n";
//			return;
//		}
//		else
//		{
//			top++;
//			arr[top] = val;
//		}
//	} 
//	void pop()
//	{
//		if (top == -1)
//		{
//			cout << "Already empty\n";
//		 }
//		else
//		{ 
//			arr[top] = NULL;
//			top--;
//		}
//	}
//	bool empty()
//	{
//		if (top == -1)
//			return true;
//		else
//			return false;
//	} 
//	int Top() 
//	{
//		if (top == -1)
//			cout << "\nStack empty\n";
//		else
//		    return arr[top];
//	}
//};
//int main()
//{
//	stack check;
//	check.push(1);
//	check.push(2);
//	check.push(3);
//	check.push(4);
//	check.push(5);
//	cout <<"\nTop : " << check.Top(); 
//	cout << "\t" << check.empty() << endl;
//	check.pop();
//	cout << "\nTop : " << check.Top();
//	check.pop();
//	
//	cout << "\nTop : " << check.Top(); 
//	check.pop();
//	cout << "\nTop : " << check.Top();
//	check.pop();
//	cout << "\nTop : " << check.Top();
//	check.pop();
//	cout << "\nTop : " << check.Top();
//	cout << "\nEmpty : " << check.empty()<<endl ;
//}
//#include <iostream>
//#include <stack>
//using namespace std; 
//void  insert(stack<int>& st, int val)
//{
//	if (st.empty())
//	{ 
//		st.push(val);
//		return; 
//	 }
//	int top = st.top();
//	st.pop();
//	insert(st, val);
//
//	st.push(top);
// }
//void  ReverseStack(stack<int>& st)
//{
//	if (st.empty())
//	{
//		return ; 
//	}  
//	
//	int val = st.top(); 
//	st.pop();
//	ReverseStack(st);
//	st.push(val); 
//}
//int main()
//{
//	stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
//	st.push(5);
//	while (!st.empty())
//	{
//		cout << st.top() << " ";
//		st.pop();
//
//	}
//	 
//	
//}
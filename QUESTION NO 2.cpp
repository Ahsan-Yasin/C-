//#include <iostream>
//#include <String > 
//#include <cmath> 
//#include <cstdlib> 
//#include <vector>
// using namespace std;
//void  valid_Input(int& input, int min = 0, int max = 10000000)
//{
//
//	cin >> input;
//	if (input >= min && input <= max && !cin.fail())
//	{
//		return;
//	}
//	else
//	{
//		cin.clear();
//		cin.ignore(1000, '\n');
//		if (max < 1000)
//		{
//			cout << endl << "ENTER A NUMBER  GREATER THEN  " << min << "-" << max << endl;
//		}
//		else
//		{
//			cout << endl << "ENTER A NUMBER  GREATER THEN  " << min << endl;
//		}
//		return valid_Input(input, min, max);
//	}
//}
// void Input_String(string& input)
//{
//	if (cin.rdbuf()->in_avail() > 0) //this  will check if  there is input buffer or not 
//	{
//		cin.ignore(); 
//		getline(cin, input);
//	} 
//	else
//	{
//		getline(cin, input); 
//	}
//}
//
//class Check
//{ 
//private: 
//	int number_of_variables;//This will be used to ask how many variables are used  
//	string statement;
//	int size;//size of array 
//	int** ptr_array; //this would store the number of variables
//	int* result;
//	int i, j, k,z ;//for loops  
//	int changer; 
//	bool flag; 
//	char* variables; 
//	int** store; 
//public:   
//	Check() 
//	{ 
//		store = nullptr;
//		variables = nullptr; 
//		result = nullptr;
//		ptr_array = nullptr;
//		size = 0; 
//		//statement = "                                                                       ";
//		number_of_variables = 0;  
//		i = 0; j = 0; k = 0,z=0;
//		changer = 0; 
//		flag = true;
//	}
//	void set_statement() 
//	{ 
//		cin.ignore();  
//		cin.clear();
//		cout << "ENTER STATMENT : ";
//		getline(cin, statement);   
//		 
//	} 
//	void implies(int* ptr1, int* ptr2, int* result)
//	{
//		int* temp=new int[size] ;
//		//P->Q 
//		neg(ptr2,temp   );//negation of p   
//		    
//		OR(ptr1, temp, result);   
//		delete[] temp; 
//		temp = nullptr ;   
//	}    
//	void biconditional(int *ptr1,int*ptr2,int*result  )
//	{
//		int run = 0; 
//		for (run = 0; run < size; run++)
//		{ 
//			if (ptr1[run] == ptr2[run]) 
//			{ 
//				result[run] = 1;
//		     } 
//			else if(ptr1[run ]!=ptr2[run ] )
//			{
//				result[run ] = 0;   
//			}  
//			else  
//			{
//				
//				cout << "ERROR IN BICONDITIONAL FUNTION  ";  
//			}
//		}   
//		     
//	}  
//	void neg(int *ptr,int *result)
//	{
//		int run = 0;
//		 
//		for (run = 0; run < size; run++)
//		{ 
//			
//			if (ptr [run] == 1)  
//			{  
//				result[run] = 0;    
//			} 
//			else if(ptr[run]==0)
//			{  
//				result[run] = 1; 
//			}  
//			else 
//			{
//	 			cout << " THE RESULT ARRAY HAS AN INVALID ENTRY AT INDEX " << run << endl;
//			} 
//		}
//		return; 
//	} 
//	void And(int* ptr, int* ptr2, int* result)
//	{
//		int run;
//
//		for (run = 0; run < size; run++)
//		{
//			result[run] = ptr[run] * ptr2[run];//logic for and operation 
//
//		}
//		return;
//
//	}
//	void OR(int* ptr, int* ptr2, int* result)
//	{ 
//		  
//		int run; 
//
//		for (run = 0; run < size; run++) 
//		{
//			  
//			 
//           result[run] = ptr[run] + ptr2[run];//logic for and operation 
//			 
//			if(result[run]>1)   
//			{   
//				result[run] = 1;  
//			} 
//		}
//		return;
// 
//	}
//	void copy(int* ptr, int* ptr2)
//	{
//		for (int num = 0; num < size; num++)
//		{
//			ptr[num] = ptr2[num]; 
//		}  
//	}
//	void set_variable_name()
//	{
//		for (i = 0; i < number_of_variables; i++)
//		{
//			cout << "ENTER NAME OF " << i + 1 << " VARIBLES (P,Q,R,S,T) or any other ";
//			cin >> variables[i];
//		 }
//	} 
//	void set_number()
//	{ 
//		cout << "ENTER  NUMBER OF VAIRBLES YOU WILL USE : ";
//		valid_Input(number_of_variables, 1);
//		variables = new char[number_of_variables+1]; //end index is to store result 
//		set_variable_name();    
//		variables[number_of_variables] = 'R'; //storing R on the last index  
//		size = pow(2, number_of_variables);
//		changer = size / 2;
//	}
//	void make_variables()
//
//	{     
//		store = new int* [100];
//		for (i = 0; i < 100; i++)
//		{ 
//			store[i] = new int[size]; 
//		}
//		result = new int[size];
//		ptr_array = new int* [number_of_variables+1];
//		for (i = 0; i <= number_of_variables; i++)
//		{
//			ptr_array[i] = new int[size];
//		}
//		//now  initalizing these varibles with 0s and 1s 
//		for (i = 0; i < number_of_variables; i++)
//		{
//			for (j = 0, k = 0; j < size; j++)
//			{
//				if (flag)  //the changer will have values 4,2,1  depending up no.of variables and after each altration of i it will be decremented from 8 to 4 then 2 then 1 
//				{
//					//k will if it is less then  changer it will  set  value one and get an icnremenet and when it is less then changer it will get a decremnent this will keep going until loop end   
//					ptr_array[i][j] = 1;
//					k++;   
//					if (k == changer)
//					{ 
//						k = 0;
//						flag = false;
//					}
//				}
//				 
//				else
//				{
//
//					ptr_array[i][j] = 0;
//					k++;
//					if (k == changer)
//					{
//						k = 0;
//						flag = true;
//					} 
//				}
//			}
//			changer /= 2;
//			if (changer == 0)
//			{
//				changer = 1;
//			}
//		}
//	}
//	//void Print_truth_table()
//	//{ 
//	//	for (int l = 0; l < z; l++)
//	//	{
//	//		for (int o = 0; o < size; o++)
//	//		{
//	//			cout << store[l][o] << "  ";
//	//		}
//	//		cout << endl;
//	//	} 
//	//}
//
//	void Print(int *result) 
//	{  
//		 
//		for (i = 0; i < size; i++) 
//		{
//			cout << endl << result[i] << endl;
//			 
//		}  
//	} 
//	int  get_var(string get, int i)
//	{
//		for (j = 0; j <= number_of_variables; j++)
//		{
//			if (variables[j] == get[i] )
//			{
//				return j;    
//			}
//		}    
//		   
//		cout<<"DIDNT FOUND ELEMENT IN CHAR ARRY  FUNTION GET_VAR \n"; 
//		return 0;
//	}  
//	 
//	void start() 
//	{
//	    string temp;
//		int lenght =0 ; 
//		set_number();   
//		set_statement();  
//		make_variables();
//		temp = statement;  
//		      
//		   
//		for (i = 0; temp[i]!='\0'; i++)
//		{    
//			 
//			if (  temp[i] == '!' || temp[i]=='~')
//			{   
//				cout << "neg ";   
//				neg(ptr_array[get_var(temp, i + 1)],result);  // the neg will be stored in result 
//				
//	 			copy(ptr_array[number_of_variables], result);
//				temp.replace(i - 1,  2, "  ");   
//				i=0; 
//			}  
//			else if (temp[i] == '^' || temp[i] == '.' ||  temp[i] == '&') 
//			{  
//     
//				 And(ptr_array[get_var(temp,i+1)], ptr_array[get_var(temp, i-1 )],result ); 
//				 copy(ptr_array[number_of_variables], result); 
//				 temp.replace(i - 1, 2 , "  ");
//				 i = 0;
//				   
//			 }    
//			else if (temp[i] == '+' || temp[i] == '|' )  
//			{  
//				     
//				OR(ptr_array[get_var(temp, i + 1)], ptr_array[get_var(temp, i - 1)], result); 
//				copy(ptr_array[number_of_variables], result);
//				temp.replace(i - 1, 3 , "   "); 
//				i = 0;
//			} 
//			else if ( temp[i] == '-' && temp[i + 1] == '>')
//			{  
//				implies(ptr_array[get_var(temp, i - 1)], ptr_array[get_var(temp, i + 2)], result); 
//				copy(ptr_array[number_of_variables], result);
//			 	temp.replace(i - 1, 4, "    ");
//				i = 0;
//			}
//			else if (temp[i] == '<' && temp[i+1]=='=' &&temp[i+2]=='>')    
//			{         
//				biconditional(ptr_array[get_var(temp, i -1 )], ptr_array[get_var(temp, i +3 )], result); 
//				copy(ptr_array[number_of_variables], result); 
//				temp.replace(i - 1, 4, "   ");
//				i = 0;  
//			}     
//			      
//		}          
//		cout << temp;   
//		Print(result);       
//		  
//	}   
//	
//};   
//
//int main()   
//{
//	Check obj;
//	obj.start(); 
//}   
// 
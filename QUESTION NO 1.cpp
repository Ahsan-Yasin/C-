//#include <iostream>  
//#include <cmath>
//using namespace std;
//void  valid_Input(int& input, int min=0, int max=1000000)
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
//		cout << endl << "ENTER A NUMBER  GREATER THEN  " << min << endl;
//		return valid_Input(input, min, max);
//	}
//}
//class Set
//{
//private: 
//	int* A;//set 1
//	int* B;  //set 2
//	int** AB;   //AxB  
//	int size_A, size_B;
//	int size_AB;
//	int i, j, k ; 
//	bool flag;  
//	int num_Reflexive; 
//	int Diognal,non_Diognal;
//public: 
//	Set()
//	{ 
//		 //these are pointers used to store data/elments of sets 
//		AB = nullptr;
//		A = nullptr;
//		B = nullptr;
//
//		//these are used for size of sets
//		size_A = 0;
//		size_B = 0;
//		size_AB = 0;
//		//these are used for loops : 
//		i = 0; 
//		j = 0;
//		k = 0; 
//		//bool variables here :
//		flag = false;  
//		//variables used to calculate : 
//		num_Reflexive = 0; //used to calculate  number of reflexive relations  
//		non_Diognal = 0;//used to calculate  non diagonal values  
//		Diognal = 0; // for diagonal 
//	}   
//	void set_size()
//	{
//		cout << "ENTER SIZE OF ELMENT A : ";
//		valid_Input(size_A,3  ); 
//		A = new int[size_A]; //allocating Dynamic memory to A
//		cout << "ENTER SIZE OF ELMENT B : ";
//		valid_Input(size_B, 3); 
//		B = new  int[size_B]; //allocating Dynamic memory to B
//	}   
//	int get_Number_of_relations()
//	{
//		 
//		return pow(2,size_AB); 
//	}
//	void set_size_of_AB()
//	{
//		size_AB = size_A * size_B;
//	}
//	void Product()  //Calculating the Values of AxB and assigning it to a new dynamic array 
//	{
//		set_size_of_AB(); 
//	 	AB = new int* [size_AB]; 
//
//		for (i = 0; i < size_AB; i++)
//		{
//			AB[i] = new int[2];//giving each row 2 columns      
//		}
//		for (i = 0; i < size_A; i++)  //"i" will assign values of set A  
//		{  
//			for (j = 0; j < size_B; j++,k++)  //"j" will  assign values of set B   
//			{     
//				//"k" will keep moving     the array   to the next position 
//				AB[k][0] = A[i]; //assinging value of A 
//				AB[k][1] = B[j]; //assining values of B 
//			 }
//		}
//	} 
//	void Print_AB()
//	{
//		 cout<< "{ ";  
//		for (i = 0; i < size_AB; i++)
//		{  
//			cout << "( " << AB[i][0] << " , " << AB[i][1] << " ) , ";
//		} 
//		cout << " }"; 
//	}  
//	void Input_A()
//	{
//		for (i = 0; i < size_A; i++)
//		{
//			cout << "ENTER VALUE FOR A : ";
//			valid_Input(A[i]); 
//		 }
//	} 
//	void Input_B()
//	{ 
//		for (i = 0; i < size_B; i++)
//		{
//			cout << "ENTER VALES FOR B : ";
//			valid_Input(B[i]);
//		}
//	 }  
//	bool isReflexive_A(int i = 0)
//	{
//		if (i == size_A)
//		{ 
//			return flag; 
//		}  
//		else  
//		{
//			for (j = 0; j < size_AB; j++)  //this loop will  bubble search through the  whole AxB array to find (a,b) such that a=b 
//			{
//				if (A[i] == AB[j][0] && A[i] == AB[j][1])
//				{
//					flag= true;     
//					i++;   
//					return isReflexive_A(i);
//					break;  //if pair (a,a) is found then loop will be terminated 
//				} 
// 				else
//				{        
//					flag = false; 
//		 		}
//			}  
//			return flag; //   if  flag is not true in the whole loop  then it will return false here bcz then there will be no need to check further as it is not Reflexive 
//		}
//	 
//    }    
//	bool isReflexive_B(int i = 0)
//	{
//		if (i == size_B)
//		{
//			return flag;
//		}
//		else
//		{
//			for (j = 0; j < size_AB; j++)  //this loop will  bubble search through the  whole AxB array to find (a,b) such that a=b 
//			{
//				if (B [i] == AB[j][0] && B[i] == AB[j][1])
//				{
//					flag = true;
//					i++;
//					return isReflexive_B(i);
//					break;  //if pair (a,a) is found then loop will be terminated 
//				}
//				else
//				{
//					flag = false;
//				}
//			}
//			return flag; //   if  flag is not true in the whole loop  then it will return false here bcz then there will be no need to check further as it is not Reflexive 
//		}
//
//	}
//	void calculate_Values() //this will calculate the diagonal  and non diagonal values meaning the  same ex(1,1) and different values ex(1,2)
//	{  
//		Diognal= 0;
//		non_Diognal = 0;
//		for (i = 0; i < size_AB; i++)
//		{
//			if (AB[i][0] == AB[i][1])
//			{
//				Diognal++;  //this is basically n^2-n 
//			}
//			else
//			{
//				non_Diognal++; 
//			} 
//		}
//	 }
//	int Number_Of_Reflexive() 
//	{  
//		if (isReflexive_A() && isReflexive_B())
//		{ 
//			for (i = 0; i < size_AB; i++)
//			{
//				if (AB[i][0] == AB[i][1])
//				{
//
//				  }
//				else 
//				{
//					num_Reflexive++;   
//				}
//			  }
//			return pow(2, num_Reflexive);   //  using formula 2^(n^2)-n  to compute the total number   of reflexive relations   and sizeAB -sizeA - sizeB is to remove the reflexive pairs  as we need only the  unequal values means (a,b) such that a!=b  
//		} 
//		else     
//		{ 
//			cout <<  "\n RELATION IS NOT REFLEXIVE  !\n"; 
//		}
//	  }  
//	int Number_Of_Symetric() 
//	{  
//		calculate_Values();
//		return pow(2, non_Diognal/2) * pow(2, Diognal);   //using formula 2^((n^2)-n/2) * 2^n 
//	} 
//	int number_of_AntiSymetric()
//	{ 
//		calculate_Values();  
//		return  pow(3, non_Diognal/2 )*pow(2,Diognal);
//	}
//	int number_of_reflexive_symetric()
//	{
//		return  pow(2, non_Diognal / 2); //formula 2^((n^2-n)/2)
//	}
//	int number_of_Symetric_AntiSymetric()
//	{
//		return pow(2, Diognal); 
//	}
//	bool isAntiSymetric(int i=0)
//	{
//		if (i == size_AB)
//		{ 
//			return flag;
//		}
//		else
//		{
//			if (AB[i][0] != AB[i][1]) //checking if its not the reflexive pair 
//			{
//				for (j = i + 1; j < size_AB; j++)
//				{
//					if ((AB[i][0] != AB[j][1] && AB[i][1] != AB[j][0])|| AB[i][0]==AB[i][1])
//					{
//						flag = true;
//						i++;
//						return isAntiSymetric(i);
//					}
//					else
//					{
//						flag = false;
//					}
//				}
//				return false;
//			}
//		}		
//	 } 
//	bool isSymetric(int i=0 )
//	{ 
//		if (i == size_AB)
//		{   
//			return flag; 
//		} 
//		else
//		{
//			if (AB[i][0] != AB[i][1]) //checking if its not the reflexive pair 
//			{
//				for (j = i + 1; j < size_AB; j++)
//				{
//					if (AB[i][0] == AB[j][1] && AB[i][1] == AB[j][0])
//					{
//						flag = true;
//						i++;
//						return isSymetric(i);
//					}	 	 
//					else
//					{
//						flag = false;
//					}
//				}
//				return false;
//			}
//		}
//		   
//	 } 
//	void start()
//	{
//		set_size();
//		Input_A();
//		Input_B();
//		Product();
//	}
//	~Set()  
//	{  
//		delete[] A; //Deallocating memory 
//		A = nullptr;
//		delete[] B;
//		B = nullptr;  
//		for (i = 0; i < size_AB; i++)
//		{
//			delete[]  AB[i]; 
//			AB[i] = nullptr;
//		 }
//		delete[] AB;
//		AB = nullptr; 
//
//
//	}         
//};  
//int main()  
//{   
//	Set obj;    
//	obj.start();   
//	obj.Print_AB(); 
//	cout << "\nTOTAL NUMBER OF RELATIONS : " << obj.get_Number_of_relations()<<endl; 
//	if (obj.isReflexive_A() && obj.isReflexive_B() )
//	{
//		cout << "\nTHE SET RELATION IS REFLEXIVE !  "<<endl<<"NUMBER OF SYMETRIC RELATIONS : ";
//		cout << obj.Number_Of_Reflexive();
//	 } 
//	else
//	{
//		cout <<"\nNUMBER IS  NOT REFLEXIVE \n";
//	}
//	if (obj.isSymetric())
//	{ 
//		cout << "\n IS SYMETRIC !";  
//		cout << endl << "NUMBER OF SYMETRIC RELATIONS IS : " << obj.Number_Of_Symetric() << endl; 
//	} 
//	else 
//	{
//		cout << "\n NUMBER IS NOT SYMETRIC \n";  
//	} 
//	if (obj.isAntiSymetric())
//	{
//		cout << "IT IS ANTI SYMETRIC\nNUMBER OF ANTI SYMETRIC RELATIONS ARE : ";
//		cout << obj.number_of_AntiSymetric()<<endl;
//	}
//	else
//	{
//		cout << "\nIT IS NOT ANTI SYMETRIC \n";
//	} 
//	cout << "NUMBER OF SYMETRIC AND REFLEXIVE RELATIONS IS : " << obj.number_of_reflexive_symetric() << endl; 
//	cout << "NUMBER OF SYMETRIC AND ANTI SYMETRIC RELATIONS : " << obj.number_of_Symetric_AntiSymetric()<<endl; 
// }  
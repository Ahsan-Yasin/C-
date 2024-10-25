//#include <iostream>
//using namespace std;
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
//class Graph
//{
//private:
//
//	int** matrix; //Dynamic array  
//	int** result;
//	int n;//size of ARRAY   
//	int Path_Lenght;//power of square 
//	int starting_vertex;
//	int ending_vertex;
//	//variables used for loops :
//	int i, j, k;
//public:
//	Graph()
//	{
//		matrix = nullptr;
//		result = nullptr;
//		n = 0;
//		i = 0;
//		j = 0;
//		k = 0;
//		Path_Lenght = 0;
//		starting_vertex = 0;
//		ending_vertex = 0;
//	}
//	void set_size()
//	{
//		cout << "ENTER SIZE : ";
//		valid_Input(n, 0);
//	}
//	void make_Matrix()  //this function will allocate dynamic memory making array of size nxn 
//	{
//		set_size();
//		//making 2D dynamic array 
//		matrix = new int* [n];
//		result = new int* [n];//foe getting the square of matrix  
//		for (i = 0; i < n; i++)
//		{
//			matrix[i] = new int[n]();
//
//			result[i] = new int[n]();
//		}
//
//	}
//	void set_power()
//	{
//		cout << "ENTER DESIRED PATH LENGHT : ";
//		valid_Input(Path_Lenght, 0);
//	}
//	void set_start()
//	{
//		cout << "ENTER STARTING PATH : ";
//		valid_Input(starting_vertex, 0, n - 1);
//	}
//	void set_end()
//	{
//		cout << "ENTER ENDING PATH : ";
//		valid_Input(ending_vertex, 0, n - 1);
//	}
//	void Input_Matrix()
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				cout << "ENTER VALUE FOR ROW " << i << " : ";
//				valid_Input((matrix[i][j]), 0, 1);
//			}
//		}
//	}
//	void Multiply_Matrix(int** matrix1, int** matrix2, int** result)
//	{
//		
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//
//				for (k = 0; k < n; k++)
//				{
//					result[i][j] += matrix1[i][k] * matrix2[k][j];//multiplication 
//				}
//			}
//		}
//	}
//	// here i will use the exponention by squaring alogrithm
//	void exponentation()
//	{
//		int count = 0;
//		Multiply_Matrix(matrix, matrix,result);
//		count += 2; 
//		for (i = count; i < Path_Lenght; i++)
//		{
//			Multiply_Matrix(result, matrix, result); 
//		}
//     
//    }
//	  
//	void start()
//	{
//		make_Matrix();
//		Input_Matrix();
//		set_power();
//		set_start();
//		set_end();
//		exponentation();
//		print();
//	}
//	void print()
//	{
//		cout << "Number of Path (Directed,lenght " << Path_Lenght << " ) from " << starting_vertex << " to " << ending_vertex << " : " << result[starting_vertex][ending_vertex] << endl;
//	}
//	~Graph()
//	{
//		for (i = 0; i < n; i++)
//		{
//
//			delete[] matrix[i];
//			delete[] result[i];
//		}
//		delete[] result;
//		delete[] matrix;
//		result = nullptr;
//		matrix = nullptr;
//	}
//	void go(int** result)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				cout << result[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	
//};
//int main()
//{
//	Graph obj;
//	obj.start();
//	
//}
#include <iostream>
#include <iomanip>
using namespace std;
int number_input();
double** create_matrix(int, int);
void output_matrix(double**, int, int);
int min_column(double**, int, int);
int max_column(double**, int, int);
void switch_columns(double**, double**, int, int, int);
void delete_matrix(double**, int);

int main()
{
	srand(time(NULL));
	cout << "Rows: \n";
	int rows = number_input();
	cout << "Columns: \n";
	int columns = number_input();

	double** matrix1 = create_matrix(rows, columns);
	double** matrix2 = create_matrix(rows, columns);

	cout << "Matrix C(" << rows << " x " << columns << "): \n";
	output_matrix(matrix1, rows, columns);
	cout << "The column with minimal element for C is " << min_column(matrix1, rows, columns) << endl;
	cout << "The column with maximal element for C is " << max_column(matrix1, rows, columns) << endl;
	
	cout << "\nMatrix B(" << rows << " x " << columns << "): \n";
	output_matrix(matrix2, rows, columns);
	cout << "The column with minimal element for B is " << min_column(matrix2, rows, columns) << endl;
	cout << "The column with maximal element for B is " << max_column(matrix2, rows, columns) << endl;
	
	switch_columns(matrix1, matrix2, rows, min_column(matrix1, rows, columns), min_column(matrix2, rows, columns));
	switch_columns(matrix1, matrix2, rows, max_column(matrix1, rows, columns), max_column(matrix2, rows, columns));

	cout << "\nMatrix Y(" << rows << " x " << columns << "): \n";
	output_matrix(matrix1, rows, columns);
	cout << "Matrix Z(" << rows << " x " << columns << "): \n";
	output_matrix(matrix2, rows, columns);

	delete_matrix(matrix1, rows);
	delete_matrix(matrix2, rows);
}

int number_input() 
{
    int n;
	cout << "Enter the number: "; cin >> n; cout << endl;
	while (n <= 0) 
    {
		cout << "Please, enter the positive number: "; cin >> n; cout << endl;
	}
	return n;
}


double** create_matrix(int rows, int columns) 
{
    double upper, lower;
    upper = 15;
    lower = -15;
	double** matrix = new double* [rows];
    for (int i = 0; i < rows; i++)
    {
		matrix[i] = new double[columns];
	}
	for (int i = 0; i < rows; i++)
    {
		for (int j = 0; j < columns; j++)
        {
			matrix[i][j] = (double)(rand()) / RAND_MAX * (upper - lower) + lower;
		}
    }
	return matrix;
}

void output_matrix(double** matrix, int rows, int columns)
{
	for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < columns; j++)
		{
            cout << '[' << setw(5) << matrix[i][j] << ']';
		}
		cout << "\n";
    }
    cout << endl;
}

int min_column(double** matrix, int rows, int columns)
{
	double min = matrix[0][0];
	int min_col = 0;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			if(matrix[i][j] < min)
			{
				min = matrix[i][j];
				min_col = j;
			}
		}
	}
	return min_col;
}

int max_column(double** matrix, int rows, int columns)
{
	double max = matrix[0][0];
	int max_col = 0;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			if(matrix[i][j] > max)
			{
				max = matrix[i][j];
				max_col = j;
			}
		}
	}
	return max_col;
}

void switch_columns(double** matrix1, double** matrix2, int rows, int col1, int col2)
{
	double tmp;
	for (int i = 0; i < rows; i++) 
	{
		tmp = matrix1[i][col1];
		matrix1[i][col1] = matrix2[i][col2];
		matrix2[i][col2] = tmp;
	}
}

void delete_matrix(double** matrix, int rows) 
{
	for (int i = 0; i < rows; i++) 
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}
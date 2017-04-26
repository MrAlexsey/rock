// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream> 
#include <ctime> 
using namespace std;  

int main()
{
int i, j;
const int N = 10;
const int M = 10;
int A[N][M], B[N][M], C[N][M], D[N][M], F[N][M];



for (i = 0; i < N; i++)
	for (j = 0; j < M; j++)

	{
		A[i][j] = rand() % 8;
	}



for (i = 0; i < N; i++)
	for (j = 0; j < M; j++)

	{
		B[i][j] = rand() % 2;
	}



cout << "matrix A:" << endl;

for (i = 0; i < N; i++)
{
	for (j = 0; j < M; j++)
	{
		cout << A[i][j] << " ";

	}
	cout << endl;
}
cout << endl;



cout << "matrix B:" << endl;

for (i = 0; i < N; i++)
{
	for (j = 0; j < M; j++)
	{
		cout << B[i][j] << " ";

	}
	cout << endl;
}
cout << endl;



for (int i = 0; i < N; i++)
	for (int j = 0; j < M; j++)
		C[i][j] = A[i][j] + B[i][j];


cout << "A+B:" << endl;
for (i = 0; i < N; i++)
{
	for (j = 0; j < M; j++)
	{
		cout << C[i][j] << " ";

	}
	cout << endl;
}
cout << endl;



for (int i = 0; i < N; i++)
	for (int j = 0; j < M; j++)
		D[i][j] = A[i][j] - B[i][j];



cout << "A-B:" << endl;
for (i = 0; i < N; i++)
{
	for (j = 0; j < M; j++)
	{
		cout << D[i][j] << " ";

	}
	cout << endl;
}
cout << endl;


for (int i = 0; i < N; i++)
	for (int j = 0; j < M; j++)
		F[i][j] = A[i][j] * B[i][j];


cout << "A*B:" << endl;
for (i = 0; i < N; i++)
{
	for (j = 0; j < M; j++)
	{
		cout << F[i][j] << " ";

	}
	cout << endl;
}
cout << endl;



system("pause");
}
//Viktoriya Vasilleva 11b class 6 number

#include <iostream>
using namespace std;

const int M = 50;

void print(int A[][M], int n, int m)
{
	for(int i = 0; i< n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;		
	}
	cout << endl;
}

void sub(int A[][M], int B[][M], int C[][M], int n, int m)
{
	int red = 0;
	int colomn = 0;
	while(red < m)
	{
		while(colomn < n)
		{
			C[red][colomn] = A[red][colomn] - B[red][colomn];
			colomn++;
		}

		colomn = 0;
		red ++;
	}



}



int main(){

	int A[3][M];
	
	int n1,m1;
	cin >> n1 >> m1;

	for(int i=0; i < n1; ++i)
	{
		for(int j = 0; j < m1; ++j)
		{
			cin >> A[i][j];
		}
	}

	print(A, n1, m1);	
	
	
	int B[3][M];
	
	int n2,m2;
	cin >> n2 >> m2;

	for(int i=0; i < n2; ++i)
	{
		for(int j = 0; j < m2; ++j)
		{
			cin >> B[i][j];
		}
	}

	print(B, n2, m2);

	int C[3][M];

	//sum(A, B, C, n1, m1);
	sub(A, B, C, n1, n2);
	print(C, n1, m1);

	return 0;
}

// The trivial algorithm for inner product of the matrix
#include <iostream>
#include <sys/time.h>
using std::cin;
using std::cout;
using std::endl;

void inner_product(int n, int *a, int **b, int *s);
void show_vector(int n, int *s);

int main()
{
	int max_inter;
	cout << "Input the number of interations for the question scale : ";
	cin >> max_inter;
	int n = 0;
	for (int inter = 0; inter < max_inter; inter++)
	{
		n += 10;
		int *a = new int[n];
		int **b = new int *[n];
		int *s = new int[n];
		for (int i = 0; i < n; i++)
		{
			b[i] = new int[n];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				b[i][j] = i + j;
			}
			a[i] = i * i;
			s[i] = 0;
		}
		timeval time_start;
		timeval time_end;
		int get_time_success;
		get_time_success = gettimeofday(&time_start, nullptr);
		inner_product(n, a, b, s);
		get_time_success = gettimeofday(&time_end, nullptr);
		// cout << "The result vector is : ";
		// show_vector(n, s);
		long diff_sec = time_end.tv_sec - time_start.tv_sec;
		long diff_usec = time_end.tv_usec - time_start.tv_usec;
		long total_usec = diff_sec * 1000000 + diff_usec;
		cout << total_usec << ", ";
	}
	cout << endl;
	return 0;
}

void inner_product(int n, int *a, int **b, int *s)
{
	for (int i = 0; i < n; i++)
	{
		s[i] = 0;
		for (int j = 0; j < n; j++)
		{
			s[i] += a[i] * b[i][j];
		}
	}
}

void show_vector(int n, int *s)
{
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << " ";
	}
	cout << "\n";
}

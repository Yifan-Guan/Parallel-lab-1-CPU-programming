// N-number summing algorithm optimized by recursive algorithm.
#include <iostream>
#include <sys/time.h>
using std::cout;
using std::cin;
using std::endl;

int sum(int n, int* a);

int main()
{
    int max_inter;
    cout << "Input the number of interations for the problem scale : ";
    cin >> max_inter;
    int m;
    cout << "Input the repeat times m : ";
    cin >> m;
    int n = 1;
    for (int inter = 0; inter < max_inter; inter++)
    {
        n *= 2;
        int *a = new int[n];
        a[0] = 1;
        a[1] = 1;
        for (int i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        timeval time_start;
        timeval time_end;
        int get_time_success;
        int result = 0;
        get_time_success = gettimeofday(&time_start, nullptr);
        for (int i = 0; i < m; i++)
        {
            result = sum(n, a);
        }
        get_time_success = gettimeofday(&time_end, nullptr);
        // cout << "The result is : ";
        // cout << result << endl;
        long diff_sec = time_end.tv_sec - time_start.tv_sec;
        long diff_usec = time_end.tv_usec - time_start.tv_usec;
        long total_usec = diff_sec * 1000000 + diff_usec;
        cout << total_usec << ", ";
    }
    cout << endl;
    return 0;
}

int sum(int n, int* a)
{
    if (n == 1) {
        return a[0];
    }
    else {
        for (int i = 0; i < n / 2; i++) {
            a[i] += a[n - 1 - i];
        }
        sum(n / 2, a);
    }
}
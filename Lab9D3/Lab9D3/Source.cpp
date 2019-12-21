#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main() 
{
	int N;
	cout << "N=";
	cin >> N;
	int *A = new int[N];
	for (int i = 0; i<N; i++)
		cin >> A[i];
    int count=0;
    for (int i=0; i<N-1; i++)
        if (A[i]==A[i+1])
			count++;
   cout << "Number: " << count;

	return 0;
}
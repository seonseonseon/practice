#include <stdio.h>

long long rfibo(int n);
long long sfibo(int n);

int main()
{
	for (int i = 0; i <= 45; i++)
	{
		long long answer = sfibo(i);

		if ((i % 2) && (i >= 3))
		{
			printf("rfibo(%d) = %d\n", i, rfibo(i));
			printf("sfibo(%d) = %d\n", i, answer);
		}
	}
}

long long rfibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return rfibo(n - 1) + rfibo(n - 2);
}

long long sfibo(int n)
{
	static long long a = 0, b = 1;

	if (n == 0)
		return a;
	else
	{
		b = a + b;
		a = b - a;

		return a;
	}
}
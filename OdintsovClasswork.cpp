
#include <iostream>
#include <time.h>

void out(int arr[][5], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void rect(int n, int k)
{
	for (int i = 0; i < k; i++)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
	for (int j = 0; j < n - 2; j++)
	{
		for (int i = 0; i < k; i++)
		{
			if (i == 0 || i == k - 1)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < k; i++)
	{
		std::cout << "*";
	}
}

int factor(int num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}

bool prime(int num)
{
	for (int i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
}

int cube(int num)
{
	int res = pow(num, 3);
	return res;
}

void larger(int num1, int num2)
{
	if (num1 > num2)
		std::cout << num1 << " is larger.";
	else if (num2 > num1)
		std::cout << num2 << " is larger.";
	else
		std::cout << "The numbers are equal.";
}

bool posNeg(int num)
{
	if (num >= 0)
		return true;
	else
		return false;
}

int main()
{
	int num = 0;
	int res = factor(num);
	std::cout << res;
}
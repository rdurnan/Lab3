// Lab3.cpp
// Ryan Durnan
// COSC-2030-01
// Lab3
// 01 October 2018

#include "stdafx.h"
#include <iomanip> 
#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

short shortSumIntegersToN(short n);
long longSumIntegersToN(long n);
float longProIntegersToN(long n);
double longProIntegersToN2(long n);
float sumReciprocalNs(float n);
double sumReciprocalNs2(double n);

int main()
{
	cout << "=====  1  =====" << endl << endl;
	shortSumIntegersToN(1);
	if (shortSumIntegersToN(1) == 1) 
	{
		cout << "shortSumIntegersToN(1) = " << shortSumIntegersToN(1) << endl;
		cout << "Result is correct." << endl;
	}
	shortSumIntegersToN(2);
	if (shortSumIntegersToN(2) == 3)
	{
		cout << "shortSumIntegersToN(2) = " << shortSumIntegersToN(2) << endl;
		cout << "Result is correct." << endl;
	}
	shortSumIntegersToN(5);
	if (shortSumIntegersToN(5) == 15)
	{
		cout << "shortSumIntegersToN(5) = " << shortSumIntegersToN(5) << endl;
		cout << "Result is correct." << endl;
	}
	shortSumIntegersToN(10);
	if (shortSumIntegersToN(10) == 55)
	{
		cout << "shortSumIntegersToN(10) = " << shortSumIntegersToN(10) << endl;
		cout << "Result is correct." << endl;
	}

	short n = 1;
	cout << "\n=====  2  =====" << endl << endl;
	do
	{
		n += 1;
		if (shortSumIntegersToN(n) < 0)
		{	
			cout << "n = " << n << endl;
			cout << "The sum up to " << n << " causes overflow." << endl;
			break;
		}
	} 
	while (shortSumIntegersToN(n) >= 0);

	long n2 = 65000;
	cout << "\n=====  3  =====" << endl << endl;

	longSumIntegersToN(1);
	if (longSumIntegersToN(1) == 1)
	{
		cout << "longSumIntegersToN(1) = " << longSumIntegersToN(1) << endl;
		cout << "Result is correct." << endl;
	}
	longSumIntegersToN(2);
	if (longSumIntegersToN(2) == 3)
	{
		cout << "longSumIntegersToN(2) = " << longSumIntegersToN(2) << endl;
		cout << "Result is correct." << endl;
	}
	longSumIntegersToN(5);
	if (longSumIntegersToN(5) == 15)
	{
		cout << "longSumIntegersToN(5) = " << longSumIntegersToN(5) << endl;
		cout << "Result is correct." << endl;
	}
	longSumIntegersToN(10);
	if (longSumIntegersToN(10) == 55)
	{
		cout << "longSumIntegersToN(10) = " << longSumIntegersToN(10) << endl;
		cout << "Result is correct." << endl << endl;
	}

	do
	{
		n2 += 1;
		if (longSumIntegersToN(n2) < 0)
		{
			cout << "n = " << n2 << endl;
			cout << "The sum up to " << n2 << " causes overflow." << endl;
			break;
		}
	}
	while (longSumIntegersToN(n2) >= 0);

	long n3 = 1;
	cout << "\n=====  4  =====" << endl << endl;
	if (longProIntegersToN(1) == 1)
	{
		cout << "longProIntegersToN(1) = " << longProIntegersToN(1) << endl;
		cout << "Result is correct." << endl;
	}
	if (longProIntegersToN(3) == 6)
	{
		cout << "longProIntegersToN(3) = " << longProIntegersToN(3) << endl;
		cout << "Result is correct." << endl;
	}
	if (longProIntegersToN(5) == 120)
	{
		cout << "longProIntegersToN(5) = " << longProIntegersToN(5) << endl;
		cout << "Result is correct." << endl;
	}
	if (longProIntegersToN(10) == 3628800)
	{
		cout << "longProIntegersToN(10) = " << longProIntegersToN(10) << endl;
		cout << "Result is correct." << endl << endl;
	}

	do
	{
		n3 += 1;
		if (((double)longProIntegersToN(n3)) != ((double)longProIntegersToN2(n3)))
		{
			cout << "n = " << n3 << endl;
			cout << "The product up to " << n3 << " causes overflow." << endl;
			break;
		}
	}
	while (longProIntegersToN(n3) == longProIntegersToN2(n3));

	long n4 = 1;
	cout << "\n=====  5  =====" << endl << endl;

	if (longProIntegersToN2(1) == 1)
	{
		cout << "longProIntegersToN2(1) = " << longProIntegersToN2(1) << endl;
		cout << "Result is correct." << endl;
	}
	if (longProIntegersToN2(3) == 6)
	{
		cout << "longProIntegersToN2(3) = " << longProIntegersToN2(3) << endl;
		cout << "Result is correct." << endl;
	}
	if (longProIntegersToN2(5) == 120)
	{
		cout << "longProIntegersToN2(5) = " << longProIntegersToN2(5) << endl;
		cout << "Result is correct." << endl;
	}
	if (longProIntegersToN2(10) == 3628800)
	{
		cout << "longProIntegersToN2(10) = " << longProIntegersToN2(10) << endl;
		cout << "Result is correct." << endl << endl;
	}

	do
	{
		n4 += 1;
		if (isinf(longProIntegersToN2(n4)))
		{
			cout << "n = " << n4 << endl;
			cout << "Product up to n = " << longProIntegersToN2(n4) << endl;
			cout << "The product up to " << n4 << " causes overflow." << endl;
		}
	}
	while (!(isinf(longProIntegersToN2(n4))));

	cout << "\n=====  6  =====" << endl << endl;
	cout << "Type: float" << endl;
	cout << "f(5) = " << sumReciprocalNs(5) << endl;
	cout << "f(6) = " << sumReciprocalNs(6) << endl;
	cout << "f(7) = " << sumReciprocalNs(7) << endl;
	cout << "f(10) = " << sumReciprocalNs(10) << endl;
	cout << "f(15) = " << sumReciprocalNs(15) << endl;
	cout << "f(100) = " << sumReciprocalNs(100) << endl << endl;
	cout << "Type: double" << endl;
	cout << "f(5) = " << sumReciprocalNs2(5) << endl;
	cout << "f(6) = " << sumReciprocalNs2(6) << endl;
	cout << "f(7) = " << sumReciprocalNs2(7) << endl;
	cout << "f(10) = " << sumReciprocalNs2(10) << endl;
	cout << "f(15) = " << sumReciprocalNs2(15) << endl;
	cout << "f(100) = " << sumReciprocalNs2(100) << endl << endl;

	cout << "\n=====  7  =====" << endl << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	cout << "\n=====  8  =====" << endl << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

    return 0;
}

short shortSumIntegersToN(short n)
{
	short sum = 0;
	for (short i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

long longSumIntegersToN(long n)
{
	long sum = 0;
	for (long i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

float longProIntegersToN(long n)
{
	float product = 1;
	for (long i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

double longProIntegersToN2(long n)
{
	double product = 1;
	for (long i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

float sumReciprocalNs(float n) 
{
	float sum = 0;
	for (float i = 1; i <= n; i++)
	{
		float recip = (1 / n);
		sum += recip;
	}
	sum -= 1;
	return sum;
}

double sumReciprocalNs2(double n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{
		double recip = (1 / n);
		sum += recip;
	}
	sum -= 1;
	return sum;
}
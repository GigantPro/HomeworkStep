#include<iostream>

void ReversePrint(int* mass, int lenght);
int Sum(int* mass, int lenght);
double Avg(int* mass, int lenght);
int MinValueIn(int* mass, int lenght);
int MaxValueIn(int* mass, int lenght);
void Sort(int* mass, int lenght);
void ShiftLeft(int* mass, int lenght);
void ShiftRight(int* mass, int lenght);


int main()
{

}

void ReversePrint(int* mass, int lenght)
{
	for (int i = lenght; i > 0; i--)
	{
		std::cout << mass[i] << '\t';
	}
}
int Sum(int* mass, int lenght)
{
	int summ = 0;
	for (int i = 0; i < lenght; i++)
	{
		summ += mass[i];
	}
	return summ;
}
double Avg(int* mass, int lenght)
{
	int summ = 0;
	for (int i = 0; i < lenght; i++)
	{
		summ += mass[i];
	}
	double srarr = summ / lenght;
	return srarr;
}
int MinValueIn(int* mass, int lenght)
{
	int min = mass[0];
	for (int i = 0; i < lenght; i++)
	{
		if (mass[i] < min)
		{
			min = mass[i];
		}
	}
	return min;
}
int MaxValueIn(int* mass, int lenght)
{
	int max = mass[0];
	for (int i = 0; i < lenght; i++)
	{
		if (mass[i] > max)
		{
			max = mass[i];
		}
	}
	return max;
}
void Sort(int* mass, int lenght)
{

	for (int i = 0; i < lenght - 1; i++)
	{
		for (int j = 0; j < lenght; j++)
		{
			if (mass[i] > mass[i + 1])
			{
				int temp = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = temp;
			}
		}
	}
}
void ShiftLeft(int* mass, int lenght)
{

}
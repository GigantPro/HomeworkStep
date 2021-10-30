#include<iostream>

void ReversePrint(int* mass, int lenght);
int Sum(int* mass, int lenght);
double Avg(int* mass, int lenght);
int MinValueIn(int* mass, int lenght);
int MaxValueIn(int* mass, int lenght);
int* Sort(int* mass, int lenght);



int main()
{
	setlocale(LC_ALL, "Rus");
	int len;
	std::cout << "¬ведите размер массива: ";
	std::cin >> len;
	std::cout << "¬ведите элементы массива: " << std::endl;
	int* mass = new int[len];
	for (int i = 0; i < len; i++)
	{
		std::cin >> mass[i];
	}
	ReversePrint(mass, len);
	std::cout << std::endl;
	std::cout << Sum(mass, len) << std::endl;
	std::cout << Avg(mass, len) << std::endl;
	std::cout << MinValueIn(mass, len) << std::endl;
	std::cout << MaxValueIn(mass, len) << std::endl;
	std::cout << Sort(mass, len) << std::endl;
	//ShiftLeft(mass, len);
	//ShiftRight(mass, len);

}
void ReversePrint(int* mass, int lenght)
{
	std::cout << "ReversePrint:" << std::endl;
	for (int i = lenght - 1; i >= 0; i--)
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
int* Sort(int* mass, int lenght)
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
	return mass;
}
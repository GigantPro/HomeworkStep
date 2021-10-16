//#include<iostream>
//
//void ReversePrint(int* mass, int lenght);
//int Sum(int* mass, int lenght);
//double Avg(int* mass, int lenght);
//int MinValueIn(int* mass, int lenght);
//int MaxValueIn(int* mass, int lenght);
//void Sort(int* mass, int lenght);
//void ShiftLeft(int* mass, int lenght);
//void ShiftRight(int* mass, int lenght);
//
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int len;
//	std::cout << "¬ведите размер массива: ";
//	std::cin >> len;
//	std::cout << "¬ведите элементы массива: " << std::endl;
//	int* mass = new int[len];
//	for (int i = 0; i < len; i++)
//	{
//		std::cin >> mass[i];
//	}
//	ReversePrint(mass, len);
//	std::cout << std::endl;
//	Sum(mass, len);
//	Avg(mass, len);
//	MinValueIn(mass, len);
//	MaxValueIn(mass, len);
//	Sort(mass, len);
//	//ShiftLeft(mass, len);
//	//ShiftRight(mass, len);
//
//}
//void ReversePrint(int* mass, int lenght)
//{
//	std::cout << "ReversePrint:" << std::endl;
//	for (int i = lenght - 1; i >= 0; i--)
//	{
//		std::cout << mass[i] << '\t';
//	}
//}
//int Sum(int* mass, int lenght)
//{
//	
//	int summ = 0;
//	for (int i = 0; i < lenght; i++)
//	{
//		summ += mass[i];
//	}
//	std::cout << "Summ: " << summ << std::endl;
//	return summ;
//}
//double Avg(int* mass, int lenght)
//{
//	
//	int summ = 0;
//	for (int i = 0; i < lenght; i++)
//	{
//		summ += mass[i];
//	}
//	double srarr = summ / lenght;
//	std::cout << "Avg: " << srarr << std::endl;
//	return srarr;
//}
//int MinValueIn(int* mass, int lenght)
//{
//	
//	int min = mass[0];
//	for (int i = 0; i < lenght; i++)
//	{
//		if (mass[i] < min)
//		{
//			min = mass[i];
//		}
//	}
//	std::cout << "MinValueIn: " << min << std::endl;
//	return min;
//}
//int MaxValueIn(int* mass, int lenght)
//{
//	
//	int max = mass[0];
//	for (int i = 0; i < lenght; i++)
//	{
//		if (mass[i] > max)
//		{
//			max = mass[i];
//		}
//	}
//	std::cout << "MaxValueIn: " << max << std::endl;
//	return max;
//}
//void Sort(int* mass, int lenght, int a)
//{
//	std::cout << "Sort:" << std::endl;
//	for (int i = 0; i < lenght - 1; i++)
//	{
//		for (int j = 0; j < lenght; j++)
//		{
//			if (mass[i] > mass[i + 1])
//			{
//				int temp = mass[j];
//				mass[j] = mass[j + 1];
//				mass[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < lenght; i++)
//	{
//		std::cout << mass[i] << '\t';
//	}
//	std::cout << std::endl;
//}
//void ShiftLeft(int* mass, int lenght, int a)
//{
//	int* tempmass = new int[lenght];
//	while (a > lenght)
//	{
//		a -= lenght;
//	}
//	if (a != 0)
//	{
//
//	}
//	else
//	{
//		for (int i = 0; i < lenght; i++)
//		{
//			std::cout << mass[i] << '\t';
//		}
//		std::cout << std::endl;
//	}
//}
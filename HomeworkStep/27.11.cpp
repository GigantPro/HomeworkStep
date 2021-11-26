#include<iostream>

int give_counter(int* arr, int& size, bool flag = true);
template <typename T, typename X>
T push_back(T arr, int& size, X number);
template <typename T, typename X>
T push_front(T arr, int& size, X number);
template <typename T, typename X>
T insert(T arr, int ind, X number);
template <typename T, typename X>
T pop_back(T arr, int& size, X temp);
template <typename T, typename X>
T pop_front(T arr, int& size, X temp);
template <typename T, typename X>
T erase(T arr, int& size, int ind);

int main()
{
	srand(1);
	int size = 10;
	int* mass_nach = new int[size];
	for (int i = 0; i < size; i++)
	{
		mass_nach[i] = rand();
	}
	int* even = new int[give_counter(mass_nach, size, true)];
	int* odd = new int[give_counter(mass_nach, size, false)];
	mass_nach = push_back(mass_nach, size, 123);
	for (int i = 0; i < size; i++)
	{
		std::cout << mass_nach[i] << std::endl;
	}
	mass_nach = insert(mass_nach, 5, 0);
	std::cout << mass_nach[5] << std::endl;
	std::cout << mass_nach[size - 1] << std::endl;
	mass_nach = pop_back(mass_nach, size, mass_nach[0]);
	std::cout << mass_nach[size - 1] << std::endl;
}

int give_counter(int* arr, int& size, bool flag)
{
	if (flag == true)
	{
		int counter = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 == 0)
			{
				counter++;
			}
		}
		return counter;
	}
	else
	{
		int counter = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 != 0)
			{
				counter++;
			}
		}
		return counter;
	}
}

template <typename T, typename X>
T push_back(T arr, int& size, X number)
{
	size++;
	T arr_new = new X[size];
	arr_new[size - 1] = number;
	for (int i = 0; i < size - 1; i++)
	{
		arr_new[i] = arr[i];
	}
	return arr_new;
}


template <typename T, typename X>
T push_front(T arr, int& size, X number)
{
	size++;
	T arr_new = new X[size + 1];
	arr_new[0] = number;
	for (int i = 1; i < size; i++)
	{
		arr_new[i] = arr[i];
	}
	return arr_new;
}

template <typename T, typename X>
T insert(T arr, int ind, X number) { T new_arr = arr; new_arr[ind] = number; return new_arr; }

template <typename T, typename X>
T pop_back(T arr, int& size, X temp)
{
	size--;
	T new_arr = new X[size];
	for (int i = 0; i < size; i++)
	{
		new_arr[i] = arr[i];
	}
	return new_arr;
}

template <typename T, typename X>
T pop_front(T arr, int& size, X temp)
{
	size--;
	T new_arr = new X[size];
	for (int i = 1; i < size; i++)
	{
		new_arr[i - 1] = arr[i];
	}
	return new_arr;
}

template <typename T, typename X>
T erase(T arr, int& size, int ind)
{
	size--;
	T new_arr = new X[size];
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (i == ind) { flag = true; }
		if (flag == false) { new_arr[i] = arr[i]; }
		else { new_arr[i - 1] = arr[i]; }
	}
	return new_arr;
}


#include <iostream>

template <typename T>

double average(T array[], int size ) {
	if (size == 0) return 0.0;

	T sum = T(0);
	for (int i = 0; i < size; i++) 
	{
		sum += array[i];
	}
	
	return static_cast<double> (sum) / size;


}


int main() {
	double numbers[4] = { 1 ,2,4, 7 };

	std::cout << average(numbers, 4);



}
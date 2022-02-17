#include <iostream>

using namespace std;

/**
 * print_array - print an array of integers
 * @array: array to print
 * @n: size of array
 */
void print_array(int *array, int n)
{
	for (int i = 0; i < n; ++i)
		cout << array[i] << " ";

	cout << "\n";
}

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int n = 0;
	int queries = 0;

	cin >> queries;

	while (queries--)
	{
		cin >> n;

		int array[n] = {};
		int frecuency[3] = {0, 0, 0};

		for (int i = 0; i < n; ++i)
		{
			cin >> array[i];
		}

		// print_array(array, n);

		for (int i = 0; i < n; i++)
		{
			if (array[i] > 0)
			{
				frecuency[0] += 1;
			}
			else if (array[i] < 0)
				frecuency[1] += 1;
			else
				frecuency[2] += 1;
		}

		// print_array(frecuency, 3);

		printf("%.6lf\n", (float) frecuency[0] / n);
		printf("%.6lf\n", (float) frecuency[1] / n);
		printf("%.6lf\n", (float) frecuency[2] / n);

		printf("---------------------------\n");
	}

	return (0);
}

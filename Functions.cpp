#include "Functions.h"

int sum(int a[], const int b) // реализация функции
{
	int Sum = 0;

	cout << "Сумма элементов массива" << endl << endl;

	cout << "[";

	for (int i = 0; i < b; i++)
	{
		Sum = Sum + a[i];
		cout << Sum << " ";
	}

	cout << "]";

	return a, b;

}

double sum(double a[], const int b) // реализация функции
{
	double Sum = 0;

	cout << "Сумма элементов массива" << endl << endl;

	cout << "[";

	for (int i = 0; i < b; i++)
	{
		Sum = Sum + a[i];
		cout << Sum << " ";
	}

	cout << "]";

	return a, b;

}

float sum(float a[], const int b) // реализация функции
{
	float Sum = 0;

	cout << "Сумма элементов массива" << endl << endl;

	cout << "[";

	for (int i = 0; i < b; i++)
	{
		Sum = Sum + a[i];
		cout << Sum << " ";
	}

	cout << "]";

	return a, b;

}

char sum(char a[], const int b) // реализация функции
{
	char Sum = 0;

	cout << "Сумма элементов массива" << endl << endl;

	cout << "[";

	for (int i = 0; i < b; i++)
	{
		Sum = Sum + a[i];
		cout << Sum << " ";
	}

	cout << "]";

	return a, b;

}

int FillRand(int a[], const int b)
{

	for (int i = 0; i < b; i++)
	{
		a[i] = rand() % 10;
	}

	return a[b];
}

double FillRand(double a[], const int b)
{

	for (int i = 0; i < b; i++)
	{
		a[i] = (rand() % 1000) / 100.0 + 0.01;
	}

	return a[b];
}

float FillRand(float a[], const int b)
{

	for (int i = 0; i < b; i++)
	{
		a[i] = (rand() % 1000) / 100.0 + 0.01;
	}

	return a[b];
}

char FillRand(char a[], const int b)
{
	for (int i = 0; i < b; i++)
	{
		a[i] = rand() % 10;
	}

	return a[b];
}

int Sort(int a[], const int b)
{
	sort(a, a + b);

	cout << endl << "Массив" << endl << endl;

	cout << "[";
	for (int i = 0; i < b; ++i)
	{
		cout << a[i] << " ";
	}
	cout << "]";

	return a, b;
}

double Sort(double a[], const int b)
{
	sort(a, a + b);

	return a, b;
}

float Sort(float a[], const int b)
{
	sort(a, a + b);

	return a, b;
}

char Sort(char a[], const int b)
{
	sort(a, a + b);

	return a, b;
}

double print(double a[], const int b)
{
	cout << endl << "Массив double" << endl << endl;

	cout << "[";
	for (int i = 0; i < b; ++i)
	{
		cout << a[i] << " ";
	}
	cout << "]";

	return a, b;
}

float print(float a[], const int b)
{
	cout << endl << "Массив float" << endl << endl;

	cout << "[";
	for (int i = 0; i < b; ++i)
	{
		cout << a[i] << " ";
	}
	cout << "]";

	return a, b;
}

char print(char a[], const int b)
{
	cout << endl << "Массив char" << endl << endl;

	cout << "[";
	for (int i = 0; i < b; ++i)
	{
		cout << a[i] << " ";
	}
	cout << "]";

	return a, b;
}

int Avg(int a[], const int b)
{
	int arifm = 0;

	for (int i = 0; i < b; ++i)
	{
		arifm += a[i];
	}

	cout << "Среднее арифметическое чисел в массиве: " << arifm / b;

	return a, b;
}

double Avg(double a[], const int b)
{
	double arifm = 0;

	for (int i = 0; i < b; ++i)
	{
		arifm += a[i];
	}

	cout << "Среднее арифметическое чисел в массиве: " << arifm / b;

	return a, b;
}

float Avg(float a[], const int b)
{
	float arifm = 0;

	for (int i = 0; i < b; ++i)
	{
		arifm += a[i];
	}

	cout << "Среднее арифметическое чисел в массиве: " << arifm / b;

	return a, b;
}

char Avg(char a[], const int b)
{
	int arifm = 0;

	for (int i = 0; i < b; ++i)
	{
		arifm += a[i];
	}

	cout << "Среднее арифметическое символов в массиве: " << arifm / b;

	return a, b;
}

int minValueIn(int a[], const int b)
{
	int min = a[0];

	for (int i = 0; i < b; i++)
	{
		if (a[i] < min)min = a[i];
	}

	cout << "Минимальное значение: " << min;

	return min;
}

double minValueIn(double a[], const int b)
{
	double min = a[0];

	for (int i = 0; i < b; i++)
	{
		if (a[i] < min)min = a[i];
	}

	cout << "Минимальное значение: " << min;

	return min;
}

float minValueIn(float a[], const int b)
{
	float min = a[0];

	for (int i = 0; i < b; i++)
	{
		if (a[i] < min)min = a[i];
	}

	cout << "Минимальное значение: " << min;

	return min;
}

char minValueIn(char a[], const int b)
{
	int min = a[0];

	for (int i = 0; i < b; i++)
	{
		if (a[i] < min)min = a[i];
	}

	cout << "Минимальное значение: " << min;

	return min;
}

int maxValueIn(int a[], const int b)
{
	int max = a[0];

	for (int i = 0; i < b; i++)
	{
		if (a[i] > max)max = a[i];
	}

	cout << "Максимальное значение: " << max;

	return max;
}

double maxValueIn(double a[], const int b)
{
	double max = a[0];

	for (int i = 0; i < b; i++)
	{
		if (a[i] > max)max = a[i];
	}

	cout << "Максимальное значение: " << max;

	return max;
}

float maxValueIn(float a[], const int b)
{
	float max = a[0];

	for (int i = 0; i < b; i++)
	{
		if (a[i] > max)max = a[i];
	}

	cout << "Максимальное значение: " << max;

	return max;
}

char maxValueIn(char a[], const int b)
{
	int max = a[0];

	for (int i = 0; i < b; i++)
	{
		if (a[i] > max)max = a[i];
	}

	cout << "Максимальное значение: " << max;

	return max;
}

int Shift(int a[], const int b)
{
	cout << "Сдвиг вправо на 2" << endl << endl;

	valarray<int> arrShiftRight(a, 7);
	arrShiftRight = arrShiftRight.cshift(-2);

	cout << "[";
	for (int i : arrShiftRight)cout << i << " ";
	cout << "]";

	return a, b;
}

double Shift(double a[], const int b)
{
	cout << "Сдвиг вправо на 2" << endl << endl;

	valarray<double> arrShiftRight(a, 7);
	arrShiftRight = arrShiftRight.cshift(-2);

	cout << "[";
	for (int i : arrShiftRight)cout << i << " ";
	cout << "]";

	return a, b;
}

float Shift(float a[], const int b)
{
	cout << "Сдвиг вправо на 2" << endl << endl;

	valarray<float> arrShiftRight(a, 7);
	arrShiftRight = arrShiftRight.cshift(-2);

	cout << "[";
	for (int i : arrShiftRight)cout << i << " ";
	cout << "]";

	return a, b;
}

char Shift(char a[], const int b)
{
	cout << "Сдвиг вправо на 2" << endl << endl;

	valarray<char> arrShiftRight(a, 7);
	arrShiftRight = arrShiftRight.cshift(-2);

	cout << "[";
	for (int i : arrShiftRight)cout << i << " ";
	cout << "]";

	return a, b;
}

///////////////////// Двумерный /////////////////////

int sum(int ar[FFirst][Second], const int n, const int m)
{
	int Sum = 0;

	cout << "Сумма элементов массива" << endl << endl;

	//cout << "[";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Sum = Sum + ar[i][j];
			cout << Sum << " ";
		}
		cout << endl;
	}

	//cout << "]";

	return ar, n, m;
}

double sum(double ar[FFirstD][SecondD], const int n, const int m)
{
	double Sum = 0;

	cout << "Сумма элементов массива" << endl << endl;

	//cout << "[";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Sum = Sum + ar[i][j];
			cout << Sum << " | ";
		}
		cout << endl;
	}

	//cout << "]";

	return ar, n, m;
}

float sum(float ar[FFirstF][SecondF], const int n, const int m)
{
	float Sum = 0;

	cout << "Сумма элементов массива" << endl << endl;

	//cout << "[";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Sum = Sum + ar[i][j];
			cout << Sum << " | ";
		}
		cout << endl;
	}

	//cout << "]";

	return ar, n, m;
}

char sum(char ar[FFirstC][SecondC], const int n, const int m)
{
	char Sum = 0;

	cout << "Сумма элементов массива" << endl << endl;

	//cout << "[";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Sum = Sum + ar[i][j];
			cout << Sum << " | ";
		}
		cout << endl;
	}

	//cout << "]";

	return ar, n, m;
}

int FillRand(int ar[FFirst][Second], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ar[i][j] = rand() % 10;
		}
	}

	return ar, n, m;
}

double FillRand(double ar[FFirstD][SecondD], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ar[i][j] = (rand() % 1000) / 100.0 + 0.01;
		}
	}

	return ar, n, m;
}

float FillRand(float ar[FFirstF][SecondF], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ar[i][j] = (rand() % 1000) / 100.0 + 0.01;
		}
	}

	return ar, n, m;
}

char FillRand(char ar[FFirstC][SecondC], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ar[i][j] = (rand() % 1000) / 100.0 + 0.01;
		}
	}

	return ar, n, m;
}

int Print(int ar[FFirst][Second], const int n, const int m)
{
	cout << endl << "Массив двумерный" << endl << endl;

	//cout << "[";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}
	//cout << "]";

	return ar, n, m;
}

double Print(double ar[FFirstD][SecondD], const int n, const int m)
{
	cout << endl << "Массив двумерный double" << endl << endl;

	//cout << "[";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << ar[i][j] << " | ";
		}
		cout << endl;
	}
	//cout << "]";

	return ar, n, m;
}

float Print(float ar[FFirstF][SecondF], const int n, const int m)
{
	cout << endl << "Массив двумерный float" << endl << endl;

	//cout << "[";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << ar[i][j] << " | ";
		}
		cout << endl;
	}
	//cout << "]";

	return ar, n, m;
}

char Print(char ar[FFirstC][SecondC], const int n, const int m)
{
	cout << endl << "Массив двумерный char" << endl << endl;

	//cout << "[";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << ar[i][j] << " | ";
		}
		cout << endl;
	}
	//cout << "]";

	return ar, n, m;
}

int Avg(int ar[FFirst][Second], const int n, const int m)
{
	int arifm = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arifm += ar[i][j];
		}
	}

	cout << "Среднее арифметическое чисел в массиве: " << arifm / n + m << " :O";

	return ar, n, m;
}

double Avg(double ar[FFirstD][SecondD], const int n, const int m)
{
	double arifm = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arifm += ar[i][j];
		}
	}

	cout << "Среднее арифметическое чисел в массиве: " << arifm / n + m << " :O";

	return ar, n, m;
}

float Avg(float ar[FFirstF][SecondF], const int n, const int m)
{
	float arifm = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arifm += ar[i][j];
		}
	}

	cout << "Среднее арифметическое чисел в массиве: " << arifm / n + m << " :O";

	return ar, n, m;
}

char Avg(char ar[FFirstC][SecondC], const int n, const int m)
{
	char arifm = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arifm += ar[i][j];
		}
	}

	cout << "Среднее арифметическое символов в массиве: " << arifm / n + m << " :O";

	return ar, n, m;
}

int minValueIn(int ar[FFirst][Second], const int n, const int m)
{
	int min = ar[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] < min)min = ar[i][j];
		}
	}

	cout << "Минимальное значение: " << min;

	return min;
}

double minValueIn(double ar[FFirstD][SecondD], const int n, const int m)
{
	double min = ar[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] < min)min = ar[i][j];
		}
	}

	cout << "Минимальное значение: " << min;

	return min;
}

float minValueIn(float ar[FFirstF][SecondF], const int n, const int m)
{
	float min = ar[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] < min)min = ar[i][j];
		}
	}

	cout << "Минимальное значение: " << min;

	return min;
}

char minValueIn(char ar[FFirstC][SecondC], const int n, const int m)
{
	char min = ar[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] < min)min = ar[i][j];
		}
	}

	cout << "Минимальное значение: " << min;

	return min;
}

int maxValueIn(int ar[FFirst][Second], const int n, const int m)
{
	int max = ar[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] > max)max = ar[i][j];
		}
	}

	cout << "Максимальное значение: " << max;

	return max;
}

double maxValueIn(double ar[FFirstD][SecondD], const int n, const int m)
{
	double max = ar[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] > max)max = ar[i][j];
		}
	}

	cout << "Максимальное значение: " << max;

	return max;
}

float maxValueIn(float ar[FFirstF][SecondF], const int n, const int m)
{
	float max = ar[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] > max)max = ar[i][j];
		}
	}

	cout << "Максимальное значение: " << max;

	return max;
}

char maxValueIn(char ar[FFirstC][SecondC], const int n, const int m)
{
	char max = ar[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] > max)max = ar[i][j];
		}
	}

	cout << "Максимальное значение: " << max;

	return max;
}
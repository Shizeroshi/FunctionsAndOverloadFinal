#include "Functions.h"


//int Shift(int ar[FFirst][Second], const int n, const int m);

//Сделать мэйн меньше
void lesss();


int main()
{
	setlocale(LC_ALL, "");

	lesss();

	//Shift(arrray, FFirst, Second); Шифта не будет так как ерунда получается

}



/*int Shift(int ar[FFirst][Second], const int n, const int m)
{
	cout << "Сдвиг вправо на 2" << endl << endl;

	valarray<int> arrShiftRight(ar[FFirst][Second], 10);
	arrShiftRight = arrShiftRight.cshift(-2);

	cout << "[";
	for (int i : arrShiftRight)for (int j : arrShiftRight)cout << i << j << " ";
	cout << "]";

	return ar, n, m;
}*/

//В двумерном массиве сорта нет, так как выводит ошибку
/*int Sort(int ar[FFirst][Second], const int n, const int m)
{

	sort(ar, ar + n + m);

	cout << endl << "Массив двумерный" << endl << endl;

	//cout << "[";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << ar[i][j] << " ";
		}
	}
	//cout << "]";

	return ar, n, m;
}*/

/*int minValueIn(int a[], const int b)
{
	int arifm = 0;
	int arrMax = 0;

	for (int i = 0; i < b; ++i)
	{
		arifm += a[i];
		arrMax = a[i];
	}

	cout << "Минимальное значение: " << a[0];

	return a, b;
}*/

/*int maxValueIn(int a[], const int b)
{
	int arrMax = 0;

	for (int i = 0; i < b; ++i)
	{
		arrMax = a[i];
	}

	cout << "Максимальное значение: " << arrMax;

	return a, b;
}*/

void lesss()
{
	const int size = 7;
	int arr[size]; // инт

	const int sizer = 7;
	double brr[sizer]; // дабл

	const int sizeF = 7;
	float frr[sizeF]; // флоат

	const int sizeC = 7;
	char crr[sizeC]; // чар

	int arrray[FFirst][Second]; // двумерный инт

	double arrrayD[FFirstD][SecondD]; // двумерный дабл

	float arrrayF[FFirstF][SecondF]; // двумерный флоат

	char arrrayC[FFirstC][SecondC]; // двумерный чар

	srand(time(NULL));

	// инт
	FillRand(arr, size);

	Sort(arr, size);

	cout << endl << endl;

	Avg(arr, size);

	cout << endl << endl;

	minValueIn(arr, size);

	cout << endl << endl;

	maxValueIn(arr, size);

	cout << endl << endl;

	sum(arr, size);

	cout << endl << endl;

	Shift(arr, size);

	cout << endl << endl;

	cout << tireshki;

	cout << endl << endl;

	// дабл
	FillRand(brr, sizer);

	Sort(brr, sizer);

	print(brr, sizer);

	cout << endl << endl;

	Avg(brr, sizer);

	cout << endl << endl;

	minValueIn(brr, sizer);

	cout << endl << endl;

	maxValueIn(brr, sizer);

	cout << endl << endl;

	sum(brr, sizer);

	cout << endl << endl;

	Shift(brr, sizer);

	cout << endl << endl;

	cout << tireshki;

	cout << endl << endl;

	//флоат
	FillRand(frr, sizeF);

	Sort(frr, sizeF);

	print(frr, sizeF);

	cout << endl << endl;

	Avg(frr, sizeF);

	cout << endl << endl;

	minValueIn(frr, sizeF);

	cout << endl << endl;

	maxValueIn(frr, sizeF);

	cout << endl << endl;

	sum(frr, sizeF);

	cout << endl << endl;

	Shift(frr, sizeF);

	cout << endl << endl;

	cout << tireshki;

	cout << endl << endl;

	//чар
	FillRand(crr, sizeC);

	Sort(crr, sizeC);

	print(crr, sizeC);

	cout << endl << endl;

	Avg(crr, sizeC);

	cout << endl << endl;

	minValueIn(crr, sizeC);

	cout << endl << endl;

	maxValueIn(crr, sizeC);

	cout << endl << endl;

	sum(crr, sizeC);

	cout << endl << endl;

	Shift(crr, sizeC);

	cout << endl << endl;

	cout << tireshki;

	cout << endl << endl;

	//двумерный инт
	FillRand(arrray, FFirst, Second);

	Print(arrray, FFirst, Second);

	cout << endl << endl;

	Avg(arrray, FFirst, Second);

	cout << endl << endl;

	minValueIn(arrray, FFirst, Second);

	cout << endl << endl;

	maxValueIn(arrray, FFirst, Second);

	cout << endl << endl;

	sum(arrray, FFirst, Second);

	cout << endl << endl;

	cout << tireshki;

	cout << endl << endl;

	// двумерный дабл
	FillRand(arrrayD, FFirstD, SecondD);

	Print(arrrayD, FFirstD, SecondD);

	cout << endl << endl;

	Avg(arrrayD, FFirstD, SecondD);

	cout << endl << endl;

	minValueIn(arrrayD, FFirstD, SecondD);

	cout << endl << endl;

	maxValueIn(arrrayD, FFirstD, SecondD);

	cout << endl << endl;

	sum(arrrayD, FFirstD, SecondD);

	cout << endl << endl;

	cout << tireshki;

	cout << endl << endl;

	// двумерный флоат
	FillRand(arrrayF, FFirstF, SecondF);

	Print(arrrayF, FFirstF, SecondF);

	cout << endl << endl;

	Avg(arrrayF, FFirstF, SecondF);

	cout << endl << endl;

	minValueIn(arrrayF, FFirstF, SecondF);

	cout << endl << endl;

	maxValueIn(arrrayF, FFirstF, SecondF);

	cout << endl << endl;

	sum(arrrayF, FFirstF, SecondF);

	cout << endl << endl;

	cout << tireshki;

	cout << endl << endl;

	// двумерный чар
	FillRand(arrrayC, FFirstC, SecondC);

	Print(arrrayC, FFirstC, SecondC);

	cout << endl << endl;

	Avg(arrrayC, FFirstC, SecondC);

	cout << endl << endl;

	minValueIn(arrrayC, FFirstC, SecondC);

	cout << endl << endl;

	maxValueIn(arrrayC, FFirstC, SecondC);

	cout << endl << endl;

	sum(arrrayC, FFirstC, SecondC);

	cout << endl << endl;

	cout << tireshki;

	cout << endl << endl;
}
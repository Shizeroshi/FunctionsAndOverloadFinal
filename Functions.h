#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
#include <string>
#include <conio.h>
#include <stdio.h>
#include <io.h>
#include <Windows.h>
*/
#include <locale>
#include <algorithm>
#include <valarray>
/*
#include <fcntl.h>
#include <valarray>
*/

using namespace std;

/*
#define escape 27
#define enter 13
#define space 32
#define tab 9
#define BackSlash 92
*/
/*
#define UgolUpLeft (char)218
#define UgolUpRight (char)191
#define UgolDownLeft (char)192
#define UgolDownRight (char)217
#define HorizontalLine (char)196
#define VerticalLine (char)179
#define Kvadrat (char)219
#define space 32
*/

#define tireshki "-----------------------------------------------------"

const int FFirst = 3; // Строки
const int Second = 5; // Столбцы

const int FFirstD = 3; // Строки
const int SecondD = 5; // Столбцы

const int FFirstF = 3; // Строки
const int SecondF = 5; // Столбцы

const int FFirstC = 3; // Строки
const int SecondC = 5; // Столбцы

//инт
int sum(int a[], const int b);
int FillRand(int a[], const int b);
int Sort(int a[], const int b);
int Avg(int a[], const int b);
int minValueIn(int a[], const int b);
int maxValueIn(int a[], const int b);
int Shift(int a[], const int b);
//дабл
double sum(double a[], const int b);
double FillRand(double a[], const int b);
double print(double a[], const int b);
double Sort(double a[], const int b);
double Avg(double a[], const int b);
double minValueIn(double a[], const int b);
double maxValueIn(double a[], const int b);
double Shift(double a[], const int b);
//флоат
float sum(float a[], const int b);
float FillRand(float a[], const int b);
float print(float a[], const int b);
float Sort(float a[], const int b);
float Avg(float a[], const int b);
float minValueIn(float a[], const int b);
float maxValueIn(float a[], const int b);
float Shift(float a[], const int b);
//чар
char sum(char a[], const int b);
char FillRand(char a[], const int b);
char print(char a[], const int b);
char Sort(char a[], const int b);
char Avg(char a[], const int b);
char minValueIn(char a[], const int b);
char maxValueIn(char a[], const int b);
char Shift(char a[], const int b);
//Двумерный инт
int sum(int ar[FFirst][Second], const int n, const int m);
int FillRand(int ar[FFirst][Second], const int n, const int m);
int Print(int ar[FFirst][Second], const int n, const int m);
int Avg(int ar[FFirst][Second], const int n, const int m);
int minValueIn(int ar[FFirst][Second], const int n, const int m);
int maxValueIn(int ar[FFirst][Second], const int n, const int m);
//Двумерный дабл
double sum(double ar[FFirstD][SecondD], const int n, const int m);
double FillRand(double ar[FFirstD][SecondD], const int n, const int m);
double Print(double ar[FFirstD][SecondD], const int n, const int m);
double Avg(double ar[FFirstD][SecondD], const int n, const int m);
double minValueIn(double ar[FFirstD][SecondD], const int n, const int m);
double maxValueIn(double ar[FFirstD][SecondD], const int n, const int m);
//Двумерный флоат
float sum(float ar[FFirstF][SecondF], const int n, const int m);
float FillRand(float ar[FFirstF][SecondF], const int n, const int m);
float Print(float ar[FFirstF][SecondF], const int n, const int m);
float Avg(float ar[FFirstF][SecondF], const int n, const int m);
float minValueIn(float ar[FFirstF][SecondF], const int n, const int m);
float maxValueIn(float ar[FFirstF][SecondF], const int n, const int m);
//Двумерный чар
char sum(char ar[FFirstC][SecondC], const int n, const int m);
char FillRand(char ar[FFirstC][SecondC], const int n, const int m);
char Print(char ar[FFirstC][SecondC], const int n, const int m);
char Avg(char ar[FFirstC][SecondC], const int n, const int m);
char minValueIn(char ar[FFirstC][SecondC], const int n, const int m);
char maxValueIn(char ar[FFirstC][SecondC], const int n, const int m);
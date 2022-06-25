

#include <iostream>
#include <Windows.h>
#include <cctype>

using namespace std;
//task_1_1
int Min(int* arr, int size, int* arr2, int size2);
int Avg(int* arr, int size, int* arr2, int size2);
int Max(int* arr, int size, int* arr2, int size2);
int Action(int* arr, int* arr2, int size, int size2);
//---
//task_2_1
void DeletinElementonIndex(int* arr, int size, int index) {
	int* NewArr = new int[size - 1];
	for (int i = 0,j = 0; i < size; i++) {
		if (i != index) {
			NewArr[j] = arr[i];
			j++;
		}

	}
	size--;
	for (int i = 0; i < size;i++) {
		cout << NewArr[i] << " ";
	}
}
//task_2_2
void DeletinElements(int* arr, int size, int element) {
	int size2 = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == element) size2++;
	}
	int* NewArr = new int[size-size2];
	for (int i = 0, j = 0; i < size; i++) {
		if (arr[i] != element) {
			NewArr[j] = arr[i];
			j++;
		}
	}
	size -= size2;
	for (int i = 0; i < size; i++) {
		cout << NewArr[i] << " ";
	}
}
//task_2_3
void InsertElementonIndex(int* arr, int size, int element, int index) {
	int* NewArr = new int[size + 1];
	for (int i = 0, j = 0; i < size+1; i++) {
		if (i == index) {
			NewArr[i] = element;
		}
		else {
			NewArr[i] = arr[j];
			j++;
		}

	}
	size++;
	for (int i = 0; i < size; i++) {
		cout << NewArr[i] << " ";
	}
}
//task_2_4
void InsertPoint(char* arr) {
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '.')
			arr[i] = '!';
	}
	cout << "New line: \n";
	cout << arr;
}
//task_2_5
int SearchSymbol(char* arr, char sym) {
	int count = 0;
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == sym)
			count++;
	}
	return count;
	
}
//task_2_6
void SearchDifferentSymbol(char* arr) {
	int numb = 0, letter = 0, other = 0;
	for (int i = 0; i < strlen(arr); i++) {
		if (isalpha(arr[i]) == true) letter++;                                                         //isalpha(arr[i]) == true) считает лишь буквы в верхнем регистре
		else if (isdigit(arr[i]) == true) numb++;                                                     //Даже когда я добавил islower(arr[i]) || isupper(arr[i]), то ситуация не преобразовалась
		else other++; //ПРОБЕЛ ТОЖЕ СИМВОЛ   //Также считае и буквы нижнего регистра, из-за проблемы описанной до.        //А через список глупо, поэтому я не нашёл оптимума
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "letters - " << letter;
	cout << endl << "Numbers - " << numb;
	cout << endl << "Other symbols - " << other;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	//Задание 1. Написать программу, которая содержит функцию Action, принимающую в качестве аргумента, указатели на два массива (А и В) и размеры массивов, а также
	//указатель на функцию.
	//Пользователю отображается меню, в котором он
	//может выбрать max, min, avg.Если выбран max — передается указатель на функцию, которая ищет максимум,
	//если выбран min — передается указатель на функцию,
	//которая ищет минимум, если выбран avg — передается
	//указатель на функцию, которая ищет среднее.
	//Возвращаемое значение функции Action результат
	//выбора пользователя max, min, avg

	//P.S
	// Так мне и неведомо: искать где и что, поэтому я разыскивал число в обоих массивах.

	/*int arr[5] = {1, 2, 3, 4, 5};
	int arr2[5] = { 6, 7, 8, 9, 10 };
	cout << Action(arr, arr2, 5, 5);*/


	//P.S. Что тут задание со строками, то я заметил это лишь к 4 заданию, однако не думаю что int массивы сильно разняться от char, они вполне коррелятивны,
	//поэтому пожалуйста не бейте за такое попустительство и кощунство, спасибо.
	//P.S.S И строки мы не проходили :D

	//Задание 1. Написать функцию, которая удаляет из строки
	//символ с заданным номером.
	//int arr[5] = { 1,2,3,4,5 };
	//DeletinElementonIndex(arr, 5, 2);

	//Задание 2. Написать функцию, которая удаляет из строки
	//все вхождения в нее заданного символа.
	//int arr[6] = { 1,2,3,4,5,5 };
	//DeletinElements(arr, 6, 5);

	//Задание 3. Задание 3. Написать функцию, которая вставляет в строку
	//в указанную позицию заданный символ.
	//int arr[5] = { 1,2,3,4,5 };
	//InsertElementonIndex(arr, 5, 8, 2);

	//Задание 4. Написать программу, которая заменяет все
	//символы точки «.» в строке, введенной пользователем,
	//на символы восклицательного знака «!»
	/*char line[100];
	cout << "Enter line: \n";
	cin.getline(line, 100);
	InsertPoint(line);*/

	//Задание 5.. Пользователь вводит строку символов и искомый
	//символ, посчитать сколько раз он встречается в строке
	/*char line[100];
	char t;
	cout << "Enter line:\n";
	cin.getline(line, 100);
	cout << "Enter searched symbol: \n";
	cin >> t;
	cout << "Number of times the symbol was encountered - " << SearchSymbol(line, t);*/


	//Задание 6. Пользователь вводит строку. Определить количество букв, количество цифр и количество остальных
	//символов, присутствующих в строке.
	char line[100];
	cout << "Enter line: \n";
	cin.getline(line, 100);
	SearchDifferentSymbol(line); //ВВОДИТЬ ТЕКСТ ЛИШЬ НА АНГЛИЙСКОМ! Потому что.
}

//task_1_1
int Action(int* arr, int* arr2, int size, int size2) {
	string t;
	cout << "\t|МЕНЮ|\t\n";
	cout << "Выберите желаемое действие:\n";
	cout << "* - min \n";
	cout << "* - max \n";
	cout << "* - avg \n";
	cout << "--- "; cin >> t;
	if (t == "min") {
		cout << "Минимальное - "; return Min(arr, size, arr2, size2);
	}
	else if (t == "max") {
		cout << "Максимальное - "; return Max(arr, size, arr2, size2);
	}
	else if (t == "avg") {
		cout << "Среднеарифмитическое - "; return Avg(arr, size, arr2, size2);
	}
}
//Минимальное
int Min(int* arr, int size, int* arr2, int size2) {
	int* ARR = new int[size + size2];
	//Вносим массивы в наш
	for (int i = 0; i < size; i++) {
		ARR[i] = arr[i];
	}
	for (int i = 0, j = size; i < size2; i++, j++) {
		ARR[j] = arr2[i];
	}

	int min = ARR[0];
	for (int i = 0; i < size + size2; i++) {
		if (min > ARR[i])
			min = ARR[i];
	}
	return min;
}
//Максимальное
int Max(int* arr, int size, int* arr2, int size2) {
	int* ARR = new int[size + size2];
	//Вносим массивы в наш
	for (int i = 0; i < size; i++) {
		ARR[i] = arr[i];
	}
	for (int i = 0, j = size; i < size2; i++, j++) {
		ARR[j] = arr2[i];
	}

	int max = ARR[0];
	for (int i = 0; i < size + size2; i++) {
		if (max < ARR[i])
			max = ARR[i];
	}
	return max;

}
//Среднее
int Avg(int* arr, int size, int* arr2, int size2) {
	int* ARR = new int[size + size2];
	//Вносим массивы в наш
	for (int i = 0; i < size; i++) {
		ARR[i] = arr[i];
	}
	for (int i = 0, j = size; i < size2; i++, j++) {
		ARR[j] = arr2[i];
	}

	int sum = 0;
	for (int i = 0; i < size + size2; i++) {
		sum += ARR[i];
	}
	sum = sum / (size + size2);
	return sum;

}
//---------

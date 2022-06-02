#include "MyClass.h"
#include <iostream>
using namespace std;

//конструктор создания массива//
MyClass::MyClass(int size)//передаем размерность массива
{
	this->Size = size;
	this->data = new int[size];//создаем массив и присваиваем его переменной-указателю класса 
	for (int i = 0; i < size; i++) //заполняем массив его же индексами
	{
		*(data + i) = i;
		cout << *(data + i) << " ";
	}
	cout << "\nВызвался конструктор " << this << endl << endl;
}
//конструктор копирования//
MyClass::MyClass(const MyClass & other)//реализация конструктора копирования
{   // принимается константный объект типа класс 

	//this->data = other.data; реализация конструктора копирования по умолчанию

	this->Size = other.Size;
	this->data = new int[other.Size]; //наша реализация конструктора копирования 
	for (int i = 0; i < other.Size; i++)
	{
		this->data[i] = other.data[i];
		cout << *(data + i) << " ";
	}
	cout << "\nВызвался конструктор копирования " << this << endl;
}

//оператор присваивания//
MyClass & MyClass::operator=(const MyClass & other)
{
	// cout << "Вызвался оператор присваивания, объект: " << this << endl;
	this->Size = other.Size;//поле Size просто копируем, так как он в динамической памяти не выделяется (очищать не нужно)
	if (this->data != nullptr)
	{
		delete[] this->data;
	}
	//логику поэлементного копирования мы вставим после очистки текущего объекта:
	this->data = new int[other.Size]; //выделяется область памяти по размеру как у объекта который мы копируем (other) 
	for (int i = 0; i < other.Size; i++)
	{
		this->data[i] = other.data[i];
		cout << *(data + i) << " ";
	}
	cout << "\n";
	return *this;
}
//деструктор//
MyClass::~MyClass()
{
	cout << "\nВызвался деструктор объекта:" << this << endl;
	delete[] data; //в декструкторе также уничтожаем сам массив, чтобы не было утечек памяти
}


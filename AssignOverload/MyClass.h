#pragma once
class MyClass
{
	int *data;//создаем переменную указатель для массива
private:
	int Size;

public: //не забываем про модификаторы доступа

	MyClass(int size); //конструктор создания массива
	MyClass(const MyClass &other); //самописный конструктор копирования объекта класса
	MyClass & operator = (const MyClass &other);//оператор присваивания
	~MyClass();
};
#pragma once
class MyClass
{
	int *data;//������� ���������� ��������� ��� �������
private:
	int Size;

public: //�� �������� ��� ������������ �������

	MyClass(int size); //����������� �������� �������
	MyClass(const MyClass &other); //���������� ����������� ����������� ������� ������
	MyClass & operator = (const MyClass &other);//�������� ������������
	~MyClass();
};
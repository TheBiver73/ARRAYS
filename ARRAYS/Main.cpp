//Arrays
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << "Hello, Arrays!" << endl;
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	//cout << int() << endl;
	//arr[2] = 2048;
	//cout << arr[2] << endl;
	//���� ��������� ������� � ����������
	for (int i = 0; i < SIZE; i++)
	{
		cin>>i;
		cout<< i << endl;
	}


	//����� ��������� ������� �� �������
	/*for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/
}
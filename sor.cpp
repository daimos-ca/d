#include "sor.h"
#include<ctime>
int createarr(int *arr, int size, int *di)
{
	
	cout << "Enter diapazon for arr" << endl;
		cin >> *di;
		system("cls");
	for (int i = 0; i < size;i++) {
		
		*(arr+i) = rand() % *di;
		

	}

	cout << endl;
	


	return 0;
}

int showarr(int *arr, int size, int *di)
{
	for (int i = 0; i < size; i++) {

		
		cout << *(arr+i) << " ";

	}
	cout << endl;
	return 0;
}

int disivedelement(int* arr, int size, int* di)
{
	int element = 0;
	cout << "Enter number->";
	cin >> element;
	for (int i = 0; i < size; i++) {
		if (element == *(arr+i)) {
			cout << i << endl;
		}
		
	}


	return 0;
}

int sortarr(int* arr, int size, int* di)
{

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (*(arr+j) > *(arr+j + 1) ){
				int temp = *(arr+j);
				*(arr+j) = *(arr+j + 1);
				*(arr+j + 1) = temp;
				
			}
          
		}
		
	}
	cout << endl;

	return 0;
}

int avarage(int* arr, int size, int* di)
{
	int sum=0;
	int mile=0;

	for (int i = 0; i < size; i++)
    {
		sum += *(arr + i);
	}
	cout << "Avarage=" << sum / 100 << endl;
	return 0;
}

int multiple_5(int* arr, int size, int* di)
{
	int count=0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 5 == 0) {
			count++;
		}

	}
	cout << "Multiple 5 = " << count << endl;
	return 0;
}

#include<iostream>
#include "sor.h"
#include<ctime>
using namespace std;

int main() {

	const int size = 100;
	int arr[size];
	int di=0;
	int a;
	do {
		cout << "1.Random arr" << endl;
		cout << "2.Show arr" << endl;
		cout << "3.Find index" << endl;
		cout << "4.Sort" << endl;
		cout << "5.Find avarage" << endl;
		cout << "6.Multiple 5" << endl;
		cout << "7.Exit" << endl;
		cout << "Select function->";
		cin >> a;
		switch (a)
		{
		case 1:
			createarr(arr, size, &di);
			
			break;
		case 2:
			showarr(arr, size, &di);
			
			break;

		case 3:
			disivedelement(arr, size, &di);
			
			break;
		case 4:
			sortarr(arr, size, &di);
			showarr(arr, size, &di);
			
			break;
		case 5:
			avarage(arr, size, &di);
			
				break;
		case 6:
			multiple_5(arr, size, &di);
			break;
		case 7:
			cout << "Bye" << endl;
			break;
		}
		

	} while (a != 7);

}
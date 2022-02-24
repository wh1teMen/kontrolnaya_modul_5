#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void ShowArray(int array[], int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++) {
		array[i] = rand() % 10;
		cout << array[i] << ", ";
	}
	cout << "\b\b]";
}

template<typename T> void clearArray ( int array[], int lenght, T key) {
	cout << "[";
	for (int i = 0; i < lenght; i++) {
		if (key==array[i]) 
			array[i] = 0;
	cout << array[i]<<", ";
	}
	cout << "\b\b]";

}

int indexSum(int array1[], int lenght, int array2[], int lenght1, int b) {
	if (b > lenght || b > lenght1) {
		cout << "ERROR\n";

		return 0;
	}

	cout << "����� ��������� ����� = ";
	return array1[b] + array2[b];
}
template <typename T > T maxSum(T array[], int lenght) {
	int max1 = array[0];
	int max2 = array[0];
	for (int i = 0; i < lenght; i++) {
		if (array[i] > max1)
			max1 = array[i];
	}
	for (int i = 0; i < lenght; i++) {
		if (array[i] >= max2 || array[i] == max1)
			max2 = array[i];
	}
		return max1+max2;
}

void primeRange (int num1,int num2) {
		
	
	for (int i = num1; i <= num2;i++) {
		int count = 1;
		for (int j = 1; j <= i/2; j++) 
			if (i % j == 0)
				count++;
			if (count == 2)
				cout << i << ", ";
		
		
	
	}
	cout << "\b\b.";



}




int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n1, n2,n3;
	cout << "������ 1\n";

	const int lenght = 10;
	const int size = 15;
	int z1[lenght];
	int z2[lenght];
	cout << "����������� ������:\n";
	
	ShowArray(z1, lenght);
	cout << endl;
	cout << "������� ����� ������� ������ �������� �� 0: ";
	cin >> n3;
	cout << "�������� ������:\n";
    clearArray(z1, lenght, n3);
	cout << endl;


	cout << "\n������ 2\n";
	int n = 2;
	ShowArray(z1, lenght); cout << endl;
	ShowArray(z2, lenght); cout << endl;
	cout << "������� ������: ";
	cin >> n;
	cout<< indexSum(z1,lenght, z2,lenght, n);
	

	cout << "\n\n������ 3\n";
	ShowArray(z1, lenght);
	 cout<< "\n����� ���� ����� ������������ ��������� = "<< maxSum(z1, lenght);

	 cout << "\n\n������ 4\n";
	  cout << "������� ������ ���������: ";
	 cin >> n1;
	 cout << "������� ����� ���������: ";
	 cin >> n2;
	 cout << "��� ������� �����,�������� � ��������: "; primeRange(n1, n2); cout << endl;
	 
	 system("pause");










	return 0;
}
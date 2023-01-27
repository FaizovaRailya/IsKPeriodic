// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include  <string>
using namespace std;

bool IsKPeriodic(string arr, int k)
{
	int size = arr.size();
	if (k <= 0 || k > size || arr.size()%k != 0) {  	//кратность меньше 0 или кратность больше длины строки или длина строки не кратна числу К
		return false;
	}

	for (int j = 0; j < k; j++) {
		//cout << "проход "<< j << endl;
		int i = j;
		for (i; i < size / k; i++) {
			//cout << "итерация "<< i << endl;
			if (arr[i] != arr[i + k]) {		   		//если первые К символов не равны следующим К символам возвращем false
				//cout << arr[i] << arr[i + k] << endl;
				return false;
			}
		}	
	}
	return true;
}
int main() {
	setlocale(LC_ALL, "rus");
	string arr = "abcabcabcabcabc";
	int k = 3;

	if (IsKPeriodic(arr, k)) {
		cout << "Строка кратна числу " << k << endl;
	}
	else {
		cout << "Строка НЕ кратна числу " << k << endl;
	}
	return 0;
}

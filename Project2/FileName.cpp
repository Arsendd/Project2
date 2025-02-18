#include<iostream>
#include<string>
using namespace std;

class Vechile {
public:
	string name;
	int mark;
	int speed;
	void Names() {
		cout << name;
	}
};
class Car : public Vechile{

};
void comp(int a, int b) {
	if (a > 0 && b > 0) {
		cout << "both positive" << endl;
	}
	else if (a < 0 && b < 0) {
		cout << "both are negative" << endl;
	}
	else if (a != b) {
		cout << "one pos, one neg" << endl;
	}
}
void fill_arr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Input some integer" << endl;
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ", ";
	}
}
int largest(int arr[], int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int adding(int a, int b, int c) {
	return a + b + c;
}
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void selectionSort(int arr[], int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
int main() {
	/*
	int a = 10;
	int* b = &a;
	cout << *b << endl;
	a = 35;
	cout << *b << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(string) << endl;
	cout << (int)malloc(sizeof(int));//it returns an adress of dynamic location

	int* ptr = &a;
	//access the location using the pointer
	*ptr = 100;
	int one, two;
	do {
		cout << "Write two integers" << endl;
	    cin >> one >> two;
		comp(one, two);
	} while (one != 0 || two != 0);
	*/
	
	int const size = 6;
	int arr[size] = {34, 5, 34, 64, 54, 27};
	cout << largest(arr, size);
	return 0;
}
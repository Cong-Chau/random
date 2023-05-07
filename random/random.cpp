#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int random(int min, int max) {
	srand(time(NULL));
	int r = rand();
	int ran = min + r % max;
	return ran;
}

int main() {
	int min, max;
	cout << " Min = "; cin >> min;
	cout << " Max = "; cin >> max;
	cout << random(min, max);
}
#include <iostream>
using namespace std;

void specialTriangle(int n) {
  int row = 1;
  int num = 1;

  while (row <= n) {
    for (int i = 1; i < row; i++) {
      cout << " ";
    }

    cout << num << " ";

    for (int i = 1; i < row; i++) {
      cout << num - i << " ";
    }

    cout << endl;

    row++;
    num++;
  }
}

int main() {
  int n;

  cout << "Enter the number of layers: ";
  cin >> n;

  specialTriangle(n);

  return 0;
}

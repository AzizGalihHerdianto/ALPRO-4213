#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {

    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {

        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, n);
    cout<<"___________________________"<<endl;
    cout<<"nama:  AzizGalihHerdianto"<<endl;
    cout<<"NIM:   A11.2022.14483"<<endl;
    cout<<"kelas: A11.4213"<<endl;
    cout<<"___________________________"<<endl;
  cout<<endl;
  cout << "array terbesar hingga terkecil: \n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}







#include <iostream>
#include <functional>
using namespace std;

template<typename T>
bool defaultComparator(T a, T b) {
  return a < b;
}

template<typename T>
void mySwap(T& a, T& b){
  T tmp = a;
  a = b;
  b = tmp;
}

template<typename T>
void sort(T * arr, int n, bool (*comperator)(T, T) = defaultComparator){
  for (int i = 0; i < n - 1; i++){
    for (int j = i + 1; j < n; j++){
      if (comperator(arr[i], arr[j])){
        mySwap(arr[i], arr[j]);
      }
    }
  }
}

bool charCmp(char a, char b){
  return a > b;
}

void printArr(int *arr, int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){

  char name[] = "dcba";
  cout << name << endl;

  sort(name, 4);
  cout << name;

  cout << endl;
  int arr[] = {1, 2, 3, 4, 5};
  printArr(arr, 5);
  
  //bool operator<(int, decimal)

  sort(arr, 5);
  printArr(arr, 5);


  return 0;
}

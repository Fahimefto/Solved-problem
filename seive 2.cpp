#include <iostream>
const int len = 30;
int main() {

   int arr[30] = {0};
   cin<<n;
   for (int i = 2; i < n; i++) {
      for (int j = i * i; j < n; j+=i) {
         arr[j - 1] = 1;
      }
   }
   for (int i = 1; i < n; i++) {
      if (arr[i - 1] == 0)
         std::cout << i << "\t";
   }
}

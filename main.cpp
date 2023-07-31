#include <iostream>

int main() {
  int square,number,result = 1;

  std::cout << "insert number based on what u want: \n";
  std::cin >> number;
  std::cout << "insert number to square ur number: \n";
  std::cin >> square;

  for (int i = 1; i <= square; i++) {
    result = number * result;
  }
  std::cout << "squared: " << result << "\n";
  return 0;
}
#include <iostream>

// Lab 10 — Tyler Quintana
// CIS 5 Week 10 · References & pointers

void swap_values(int& a, int& b) {
  int n = a;
  a = b; 
  b = n;
}

int main() {
  int x = 3, y = 7;
  std::cout << "Before: " << x << " " << y << "\n";
  swap_values (x, y); 
  std::cout << "After: " << x << " " << y << "\n";
  int* p = &x;
  std:: cout << "Pointer: " << *p << "\n";
  // TODO: swap_values(x, y); done
  // TODO: pointer walkthrough with int* p = &x; done
  return 0;
}

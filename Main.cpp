#include <algorithm>
#include <iostream>

// Code 7-7
/* extern "C" int myFunc(); */

// Code 7-12
/* extern "C" int myFunc(int a, int b) { return a + b; } */

// Code 7-14
auto myFunc(int a, int b) -> int {
  int c = 3;
  int d = 4;
  return a + b + c + d;
}

auto main() -> int {
  // Code 7-3
  /* asm volatile("mov x1, #1\n\t" : : : "x1"); */
  /* asm volatile("add x1, x1, #2\n\t" : : : "x1"); */

  // Code 7-4
  /* asm volatile("mov x1, #1\n\t" : : : "x1"); */
  /* asm volatile("add x1, x1, #7\n\t" : : : "x1"); */
  /* asm volatile("sub x1, x1, #2\n\t" : : : "x1"); */
  /* asm volatile("mov x2, #3\n\t" : : : "x2"); */
  /* asm volatile("mul x1, x1, x2\n\t" : : : "x1"); */
  /* asm volatile("mov x2, #4\n\t" : : : "x2"); */
  /* asm volatile("sdiv x1, x1, x2\n\t" : : : "x1"); */

  // Code 7-5
  /* asm volatile("mov x1, #7\n\t" : : : "x1"); */
  /* asm volatile("cmp x1, #7\n\t" : :); */
  /* asm volatile("cmp x1, #8\n\t" : :); */

  // Code 7-6
  /* asm volatile("mov x1, #0\n\t" : : : "x1"); */
  /* asm volatile("start:\n\t" : :); */
  /* asm volatile("add x1, x1, #1\n\t" : : : "x1"); */
  /* asm volatile("cmp x1, #3\n\t" : :); */
  /* asm volatile("bne start\n\t" : :); */

  // Code 7-7
  /* auto result = 0; */
  /* asm volatile("bl myFunc\n\t" */
  /*              "mov %0, x0" */
  /*              : "=r"(result) */
  /*              : */
  /*              : "x0"); */
  /* std::cout << result; */

  // Code 7-12
  /* auto result = 0; */
  /* asm volatile("mov x0, %[a]\n" */
  /*              "mov x1, %[b]\n" */
  /*              "bl _myFunc\n" */
  /*              "mov %[res], x0\n" */
  /*              : [res] "=r"(result) */
  /*              : [a] "r"(5), [b] "r"(3) */
  /*              : "x0", "x1"); */
  /* std::cout << result << std::endl; */

  // Code 7-14
  std::cout << myFunc(1, 2) << std::endl;

  return 0;
}

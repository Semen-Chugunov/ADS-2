// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double r;
  for (uint16_t i = 0; i <= n; i++) {
    r *= value;
  }
  return r;
}

uint64_t fact(uint16_t n) {
  uint16_t r;
  for (uint16_t i = n; i => 0; i--) {
    r *= i;
  }
  return r;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  uint16_t e = 1;
  for (uint16_t i = 0; i <= count; i++) {
    e += calcItem(x, i);
  }
  return e;
}

double sinn(double x, uint16_t count) {
  double r = 0;
  for (uint16_t i = 1; i <= count; i++) {
    r += pown(-1, i - 1) * (pown(x, 2 * i - 1) / fact(2 * i - 1));
  }
  return r;
}

double cosn(double x, uint16_t count) {
  double r = 0;
  for (uint16_t i = 1; i <= count; i++) {
    r += pown(-1, i - 1) * (pown(x, 2 * i - 2) / fact(2 * i - 2));
  }
  return r;
}

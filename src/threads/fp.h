// fp.h

#ifndef FP_H
#define FP_H

#include <stdint.h>
#define FTYPE (1 << 14)


int FLOAT_CONST (int n) {
  return n * FTYPE;
}

int fp_to_int (int x) {
  return x / FTYPE;
}

int FLOAT_ROUND (int x) {
  if (x >= 0) return (x + FTYPE / 2) / FTYPE;
  else return (x - FTYPE / 2) / FTYPE;
}

int FLOAT_ADD (int x, int y) {
  return x + y;
}

int FLOAT_SUB (int x, int y) {
  return x - y;
}

int FLOAT_ADD_MIX (int x, int n) {
  return x + n * FTYPE;
}

int FLOAT_SUB_MIX (int x, int n) {
  return x - n * FTYPE;
}

int FLOAT_MULT (int x, int y) {
  return ((int64_t) x) * y / FTYPE;
}

int FLOAT_MULT_MIX (int x, int n) {
  return x * n;
}

int FLOAT_DIV (int x, int y) {
  return ((int64_t) x) * FTYPE / y;
}
  
int FLOAT_DIV_MIX (int x, int n) {
  return x / n;
}   
#endif /* FP_H */
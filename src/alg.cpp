// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int a = 0;
  int m1 = 0;
  int m2 = 0;
  while (right >= left) {
    m1 = (right + left) / 2;
    if (arr[m1] == value) {
      a++;
      m2 = m1;
      while (arr[m1 + 1] == value) {
        a++;
        m1++;
      }
      while (arr[m2 - 1] == value) {
        a++;
        m2--;
      }
      return a;
    } else if (value < arr[m1]) {
      right = m1 - 1;
    } else {
      left = m1 + 1;
    }
  }
  return 0; // если ничего не найдено
}

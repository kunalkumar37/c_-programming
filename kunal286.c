#include<stdio.h>
#include<math.h>
int main()
{
    int traingele;


double area(triangle t) {
  double p = (t.a + t.b + t.c) / 2.0;
  return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

void swap(triangle *t1, triangle *t2) {
  triangle temp = *t1;
  *t1 = *t2;
  *t2 = temp;
}

void sort_by_area(triangle *tr, int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - 1 - i; j++) {
      if (area(tr[j]) > area(tr[j + 1])) {
        swap(&tr[j], &tr[j + 1]);
      }
    }
  }
}
}
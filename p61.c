#include <stdio.h>
int main() {
int tables[2][10]; 
for (int i = 0; i < 10; ++i) {
tables[0][i] = 2 * (i + 1);
}
for (int i = 0; i < 10; ++i) {
tables[1][i] = 3 * (i + 1);
}
printf("Table of 2:\n");
for (int i = 0; i < 10; ++i) {
printf("%d ", tables[0][i]);
}
printf("\nTable of 3:\n");
for (int i = 0; i < 10; ++i) {
printf("%d ", tables[1][i]);
}
return 0;
}

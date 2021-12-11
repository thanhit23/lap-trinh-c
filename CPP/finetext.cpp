#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {
    int x, y;
    int arrayI[50];
    int arrayJ[50];
    printf("Nhap a = "); scanf("%d", &x);
    printf("Nhap b = "); scanf("%d", &y);
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            arrayI[i] = x / i;
        }
    }
    for (int j = 1; j <= y; j++) {
        if (y % j == 0) {
            arrayJ[j] = y / j;
        }
    }
    int check = 0;
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= y; j++) {
            if (arrayI[i] == arrayJ[j]) {
                printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, arrayI[i]);
                check = 1;
            }
            
            if (check == 1) {
                break;
            }

        }

        if (check == 1) {
                break;
            }
    }
    return 0;
}
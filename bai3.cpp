#include <stdio.h>
#include <stdlib.h>


int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multi(int a, int b) {
    return a * b;
}

double chia(int a, int b) {
    if (b != 0) {
        return a / b;
    }
}

void menu() {

    int a, b;
    int option;
    while (option) {
        printf("\n TINH TOAN");
        printf("\n ==================");
        printf("\n 1: NHAP SO");
        printf("\n 2: TINH TONG");
        printf("\n 3: TINH HIEU");
        printf("\n 4: TINH TICH");
        printf("\n 5: TINH THUONG");
        printf("\n 6: THOAT");
        printf("\n ==================");
        printf("\n CHON : ");
        scanf("%d", &option);

        switch (option) {

            case 1: {
                printf("\n Nhap a:");
                scanf("%d", &a);

                printf("\n Nhap b:");
                scanf("%d", &b);
            }
                break;

            case 2: {
                int s = sum(a, b);
                printf("\na + b = %d", s);
            }
                break;

            case 3: {
                int su = sub(a, b);
                printf("\na -b = %d", su);
            }
                break;

            case 4: {
                int mul = multi(a, b);
                printf("\na * b = %d", mul);
            }
                break;

            case 5: {
                double thu = chia(a, b);
                printf("\na / b = %f", thu);
            }
                break;

            case 6: {
                exit(0);
            }
                break;
        }
    }
}
int main() {
    menu();
    return 0;
}

#include <stdio.h>

int main() {
    int day, month;
    printf("Nh?p ng�y sinh c?a b?n: ");
    scanf("%d", &day);
    printf("Nh?p th�ng sinh c?a b?n: ");
    scanf("%d", &month);

    if (month == 1) {
        if (day <= 19) {
            printf("Cung Ma K?t");
        } else {
            printf("Cung B?o B?nh");
        }
    } else if (month == 2) {
        if (day <= 18) {
            printf("Cung B?o B?nh");
        } else {
            printf("Cung Song Ng�");
        }
    } else if (month == 3) {
        if (day <= 20) {
            printf("Cung Song Ng�");
        } else {
            printf("Cung B?ch D��ng");
        }
    } else if (month == 4) {
        if (day <= 19) {
            printf("Cung B?ch D��ng");
        } else {
            printf("Cung Kim Ng�u");
        }
    } else if (month == 5) {
        if (day <= 20) {
            printf("Cung Kim Ng�u");
        } else {
            printf("Cung Song T?");
        }
    } else if (month == 6) {
        if (day <= 21) {
            printf("Cung Song T?");
        } else {
            printf("Cung C? Gi?i");
        }
    } else if (month == 7) {
        if (day <= 22) {
            printf("Cung C? Gi?i");
        } else {
            printf("Cung S� T?");
        }
    } else if (month == 8) {
        if (day <= 22) {
            printf("Cung S� T?");
        } else {
            printf("Cung X? N?");
        }
    } else if (month == 9) {
        if (day <= 22) {
            printf("Cung X? N?");
        } else {
            printf("Cung Thi�n B?nh");
        }
    } else if (month == 10) {
        if (day <= 23) {
            printf("Cung Thi�n B?nh");
        } else {
            printf("Cung B? C?p");
        }
    } else if (month == 11) {
        if (day <= 21) {
            printf("Cung B? C?p");
        } else {
            printf("Cung Nh�n M?");
        }
    } else if (month == 12) {
        if (day <= 21) {
            printf("Cung Nh�n M?");
        } else {
            printf("Cung Ma K?t");
        }
    } else {
        printf("Ng�y ho?c th�ng kh�ng h?p l?.");
    }

    return 0;
}

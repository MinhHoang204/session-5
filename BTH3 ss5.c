#include<stdio.h>

int main() {
    int minutes;
    float bill = 0;
    printf("Nh?p s? ph�t s? d?ng: ");
    scanf("%d", &minutes);
    if (minutes <= 50) {
        bill = 25000;
    } else if (minutes <= 200) {
        bill = 25000 + (minutes - 50) * 600;
    } else if (minutes <= 350) {
        bill = 25000 + 150 * 600 + (minutes - 200) * 400;
    } else {
        bill = 25000 + 150 * 600 + 150 * 400 + (minutes - 350) * 200;
    }
    printf("C�?c �i?n tho?i b�n cho m?t h? gia �?nh trong th�ng l� %.2f VND.\n", bill);
    return 0;
}

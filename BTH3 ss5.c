#include<stdio.h>

int main() {
    int minutes;
    float bill = 0;
    printf("Nh?p s? phút s? d?ng: ");
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
    printf("Cı?c ği?n tho?i bàn cho m?t h? gia ğ?nh trong tháng là %.2f VND.\n", bill);
    return 0;
}

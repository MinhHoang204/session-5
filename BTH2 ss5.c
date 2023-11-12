#include <stdio.h>

int main() {
    float doanhThu, hoaHong;
    printf("Nhap doanh thu: ");
    scanf("%f", &doanhThu);

    if (doanhThu <= 100000000) {
        hoaHong = doanhThu * 0.05;
    } else if (doanhThu <= 300000000) {
        hoaHong = doanhThu * 0.1;
    } else {
        hoaHong = doanhThu * 0.2;
    }

    printf("Hoa hong dai ly la: %f", hoaHong);
    return 0;
}

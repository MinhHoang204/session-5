#include <stdio.h>

int main() {
    float tong_thu_nhap, tien_giam_tru, thue_thu_nhap, luong_rong;

    printf("Nhap tong thu nhap cua nhan vien: ");
    scanf("%f", &tong_thu_nhap);

    printf("Nhap tien giam tru cua nhan vien: ");
    scanf("%f", &tien_giam_tru);

    float thu_nhap_chiu_thue = tong_thu_nhap - tien_giam_tru;
    if (thu_nhap_chiu_thue <= 0) {
        thue_thu_nhap = 0;
    } else if (thu_nhap_chiu_thue <= 5000000) {
        thue_thu_nhap = thu_nhap_chiu_thue * 0.05;
    } else if (thu_nhap_chiu_thue <= 10000000) {
        thue_thu_nhap = 250000 + (thu_nhap_chiu_thue - 5000000) * 0.1;
    } else if (thu_nhap_chiu_thue <= 18000000) {
        thue_thu_nhap = 750000 + (thu_nhap_chiu_thue - 10000000) * 0.15;
    } else if (thu_nhap_chiu_thue <= 32000000) {
        thue_thu_nhap = 1950000 + (thu_nhap_chiu_thue - 18000000) * 0.2;
    } else if (thu_nhap_chiu_thue <= 52000000) {
        thue_thu_nhap = 4750000 + (thu_nhap_chiu_thue - 32000000) * 0.25;
    } else if (thu_nhap_chiu_thue <= 80000000) {
        thue_thu_nhap = 9750000 + (thu_nhap_chiu_thue - 52000000) * 0.3;
    } else {
        thue_thu_nhap = 18150000 + (thu_nhap_chiu_thue - 80000000) * 0.35;
    }

    luong_rong = tong_thu_nhap - thue_thu_nhap;

    printf("Thue thu nhap cua nhan vien la: %.2f VND\n", thue_thu_nhap);
    printf("Luong rong cua nhan vien la: %.2f VND\n", luong_rong);

    return 0;
}

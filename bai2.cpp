#include <stdio.h>
#include <math.h>


int kiemTraSoChinhPhuong(int n) {
	int canBacHai = sqrt(n);
	return (canBacHai * canBacHai == n);
}

int demSoChinhPhuong(int n) {
	int soLuongSoChinhPhuong = 0;
	for (int i = 1; i <= n; i++) {
		if (kiemTraSoChinhPhuong(i)) {
			soLuongSoChinhPhuong++;
		}
	}
	return soLuongSoChinhPhuong;
}

int main() {
	int n;

	printf("Nhap n: ");
	scanf("%d", &n);

	int soLuongSoChinhPhuong = demSoChinhPhuong(n);
	printf("\nSo luong so chinh phuong nho hon %d la: %d\n", n, soLuongSoChinhPhuong);

	printf("Danh sach cac so chinh phuong:\n");
	for (int i = 1; i <= n; i++) {
		if (kiemTraSoChinhPhuong(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}

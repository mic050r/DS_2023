#include <stdio.h>
// a�� �����, b�� ������, c�� ������ ����
void HanoiTower(int n, char a, char b, char c) {
	if (n == 1) printf("���� %d, %c -> %c \n", n, a, c); // n : ���� ��ȣ
	else {
		HanoiTower(n - 1, a, c, b); // (n-1)���� ����� -> ������(����)
		printf("���� %d, %c -> %c \n", n, a, c); //n�� ���� �̵�
		HanoiTower(n - 1, b, a, c); // (n-1)���� ������ -> ������
	}
}

int main(void) {

	// ���� ����
	int n = 8;
	// A�� �����, B�� ������, C�� �������� ��Ī
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
	
}
#include <stdio.h>
#difine SIZE 100000

int main(void) {
	int* a = (int*)malloc(sizeof(int) * SIZE);

	a[0] = 10; 
	printf("%d\n", a[0]);

	// �����Ҵ��� ��� ��, �׻� �Ҵ� ����(�Ҹ�)�ؾ���
	free(a);

}

//Project1 -> �Ӽ� -> ��Ŀ -> �ý���
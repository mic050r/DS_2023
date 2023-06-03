#include <stdio.h>
#difine SIZE 100000

int main(void) {
	int* a = (int*)malloc(sizeof(int) * SIZE);

	a[0] = 10; 
	printf("%d\n", a[0]);

	// 동적할당은 사용 후, 항상 할당 해제(소멸)해야함
	free(a);

}

//Project1 -> 속성 -> 링커 -> 시스템
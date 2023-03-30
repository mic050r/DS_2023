#include <stdio.h>
// a는 출발지, b는 경유지, c는 도착지 변수
void HanoiTower(int n, char a, char b, char c) {
	if (n == 1) printf("원판 %d, %c -> %c \n", n, a, c); // n : 원판 번호
	else {
		HanoiTower(n - 1, a, c, b); // (n-1)개를 출발지 -> 경유지(보조)
		printf("원판 %d, %c -> %c \n", n, a, c); //n번 원판 이동
		HanoiTower(n - 1, b, a, c); // (n-1)개를 경유지 -> 도착지
	}
}

int main(void) {

	// 원판 개수
	int n = 8;
	// A는 출발지, B는 경유지, C는 목적지의 명칭
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
	
}
#include <stdio.h>

void countTotalAtk(int atk[], int hp[], double bonus[], double bonusHeal[], int totalAtk[], int n) {
	double ATK[n];
	countATK(atk, hp, bonusHeal, ATK, n);
	for(int i = 0; i < n; i++) {
		totalATK[i] = ATK[i] * (1 + bonus[i]);
	}
}

void countATK(int atk[], int hp[], double bonusHeal[], double ATK[], int n) {
	for(int i = 0; i < n; i++) {
		ATK[i] = atk[i] * 1.231 + (0.087 + 0.15 * bonusHeal[i]) * hp[i];
	}
}

void printTotalAtk(int totalAtk[], int n) {
	printf("��%dλ: %d\n", 0, totalAtk[0]);
	printf("��%dλ: %d\n", 520, totalAtk[520]);
	printf("��%dλ: %d\n", 1314, totalAtk[1314]);
	printf("��%dλ: %d\n", 999, totalAtk[999]);
	printf("��%dλ: %d\n", 2048, totalAtk[2048]);
}

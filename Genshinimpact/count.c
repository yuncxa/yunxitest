#include <stdio.h>
#include "include/count.h"
void countTotalAtk(int atk[], int hp[], double bonus[], double bonusHeal[], int totalAtk[], int n) {
	double ATK[n];
	countATK(atk, hp, bonusHeal, ATK, n);
	for(int i = 0; i < n; i++) {
		totalAtk[i] = ATK[i] * (1 + bonus[i]) * 90 / (90 + 93);
	}
}

void countATK(int atk[], int hp[], double bonusHeal[], double ATK[], int n) {
	for(int i = 0; i < n; i++) {
		ATK[i] = atk[i] * 1.231 + (0.087 + 0.15 * bonusHeal[i]) * hp[i];
	}
}

void printTotalAtk(int totalAtk[], int n, int atk[], int hp[], double bonus[], double bonusHeal[]) {
	printf("%dth: %d\n", 0, totalAtk[0]);
	printf("atk: %d\t hp: %d\t bonus: %.1f\t bonusHeal: %.1f\n",atk[0], hp[0], bonus[0]*100, bonusHeal[0]*100);
	printf("%dth: %d\n", 520, totalAtk[520]);
	printf("atk: %d\t hp: %d\t bonus: %.1f\t bonusHeal: %.1f\n",atk[520], hp[520], bonus[520]*100, bonusHeal[520]*100);
	printf("%dth: %d\n", 1314, totalAtk[1314]);
	printf("atk: %d\t hp: %d\t bonus: %.1f\t bonusHeal: %.1f\n",atk[1314], hp[1314], bonus[1314]*100, bonusHeal[1314]*100);
	printf("%dth: %d\n", 999, totalAtk[999]);
	printf("atk: %d\t hp: %d\t bonus: %.1f\t bonusHeal: %.1f\n",atk[999], hp[999], bonus[999]*100, bonusHeal[999]*100);
	printf("(%d-1)th: %d\n", 2048, totalAtk[2048-1]);
	printf("atk: %d\t hp: %d\t bonus: %.1f\t bonusHeal: %.1f\n",atk[2048-1], hp[2048-1], bonus[2048-1]*100, bonusHeal[2048-1]*100);
}

#include <stdio.h>
#include <time.h>
#include "include/base.h"
#include "include/count.h"

#define FISH_NUM 2048 
//本程序根据原神伤害乘区理论计算2048个相似练度珊瑚宫心海伤害 
//开Q平A第一击，天赋10，10，10，圣遗物水4或海染4，武器金箔或不灭月华
int main() {
	int atk[FISH_NUM], hp[FISH_NUM], totalAtk[FISH_NUM];
	double bonus[FISH_NUM], bonusHeal[FISH_NUM];
	double time_start, time_end;
	
	setAtk(atk, FISH_NUM);
	setHp(hp, FISH_NUM);
	setBonus(bonus, FISH_NUM);
	setBonusHp(bonusHeal, FISH_NUM);
	time_start = clock();
	
	countTotalAtk(atk, hp, bonus, bonusHeal, totalAtk, FISH_NUM);

	time_end = clock();
	printTotalAtk(totalAtk, FISH_NUM, atk, hp, bonus, bonusHeal);
	
	printf("Time used: %10.9f\n", (double) ( (time_end - time_start) / 1000.0) );

	return 0;
} 

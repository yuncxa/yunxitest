#include <stdio.h>

void setAtk(int atk[],int n) {
	for(int i = 0; i < n/4; i++) {
		atk[i] = 1300 + i/2;
	}
	for(int i = n/4; i < n/2; i++) {
		atk[i] = 1300 + (i - n/4) / 2;
	}
	for(int i = n/2; i < n - n/4; i++) {
		atk[i] = 1300 + (i - n/2) / 2;
	}
	for(int i = n - n/4; i < n; i++) {
		atk[i] = 1300 + (i - (n*3)/4) / 2;
	}
} 

void setHp(int hp[],int n) {
	for(int i = 0; i < n/4; i++) {
		hp[i] = 34500 + (n/4 - i) * 15;
	}
	for(int i = n/4; i < n/2; i++) {
		hp[i] = 34500 + (n/2 - i) * 15;
	}
	for(int i = n/2; i < n - n/4; i++) {
		hp[i] = 34500 + ((n*3)/4 - i) * 15;
	}
	for(int i = n - n/4; i < n; i++) {
		hp[i] = 34500 + (n - i) * 15;
	}
} 

void setBonus(double bonus[],int n) {
	for(int i = 0; i < n/4; i++) {
		bonus[i] = 0.754;
	}
	for(int i = n/4; i < n/2; i++) {
		bonus[i] = 0.904;
	}
	for(int i = n/2; i < n - n/4; i++) {
		bonus[i] = 0.754;
	}
	for(int i = n - n/4; i < n; i++) {
		bonus[i] = 0.904;
	}
} 
void setBonusHp(double bonusHeal[],int n) {
	for(int i = 0; i < n/4; i++) {
		bonusHeal[i] = 0.759;
	}
	for(int i = n/4; i < n/2; i++) {
		bonusHeal[i] = 0.609;
	}
	for(int i = n/2; i < n - n/4; i++) {
		bonusHeal[i] = 0.859 + 0.066;	//?????? 
	}
	for(int i = n - n/4; i < n; i++) {
		bonusHeal[i] = 0.709 + 0.066;
	}
} 



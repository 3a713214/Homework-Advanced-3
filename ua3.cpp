
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
long int money;
int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
printf("�п�Jmoney\n");
scanf("%ld",&money);

bonus1=1*100000*0.1;
bonus2=bonus1+100000*0.075;
bonus4=bonus2+200000*0.05;
bonus6=bonus4+200000*0.03;
bonus10=bonus6+400000*0.015;
	if(money<=100000)
		bonus=money*0.1;
	else if(money<=200000)
		bonus=bonus1+(money-100000)*0.075;
	else if(money<=400000)
		bonus=bonus2+(money-200000)*0.05;
	else if(money<=600000)
		bonus=bonus4+(money-400000)*0.03;
	else if(money<=1000000)
		bonus=bonus6+(money-600000)*0.015;
	else
		bonus=bonus10+(money-1000000)*0.01;
printf("bonus=%d\n",bonus);
system("PAUSE"); 
	return 0 ; 
} 


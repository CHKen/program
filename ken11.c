#include<stdio.h>
#include<math.h>
main(){
	int year,n;
	//p为现金，year为存入年限，n为年复利次数
	double p,q,F=0.0;//q为年利率
	
	printf("请输入存款金额:");
	scanf("%lf",&p);
	printf("请输入存入年限:");
	scanf("%d",&year);
	printf("请输入年复利次数:");
	scanf("%d",&n);
	printf("请输入年利率:");
	scanf("%lf",&q);

    F=p*pow((1+q/n),year*n);
	printf("复利终值为%lf:",F);
}
#include<stdio.h>
#include<math.h>
main(){
	int year,n;
	//pΪ�ֽ�yearΪ�������ޣ�nΪ�긴������
	double p,q,F=0.0;//qΪ������
	
	printf("����������:");
	scanf("%lf",&p);
	printf("�������������:");
	scanf("%d",&year);
	printf("�������긴������:");
	scanf("%d",&n);
	printf("������������:");
	scanf("%lf",&q);

    F=p*pow((1+q/n),year*n);
	printf("������ֵΪ%lf:",F);
}
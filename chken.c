#include<stdio.h>
#include<math.h>
int year,n;
double p,q,F=0.0;
void innit()
{
   printf("ע��:pΪ�ֽ�\n");
   printf(" yearΪ����\n");
   printf(" nΪ�긴������\n");
   printf(" qΪ������\n");
   printf(" FΪ�긴����ֵ\n");
}
void menu()
{
    printf("\t|------------------------------------|\n");
    printf("\t|           welcome                  |\n");
    printf("\t|------------------------------------|\n");
    printf("\t|        1����������                 |\n");
    printf("\t|        2����������                 |\n");
    printf("\t|        0���˳�ϵͳ                 |\n");
    printf("\t|------------------------------------|\n");
}
void compoundinterest(){
int I;
int ch;
B:printf("\t1����ȡ������ֵ\n");
printf("\t2�����ݸ�����ֵ��ȡ����\n");
printf("��ѡ����:");
scanf("%d",&I);
if(I==1)
{
printf("����������:");
scanf("%lf",&p);
printf("����������������:");
scanf("%d",&year);
printf("�������긴������:");
scanf("%d",&n);
printf("������������:");
scanf("%lf",&q);
F=p*pow((1+q/n),year*n);
printf("������ֵΪ%lf:",F);
}
if(I==2)
{
printf("�����븴����ֵ:");
scanf("%lf",&F);
printf("����������������:");
scanf("%d",&year);
printf("�������긴������:");
scanf("%d",&n);
printf("������������:");
scanf("%lf",&q);
p=F/(pow((1+q/n),year*n));
printf("������ֵΪ%lf:",p);
}
printf("\n\t�Ƿ�Ҫ���¼���?(1/0)\n");
scanf("%d",&ch);
if(ch==1)
{
goto B;
}
}
void simpleinterest()
{
int n;
int ch;
A:printf("\t1����ȡ������ֵ\n");
printf("\t2�����ݵ�����ֵ��ȡ����\n");
printf("��ѡ����:");
scanf("%d",&n);
if(n==1)
{

printf("����������:");
scanf("%lf",&p);
printf("����������������:");
scanf("%d",&year);
printf("������������:");
scanf("%lf",&q);

F=p*(1+q*year);
printf("������ֵΪ%lf\n:",F);}
if(n==2)
{
printf("�����뵥������ֵ:");
scanf("%lf",&F);
printf("����������������:");
scanf("%d",&year);
printf("������������:");
scanf("%lf",&q);

p=F/(1+q*year);
printf("����Ϊ%lf\n:",p);}
printf("\n\t�Ƿ�Ҫ���¼���?(1/0)\n");
scanf("%d",&ch);
if(ch==1)
{
goto A;
}}

main(){
int ch,n;
while(1){
if(n==0) break;
innit();
menu();
printf("please chose:");
scanf("%d",&ch);
switch(ch){
case 1:compoundinterest();break;
case 2:simpleinterest();break;
case 0:n=0;break;
}}}
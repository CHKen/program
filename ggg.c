#include<stdio.h>
#include<math.h>
int year,n;
double p,q,F=0.0;
void innit()
{
    printf("注释:p为现金\n");
    printf(" year为年限\n");
    printf(" n为年复利次数\n");
    printf(" q为年利率\n");
    printf(" F为年复利终值\n");
}
void menu()
{
    printf("\t|------------------------------------|\n");
    printf("\t|               welcome              |\n");
    printf("\t|------------------------------------|\n");
    printf("\t|          1、复利计算               |\n");
    printf("\t|          2、单利计算               |\n");
    printf("\t|          0、退出系统               |\n");
    printf("\t|------------------------------------|\n");
}
//复利计算
void compoundinterest(){
    int I;
    int ch;
B:printf("\t1、获取复利终值\n");
  printf("\t2、根据复利终值获取本金\n");
  printf("\t3、估算获得年终值的年限\n");
  printf("\t4、估算获得年终值的报酬率\n");
  printf("请选择功能<1~4>:");
  scanf("%d",&I);
  if(I==1)
  {
      printf("请输入存款金额:");
      scanf("%lf",&p);
      printf("请输入存入存蓄年限:");
      scanf("%d",&year);
      printf("请输入年复利次数:");
      scanf("%d",&n);
      printf("请输入年利率:");
      scanf("%lf",&q);
      F=p*pow((1+q/n),year*n);
      printf("复利终值为%lf:",F);
  }
  if(I==2)
  {
      printf("请输入复利终值:");
      scanf("%lf",&F);
      printf("请输入存入存蓄年限:");
      scanf("%d",&year);
      printf("请输入年复利次数:");
      scanf("%d",&n);
      printf("请输入年利率:");
      scanf("%lf",&q);
      p=F/(pow((1+q/n),year*n));
      printf("复利本金为%lf:",p);
  }
  if(I==3)
  {
          printf("请输入存款金额:");
      scanf("%lf",&p);
      printf("请输入年利率:");
      scanf("%lf",&q);
      printf("请输入年复利次数:");
      scanf("%d",&n);
      printf("请输入年终值:");
          scanf("%lf",&F);

     year=(int)(log(F/p)/log(1+q/n))/n;
     // F=p*(1+q*year);
      printf("年限为%d\n:",year);


  }
  if(I==4)
  {
      printf("请输入存款金额:");
      scanf("%lf",&p);
      printf("请输入存入存蓄年限:");
      scanf("%d",&year);
      printf("请输入年复利次数:");
      scanf("%d",&n);
       printf("请输入年终值:");
          scanf("%lf",&F);
      //F=p*pow((1+q/n),year*n);
          q=n*(pow(F/p,1.0/(year*n))-1);
      printf("复利的年利率为%lf:\n",q);

  }
  printf("\n\t是否要重新计算?(1/0)\n");
  scanf("%d",&ch);
  if(ch==1)
  {
      goto B;
  }
}

//单利计算
void simpleinterest()
{
    int n;
    int ch;
A:printf("\t1、获取单利终值\n");
  printf("\t2、根据单利终值获取本金\n");
  printf("\t3、估算获得年终值的年限\n");
  printf("\t4、估算获得年终值的报酬率\n");
  printf("请选择功能<1~4>:");
  scanf("%d",&n);
  if(n==1)
  {
      
      printf("请输入存款金额:");
      scanf("%lf",&p);
      printf("请输入存入存蓄年限:");
      scanf("%d",&year);
      printf("请输入年利率:");
      scanf("%lf",&q);
      
      F=p*(1+q*year);
      printf("单利终值为%lf\n:",F);}
  if(n==2)
  {
      printf("请输入单复利终值:");
      scanf("%lf",&F);
      printf("请输入存入存蓄年限:");
      scanf("%d",&year);
      printf("请输入年利率:");
      scanf("%lf",&q);
      
      p=F/(1+q*year);
      printf("本金为%lf\n:",p);}
  if(n==3){

          printf("请输入存款金额:");
      scanf("%lf",&p);
      printf("请输入年利率:");
      scanf("%lf",&q);
      
      printf("请输入年终值:");
          scanf("%lf",&F);

     year=(int)((F/p-1)/q);
     // F=p*(1+q*year);
      printf("年限为%d\n:",year);

  }
  if(n==4){
      printf("请输入存款金额:");
      scanf("%lf",&p);
      printf("请输入存入存蓄年限:");
      scanf("%d",&year);
       printf("请输入年终值:");
          scanf("%lf",&F);
      //F=p*pow((1+q/n),year*n);
          q=(F/p-1)/year;
      printf("单利的年利率为%lf:\n",q);


  }
  printf("\n\t是否要重新计算?(1/0)\n");
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
        printf("please chose<0~4>:");
        scanf("%d",&ch);
        switch(ch){
        case 1:compoundinterest();break;
        case 2:simpleinterest();break;
        case 0:n=0;break;
		}
	}
}

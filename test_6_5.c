#include <stdio.h>
int main()
{
//	int number, money, sum;
//	char confirm;好像没有实际意义
//	FILE *fp;
//	fp = fopen("hongbao.txt","w+");
//	printf("\n\t\t\t请输入您的红包个数:\t\t");
//	scanf("%d",&number);
//	printf("\n\t\t\t请输入您单个的红包金额:\t\t");
//	scanf("%d", &money);
//	getchar();
//	printf("\n\n\t\t\t确认（Y）\t\t取消（C）\n");
//	scanf("%c", &confirm);
//	printf("        您出了%d个红包，单个红包的金额为%d（元）钱\n", number, money);
//	fprintf(fp,"您出了%d个红包，单个红包金额%d（元）钱\n", number, money);
//	fclose(fp);
//	return 0;
char name[10],date[10];
FILE *yx;
yx= fopen("youxi.txt","a");
printf("\n\t\t\t请输入您的名字:\t\t");
gets(name);
printf("\n\t\t\t请输入日期：\t\t");
gets(date);
fprintf(yx,"您的名字为%s,今天的日期为%s\n",name,date);
printf("\n\t\t\t您的名字为%s,今天的日期为%s\n",name,date);
fclose(yx);
//system("pause");
return 0;
}

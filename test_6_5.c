#include <stdio.h>
int main()
{
//	int number, money, sum;
//	char confirm;
//	FILE *fp;
//	fp = fopen("hongbao.txt","w+");
//	printf("\n\t\t\t���������ĺ������:\t\t");
//	scanf("%d",&number);
//	printf("\n\t\t\t�������������ĺ�����:\t\t");
//	scanf("%d", &money);
//	getchar();
//	printf("\n\n\t\t\tȷ�ϣ�Y��\t\tȡ����C��\n");
//	scanf("%c", &confirm);
//	printf("        ������%d���������������Ľ��Ϊ%d��Ԫ��Ǯ\n", number, money);
//	fprintf(fp,"������%d�����������������%d��Ԫ��Ǯ\n", number, money);
//	fclose(fp);
//	return 0;
char name[10],date[10];
FILE *yx;
yx= fopen("youxi.txt","a");
printf("\n\t\t\t��������������:\t\t");
gets(name);
printf("\n\t\t\t���������ڣ�\t\t");
gets(date);
fprintf(yx,"��������Ϊ%s,���������Ϊ%s\n",name,date);
printf("\n\t\t\t��������Ϊ%s,���������Ϊ%s\n",name,date);
fclose(yx);
//system("pause");
return 0;
}

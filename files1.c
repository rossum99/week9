#include <stdio.h>
int main()
{FILE *fp, *fp1;
char ch[30];
fp=fopen("INPUT.txt","w");
printf("enter the content to insert into file");
scanf("%s",ch);
fprintf(fp,"%s",ch);
fclose(fp);
fp1=fopen("INPUT.txt","r");
char chr=getc(fp1);
printf("%c",chr);
fclose(fp1);
return 0;
}

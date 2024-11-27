#include <stdio.h>
int main()
{FILE *fp, *fp1,*fp2;
char ch[30],chr;
fp=fopen("first.txt","w");
printf("enter the content to insert into file");
scanf("%s",ch);
fprintf(fp,"%s",ch);
fclose(fp);
fp2=fopen("first.txt","r");
fp1=fopen("target.txt","w");
while((chr=getc(fp2))!=EOF)
{char chr1=getc(fp2);
putc(chr1,fp1);
}
fclose(fp2);
fclose(fp1);
return 0;
}

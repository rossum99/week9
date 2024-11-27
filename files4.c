#include <stdio.h>
int main()
{FILE *fp, *fp1;
char ch[30],chr;
int flag=1;
fp=fopen("comp1.txt","r");
fp1=fopen("comp2.txt","r");
while((chr=getc(fp))!=EOF)
char c1=getc(fp);
while((chr=getc(fp1))!=EOF)
char c2=getc(fp1)
if(c1!=c2)
{
flag=0;
break;}
else
;
if(flag==0)
printf("both files are not equal");
else
printf("both files are equal");
return 0;
}

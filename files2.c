#include <stdio.h>
int main()
{FILE *fp,*fpodd, *fpeven;
int i,t;
fp=fopen("DATA.txt","r");
fpodd=fopen("ODD.txt","w+");
fpeven=fopen("EVEN.txt","w+");
for(i=0;i<12;i+=2)
{
t=getw(fp);
if(t%2==0)
putw(t,fpeven);
else
putw(t,fpodd);
}
fclose(fp);
fclose(fpodd);
fclose(fpeven);
return 0;
}

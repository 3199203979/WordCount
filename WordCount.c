#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp;
	char ch,address[100];
	int i,b,n;
	i=b=n=0;
    printf("文件名：");
	scanf("%s",address);
	fp=fopen(address,"r");
	if(fp==NULL)
	{
		printf("can not open the file\n");
		exit(0);
	}
	ch=fgetc(fp);
	while (ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	rewind(fp);
	ch=fgetc(fp);
	while (ch!=EOF)
	{
		i++;      

		ch=fgetc(fp);     
		
	}rewind(fp);
   ch=fgetc(fp);
   if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')         
	   b++;
    while (ch!=EOF)
	{
		if(!(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'))         
		{	ch=fgetc(fp);
		    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
				b++;
		}
		else ch=fgetc(fp);
	}
	
	fclose(fp);
printf("字符数：%d",i,b);   
printf("单词数：%d",i,b);  
}


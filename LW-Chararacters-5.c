#include<stdio.h>
main()
{
	char ch[100];
	int i;
	printf("Enter the String-> ");
	scanf("%s",&ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(i==0)
		{
		   ch[i]=ch[i]-32;
		}
	
	}
	printf("Title Case->%s",ch);
}

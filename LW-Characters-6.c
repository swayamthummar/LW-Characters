#include<stdio.h>
main()
{
	int i;
	char a[100];
	printf("Enter a String->");
	scanf("%s",&a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
		    a[i]=a[i]-32;
	    }
		else if(a[i]>='A' && a[i]<='Z')
		{
		    a[i]=a[i]+32;
	    }
	}
	printf("Togglecase of String:-%s",a);
}

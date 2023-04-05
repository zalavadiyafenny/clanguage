#include<stdio.h>
main(){
	FILE *p,*p1;
	int a;
	printf("enter value of a :");
	scanf("%d",&a);
	
	p=fopen("demo.c","r");
	p1=fopen("demo2.xls","w");
	
	if(p==NULL && p1==NULL)
	{
		printf("you cannot open any file");
	}
	else
	{
		printf("you can open this file....");
		fprintf(p,"the value of a :%d",a);
		fscanf(p,"the value of a :%d",&a);
		fprintf(p1,"the value of a :%d",a);
	}
}

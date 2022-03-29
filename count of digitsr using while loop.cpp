#include<stdio.h>
int main()
{

int num=1,count=0,rem;

printf("\n Enter the number");
scanf("%d",&num);

while(num>0){
	
	num=num/10;
	count++;
	
}
printf("\n Number of digits %d",count);
return 0;
}

#include<stdio.h>
int main()
{int array[100],num,sum,i;
printf("How many number are you entering\n");
scanf("%d",&num);
printf("Enter the numbers\n");
for(i=0;i<num;i++)
{scanf("%d",&array[i]);
}
printf("The numbers in reverse order are\n");
for(i=num-1;i>=0;i--)
{printf("%d ",array[i]);
}
return 0;
}

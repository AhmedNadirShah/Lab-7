#include<stdio.h>
int main()
{int array[100],num,sum,i;
printf("Enter any 20 numbers\n");
for(i=0;i<20;i++)
{scanf("%d",&array[i]);
}
printf("The numbers in reverse order are\n");
for(i=19;i>=0;i--)
{printf("%d ",array[i]);
}
return 0;
}

#include<stdio.h>
int main()
{int array[100],i;
printf("Enter any 10 numbers\n");
for(i=0;i<10;i++)
{scanf("%d",&array[i]);
}
for(i=1;i<10;i++)
{printf("%d,",array[i]);
}
printf("%d",array[0]);
return 0;
}

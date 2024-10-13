#include<stdio.h>
int main()
{int array[100],sum,i;
printf("Enter any 15 numbers\n");
for(i=0;i<15;i++)
{scanf("%d",&array[i]);
}
printf("The sum of numbers is ");
for(i=0;i<15;i++)
{sum+=array[i];
}
printf("%d",sum);
return 0;
}


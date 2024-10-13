#include<stdio.h>
int main()
{int array[100], sum_array[100],i,j;
printf("Enter any 12 numbers\n");
for(i=0;i<12;i++)
{scanf("%d",&array[i]);
}
for(i=0;i<12;i+=2)
{sum_array[i/2]=array[i]+array[i+1];
}
for(i=0;i<6;i++)
{printf("%d, ",sum_array[i]);
}
return 0;
}

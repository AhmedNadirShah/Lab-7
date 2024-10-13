#include<stdio.h>
int main()
{int array[100],i;
printf("Enter the numbers\n");
for(i=0;i<30;i++)
{scanf("%d",&array[i]);
}
int max=array[0];
int min=array[0];
for(i=0;i<30;i++)
{if(max<=array[i])
max=array[i];
if(min>=array[i])
min=array[i];
}
printf("The maximum number is %d\n",max);
printf("The minimum number is %d\n",min);
return 0;
}

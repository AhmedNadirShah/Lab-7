#include<stdio.h>
int main()
{int array[100],num,i;
printf("How many number are you entering\n");
scanf("%d",&num);
printf("Enter the numbers\n");
for(i=0;i<num;i++)
{scanf("%d",&array[i]);
}
int max=array[0];
int min=array[0];
for(i=0;i<num;i++)
{if(max<=array[i])
max=array[i];
if(min>=array[i])
min=array[i];
}
printf("The maximum number is %d\n",max);
printf("The minimum number is %d\n",min);
return 0;
}

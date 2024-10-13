#include<stdio.h>
int main()
{int array[]={1,2,3,4,10,6,7,8},i,num;
printf("Enter any number and see if it is in the collection of numbers\n");
scanf("%d",&num);
for(i=0;i<9;i++)
{if(num==array[i])
{printf("%d found at index %d",num,i);
return 0;
}
}
printf("Number not found");
return 0;
}

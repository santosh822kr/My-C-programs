#include<stdio.h>
int main()
{int n,count,i=3,r;

printf("enter the value of n:");
scanf("%d",&n);

if(n>0)
{  printf("first %d prime nos. are:\n",n);
   printf("2\n");
}

for(count=2;count<=n;)
{  for(r=2;r<=i-1;r++)
   {if(i%r==0)
       break;
   }
    if(r==i)
    {printf("%d\n",i);
     count++;
    }
     i++;
}

return 0;
}

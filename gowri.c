#include <stdio.h>

int main(void)
{
int n;
printf("Enter the number");
scanf("%d",&n);
	switch(n)
	{
	     
	     case 1:printf("one");
		          break;
      case 2:printf("two");
		          break;
	     case 3:printf("three");
	            break;
	    case 4:printf("four");
		          break;
	    case 5:printf("five");
		          break;
	    case 6:printf("six");
		         break;
	   
	  
	   default:printf("ten");
		          break;
	}

	return 0;
}

#include <stdio.h>
int main()
{
  int i, n, flag = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  
  for (i=2; i<=n/2; i++)
  {
     if (n%i==0){
       flag=1;
       break;
     }
  }
  
  if (n==1){
    printf("1 is not a prime number");
  }
  else{
 if (flag==0)
  printf("%d is prime", n);
 else
  printf("%d is not prime", n);
  }
           
}

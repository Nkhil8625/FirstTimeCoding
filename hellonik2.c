#include <stdio.h>
int main()
{
    int n, i, ctr = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
       
        if(n%i == 0)
        {
            ctr = 1;
            break;
        }
    }
    if (n == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (ctr == 0)
          printf("%d is a prime number.", n);
        else
          printf("%d is not a prime number.", n);
    }
    
    return 0;
}


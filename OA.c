#include <stdio.h>

int sol(int, int);

int main()
{
    int m = 6;
    int n = 13;
    
    sol(m,n);
    
    return 0;
}

int sol(int a,  int b)
{
    if (a > 1 && b > 1)
    {
            
        if( a > b)
        {
            printf("square size is %d x %d \n", b, b);
            a = a-b;
            b = b;
        }
        
        else if( b > a)
        {
            printf("square size is %d x %d \n", a, a);
            b = b-a;
            a = a;
        }
        
       else if( a == b)
        {
            printf("square size is %d x %d \n", a, a);
            a = 0;
            b = 0;
        }
        
        sol(a,b);
    }
    
    else
    {
        if(a == 1)
        {
            for(int i = 0; i < b; i++)
            {
                printf("The size of the square is 1x1 \n");
            }
        }
        
        else if(b ==1)
        {
            for(int i = 0; i < a; i++)
            {
                printf("The size of the square is 1x1 \n");
            }
        }
        
        else
        {
            // Do nothing
        }
    }

    
    return -1;
}
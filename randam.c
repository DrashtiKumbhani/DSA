#include<stdio.h>  
#include<stdlib.h>  
#include<time.h>  
 
int main()  
{  
    int i;  
    srand(time(0));  
    printf("10 Random Numbers between 1 and 10=>\n");      
    for(i=0;i<10;i++)  
    {  
        printf("%d ",(rand() %10) + 1);  
    }  
    printf("\n");  
    return 0;  
}
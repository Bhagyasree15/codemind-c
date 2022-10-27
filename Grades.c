#include <stdio.h>
int main()
{
    int percentage,m1,m2,m3,m4,m5;
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    percentage=(((m1+m2+m3+m4+m5)*100)/500);
    if(percentage>=90)
    {
        printf("Grade A");
    }
    else if(percentage>=80)
    {
        printf("Grade B");
    }
    else if(percentage>=70) 
    {
        printf("Grade C");
    }
    else if(percentage>=60)
    {
        printf("Grade D");
    }
    else if(percentage>=40)
    {
        printf("Grade E");
    }
    else
    {
             printf("Grade F");
    }
    
}
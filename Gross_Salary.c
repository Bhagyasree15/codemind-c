#include <stdio.h>
int main()
{
    float gs1,gs2,gs3,bs,hra1,da1,hra2,da2,hra3,da3;
    scanf("%f",&bs);
    da1=(80*bs)/100;
    da2=(90*bs)/100;
    da3=(95*bs)/100;
    hra1=(20*bs)/100;
    hra2=(25*bs)/100;
    hra3=(30*bs)/100;
    gs1=hra1+da1+bs;
    gs2=hra2+da2+bs;
    gs3=da3+hra3+bs;
    if(bs<=10000)
    {
        printf("%.2f",gs1);
    }
    else if(bs<=20000)
    {
        printf("%.2f",gs2);
    }
    else
    {
        printf("%.2f",gs3);
    }
    
}
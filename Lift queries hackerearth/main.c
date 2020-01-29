#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp=0,num,t;
    int posa=0,posb=7;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        temp=num;
        if(abs(temp-posa)>abs(temp-posb))
        {
            printf("B\n");
            posb=temp;
        }
        else if(abs(temp-posa)<abs(temp-posb))
        {
            printf("A\n");
            posa=temp;
        }
        else if(abs(temp-posa)==abs(temp-posb))
        {
            printf("A\n");
            posa=temp;
        }
    }
    return 0;
}

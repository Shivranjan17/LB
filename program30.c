#include <stdio.h>

TicketPrice(int ino)
{
    if ((ino >= 0) && (ino <=4))
    {
        return 0;

    }
    else if((ino > 4) && (ino <= 10)) 
    {
        return 900;
    }
    else if((ino >10)&& (ino <= 50))
    {
        return 500;
    } 
    else if (ino > 50)
    {
        return 500;
    }

}
 int main ()
 {
    int iage = 0;
    int iRet = 0;
    printf("Enter the Age : \n");
    scanf("%d", &iage);

    iRet =  TicketPrice(iage);
    printf("Your Ticket price is :%d\n", iRet);


    return 0;
 }
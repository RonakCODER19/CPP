#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bord();
int main()
{
        bord();

        char ch[10];
        
    
       int random,unumber;
       srand(time(0));

        random = (rand()%100) +1;
        
         printf("\nEnter Your name :");
         gets(ch);
            printf("\nenter number and hit enter button :");
            scanf("%d",&unumber);
       

    while(random!=unumber)
    {
        if(random>unumber)
        {
            printf("My number is greater than  %d\n",unumber);
            printf("enter number :");
            scanf("%d",&unumber);
        }
        else if(random<unumber)
        {
            printf("My number is less than  %d\n",unumber);
              printf("enter number :");
            scanf("%d",&unumber);
        }
        if(random==unumber)  {
            printf(" Well Done ! it's %d",random);
        }
    } 
    
}     
void bord()
{
    printf("==================================\n");
    printf("|   Wellcome to guesing game !   |\n");
    printf("==================================");

}


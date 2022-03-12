#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("\nThis prgram decides if number is Even or Odd\n");
    printf("\nEnter a number : ");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
        printf("%d is even",num);
        break;
        case 1:
        printf("%d is odd",num);
        break;
    }        
    return 0;
}

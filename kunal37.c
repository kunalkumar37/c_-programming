//write a program c to enter a week number aand display the corressponding week day using switch case statement
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number you want\n");
    scanf("%d\n",&a);
    switch (int)
    {
    case 1:
        monday();
        break;
        case 2:
        tuesday();
        break;
        case 3:
        wednesday();
        break;
        case 4:
        thrusday();
        break;
        case 5:
        friday();
        break;
        case 6:
        saturday();
        break;
        case 7:
        sunday();
        break;



    
    default:
    printf("The number you enter is not valid");
        break;
    }
}
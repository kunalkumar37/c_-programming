#include<stdio.h>
int main()
{
    float a,b,c,per;
    printf ("enter the marks you get in test\n");
    scanf("%f%f%f",&a,&b,&c);
    per = (((a+b+c)*100)/300);
    printf("percentage you got=%f\n",per);
    if (per>90)
    {
        printf("you got grade A+");
    }
    else if (80<per<90)
        {
            printf("you got grade A");
        }
        else if (per>70 && per<80)
            {
                printf("you got grade B");
            }
            else if (per>60&&per<70)
                {
                    printf("you got grade C");
                }
                else if (per>50 && per<60)
                    {
                        printf("you got grade D");
                    }
                    else
                    {
                        printf("Dude! you FAIL");
                    }
                    
}
                    
                
                
                
            
            
            
        
        
        
    
    
    



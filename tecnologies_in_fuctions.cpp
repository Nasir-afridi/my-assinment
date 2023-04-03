#include<stdio.h>
    void CIT();
    void MT();
    void ATD();
    void ET();
    void CT();

    void CIT(){
        printf("this is computer information tecnology:\n");
    }
    void MT(){
        printf("this is mechanical tecnology:\n");
    }
    void ATD(){
       printf("this is auto diesel tecnology:\n");
    }
    void ET(){
        printf("this is electrical tecnology:\n");
    }
    void CT(){
        printf("this is civil tecnology\n");
    }
    int main(){
        int number;
        printf("\n\nthis is computer informaton tecnology:\n");
        printf("this is mechanical tecnology:\n") ;
         printf("this is auto diesel tecnology:\n");
         printf("this is electrical tecnology:\n");
         printf("this is civil tecnology:\n\n");
         printf("enter your number:");
       scanf("%s",&number);

        switch(number){
        case '1':{
            CIT();   
         break;
         }
         case '2':
         {
            MT();
         break;
         }
         
         case '3':
         {
             ATD();
         break;
         }
        
         case '4':
         {
            ET();
         break;
         }
         
         case '5':
         {
             CT();
         break;
         }
        
         default:
         {
            printf("recheck your entered number:\n");
            }
        
        }
        printf("written by M.Nasir:\n\n");
        return 0;
        }

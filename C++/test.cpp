#include <stdio.h>
#include <string.h>

void lines(void);

int main()
    {
    
    char prodCode, ans = 'Y', ans2;
    int quantity;
    int change, coh, prodPrice;
    int totalPrice = 0;
    char username[20];
    char password[20];

   
    printf("Enter your username: "); 
    scanf("%s",&username); 
 
    printf("Enter your password: "); 
    scanf("%s",&password);
    while(strcmp(username,"DLSU")==0 &&strcmp(password,"animo")==0);
    {

 
        printf("\nLogin Success!");

    do{    
            printf("\nHi! Welcome to AniMart!");
            lines();

            printf("\n------Beverages--------------------------");
            printf("\na. Fresh Milk 1L---------------P110");
            printf("\nb. Apple Juice 1L--------------P180");
            printf("\nc. Coca Cola 1.5L--------------P60");
    
            printf("\n------Canned Goods-----------------------");
            printf("\nd. Spam 340g-------------------P190");
            printf("\ne. OX & PALM Corned Beef-------P250");
            printf("\nf. Century Tuna Hot & Spicy----P60");
            printf("\ng. Vienna Sausage--------------P45");

            printf("\n------Paper Products---------------------");
            printf("\nh. Toilet Paper (9 rolls)------P250");
            printf("\ni. Paper Towel-----------------P60");
            printf("\nj. Facial Tissue---------------P45");
            lines();
    
    do{
           
                printf("\nEnter the item code: ");
        
                scanf(" %c", &prodCode);
        
                printf("Enter quantity: ");
        
                scanf("%d", &quantity);
                

        
                switch(prodCode){
        
                case 'A': case 'a':
                    prodPrice = 110;
                    printf("\nYou bought %d (Fresh Milk 1L) for Php%d.", quantity, prodPrice * quantity);
                break;
    
                case 'B': case 'b':
                    prodPrice = 180;
                    printf("\nYou bought %d (Apple Juice 1L) for Php%d.", quantity, prodPrice * quantity);
                break;
    
                case 'C': case 'c':
                    prodPrice = 60;
                    printf("\nYou bought %d (Coca Cola 1.5L) for Php%d.", quantity, prodPrice * quantity);
                break;
    
                case 'D': case 'd':
                    prodPrice = 190;
                    printf("\nYou bought %d (Spam 340g) for Php%d.", quantity, prodPrice * quantity);
                break;
        
                case 'E': case 'e':
                    prodPrice = 250;
                    printf("\nYou bought %d (OX & PALM Corned Beef) for Php%d.", quantity, prodPrice * quantity);
                break;
    
                case 'F': case 'f':
                    prodPrice = 60;
                    printf("\nYou bought %d (Century Tuna Hot & Spicy) for Php%d.", quantity, prodPrice * quantity);
                break;
    
                case 'G': case 'g':
                    prodPrice = 45;
                    printf("\nYou bought %d (Vienna Sausage) for Php%d.", quantity, prodPrice * quantity);
                break;
    
                case 'H': case 'h':
                    prodPrice = 250;
                    printf("\nYou bought %d (Toilet Paper - 9 rolls) for Php%d.", quantity, prodPrice * quantity);
                break;
        
                case 'I': case 'i':
                    prodPrice = 60;
                    printf("\nYou bought %d (Paper Towel) for Php%d.", quantity, prodPrice * quantity);
                break;
    
                case 'J': case 'j':
                    prodPrice = 45;
                    printf("\nYou bought %d (Facial Tissue) for Php%d.", quantity, prodPrice * quantity);
                break;
                
                default:
                    printf("\nINVALID PRODUCT CODE");
                
                }
        
                totalPrice += prodPrice * quantity;
        
                printf("\nWould you like to make a transaction again [Y/N]: ");
                scanf(" %c", &ans);                
                

    
                }while(ans == 'Y' || ans == 'y');
                
                lines();
                printf("\nHere's your total bill: Php%d.", totalPrice);
                printf("\nEnter cash on hand: ");
                scanf("%d", &coh);

    
                if(coh >= totalPrice){
                change = coh - totalPrice;  
                printf("\nYour change is: Php%d.", change);
    
                printf("\n\nThank you for coming!");
                }
                else if (coh < totalPrice){
                change = totalPrice - coh;
                printf("You need to add: Php%d", change);
                }
                else {
                printf("No transaction");
                }
                }while(ans == 'Y' || ans == 'y');
                printf("\nIs there another customer? [Y/N]: ");
                scanf(" %c", &ans);
                
            
     }
        printf("\nEither the username or the password is incorrect."); 
        return 0;
        }
    



    void lines(void) {
    printf("\n\n----------------------------------------------------\n");


    }



#include <stdio.h>
#include <string.h>

void lines(void);
void separatebill (int *a, int *b, int *c);


int main()
    {
    
    char prodCode, ans = 'Y', newcustomer;
    int quantity;
    int change, coh, prodPrice;
    int totalincome =0;
    int totalPrice = 0;
    int a,b,c,d,e,f,g,h,i,j =20;
    int ans2 = 1;
    char username[20];
    char password[20];
    char ch;


    printf("Press ENTER key to start.\n");    
    //here also if you press any other key will wait till pressing ENTER
    scanf("%c",&ch);

    printf("Enter your username: "); 
    scanf("%s",&username); 
 
    printf("Enter your password: "); 
    scanf("%s",&password);

        while(strcmp(username,"DLSU")==0 &&strcmp(password,"animo")==0)
        { 
 
        printf("\nLogin Success!");

        do{
            printf("\nHi! Welcome to AniMart!");
            lines();

            printf("\n------Beverages------------------------------Available in Stock");
            printf("\na. Fresh Milk 1L---------------P110-------------------%c", a);
            printf("\nb. Apple Juice 1L--------------P180-------------------%d", stock);
            printf("\nc. Coca Cola 1.5L--------------P60--------------------%d", stock);
    
            printf("\n------Canned Goods---------------------------Available in Stock");
            printf("\nd. Spam 340g-------------------P190-------------------%d", stock);
            printf("\ne. OX & PALM Corned Beef-------P250-------------------%d", stock);
            printf("\nf. Century Tuna Hot & Spicy----P60--------------------%d", stock);
            printf("\ng. Vienna Sausage--------------P45--------------------%d", stock);

            printf("\n------Paper Products-------------------------Available in Stock");
            printf("\nh. Toilet Paper (9 rolls)------P250-------------------%d", stock);
            printf("\ni. Paper Towel-----------------P60--------------------%d", stock);
            printf("\nj. Facial Tissue---------------P45--------------------%d", stock);
            lines();
    
    do{
                printf("\nEnter the item code: ");
        
                scanf(" %c", &prodCode);
        
                printf("Enter quantity: ");
        
                scanf("%d", &quantity);
                
                stock = stock - quantity;
        
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

            separatebill(&quantity, &prodPrice, &totalPrice); 

            
            
            
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

                totalincome = totalPrice + totalincome;
                totalPrice = 0;
            
                
                         
                printf("\n\nIs there another customer? [Y/N]: ");
                scanf(" %c", &newcustomer);



                switch(newcustomer){

                    case 'Y' : case 'y':
                        ans2 = ans2 + 1;
                
                        
                    break;

                    case 'N' : case 'n':
                    printf("\nCongratulations! You had %d customer/s today and your total income for the day is %dPhp", ans2, totalincome);   
                    return 0;  
                    }
                }while(ans2 > 1);

                
                } 
                
        printf("\nEither the username or the password is incorrect."); 
        return 0;
    }
    //testing(&quantity, &prodPrice, &totalPrice); 
    void separatebill (int *a, int *b, int *c){ 
               *c += *b * *a;
    }



    
    



    void lines(void) {
    printf("\n\n----------------------------------------------------\n");


    }



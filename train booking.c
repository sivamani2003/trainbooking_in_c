#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
int pmt()
{
    int i,id,upi,bank,login,bill,payment,msr,money;
    char holder[20];
    char card[20];
    char validity[20];
    char cvv[20];
    printf("\nSELECT ONE OF THE PAYMENT OPTIONS\n");
    printf("1)CREDIT/DEBIT\n2)UPI\n3)NET BANKING: ");
    scanf("%d",&msr);
    
    switch(msr)
    {
        card :
        case 1: printf("\nCARD NUMBER: ");
                scanf(" %[^\n]",card);
                if(strlen(card)>16 || strlen(card)<16)
                {
                    printf("Invalid card number");
                    goto card;
                }
                for(i=0; card[i] != '\0'; i++)
                {
                    if(isdigit(card[i]) ==0)
                    {
                        printf("Invalid card number");
                        goto card;
                    }
                }
                holder :
                printf("\nNAME OF THE CARD HOLDER: ");
                scanf(" %[^\n]",holder);
                if(strlen(holder)>20 || strlen(holder)<3)
                {
                    printf("Invalid name");
                    goto holder;
                }
                for(i=0; holder[i] != '\0'; i++)
                 {
                    if(isalpha(holder[i]) ==0)
                    {
                        printf("Invalid card number");
                        goto holder;
                    }
                }
                validity :
                printf("\nVALIDITY (MM/YY): ");
                scanf(" %[^\n]",validity);
                if(strlen(validity)>4|| strlen(card)<4)
                {
                    printf("Invalid validity");
                    goto validity;
                }
                for(i=0; validity[i] != '\0'; i++)
                 {
                    if(isdigit(validity[i]) ==0)
                    {
                        printf("Invalid card number");
                        goto validity;
                    }
                }
                cvv :
                printf("\nCVV: ");
                scanf(" %[^\n]",cvv);
                if(strlen(cvv)>3|| strlen(cvv)<3)
                {
                    printf("Invalid name");
                    goto cvv;
                }
                for(i=0; cvv[i] != '\0'; i++)
                 {
                    if(isdigit(cvv[i]) ==0)
                    {
                        printf("Invalid card number");
                        goto cvv;
                    }
                }
                printf("Enter the amount on the recepit :");
                scanf("%d",&money);
                break;
                
        case 2: printf("\nENTER UPI ID:");
                scanf("%d",&id);
                printf("\nOPEN THE UPI MOBILE APP AND APPROVE THE PAYMENT\n");
                break;
                
        case 3: printf("\nSELECT ONE OF THE BANK");
                printf("\n1)AXIS BANK\n2)HDFC BANK\n3)ICIC BANK\n4)SBI BANK\n5)KOTAK BANK: ");
                scanf("%d",&bank);
                printf("\nENTER THE LOGIN ID: ");
                scanf("%d",&login);
                printf("\nPAY THE BILL\n");
                break;
                
    }
    
}

  
// Defining Structure
typedef struct mynode 
{
    int age;
    int day;
    int month;
    int year;
    int train;
    int seat;       
    int CLASS;
    char name[20];
    char phn[20];
    char aadhar[20];
    char fcity[20];
    char dcity[20];
    char Train[20];
    char Class[20];
    char Seat[20];
} Node;
struct mynode tk[120];
  
void details(int);
int seat(int);
int cal(int, int, int);
void bill(int, int);
int ticket( int );
int calculation(int, int, int, int);
  
// Global variables
char source[20], des[20], train[40];
char station[40], cla[40];
int cost2=0,time1, time2, a[55];
int from,dest; 

int result=1;
int i,j;
// Driver Code
int main()
{  
    
    int result,pass_no,i;
  printf("\n\n************************************************************************************************************");
  printf("\n\n                                    WELCOME TO FRIENDS BOOKING");
  printf("\n\n************************************************************************************************************");
  printf("\n\n                          THE PASSENGER MUST NEED COVID NEGATIVE TEST REPORT");
  printf("\n\n************************************************************************************************************");
  printf("\n\nTHE DATE MUST BE GREATER OR EQUAL TO CURRENT DATE");
 day :
	   printf("\n\nENTER THE DATE OF THE TRIP: ");
	   scanf("%d",&tk[1].day);
	if(tk[1].day<1|| tk[1].day>31)
	{
	    system("clear");
	    printf("enter the date with in 1 to 31 only");
	    goto day;
	}
	printf("\nENTER THE MONTH OF THE TRIP: ");
	scanf("%d",&tk[1].month);
	if(tk[1].month<1 || tk[1].month>12)
	{
	    system("clear");
	    printf("please enter month from 1 to 12 only");
	    goto day;
	}

	printf("\nENTER THE YEAR OF THE TRIP:  ");
	scanf("%d",&tk[1].year);
	if(tk[1].year<2022)
	{
	    system("clear");
	    printf("enter the year above 2022 only");
	    goto day;
	}
  selection :
  from :
  printf ("\nSELECT STARTING CITY:\n");
  printf ("1) Vijaywada \n2) Hyderabad \n3) Delhi \n4) Mumbai \n5) Chennai \n6) Kolkata \n7) Benguluru \n8) Pune \n9) Viskapatnam \n");
  scanf ("%d", &from);
  if (from == 1)      strcpy(tk[1].fcity,"Vijaywada");
  else if (from == 2) strcpy(tk[1].fcity,"Hyderabad");
  else if (from == 3) strcpy(tk[1].fcity,"Delhi");
  else if (from == 4) strcpy(tk[1].fcity,"Mumbai");
  else if (from == 5) strcpy(tk[1].fcity,"Chennai");
  else if (from == 6) strcpy(tk[1].fcity,"Kolkata");
  else if (from == 7) strcpy(tk[1].fcity,"Benguluru");
  else if (from == 8) strcpy(tk[1].fcity,"Pune");
  else if (from == 9)strcpy(tk[1].fcity,"Visakapatnam");
  else {
      system("clear");
      printf("Invalid, please select the boarding city again");
      goto from;
  }
  printf("\n The selected city = %s",tk[1].fcity);
  
  dest :
  printf ("\nSELECT THE DESTINATION:\n");
  printf ("1) Vijayawada \n2) Hyderabad \n3) Delhi \n4) Mumbai \n5) Chennai \n6) Kolkata \n7) Benguluru \n8) Pune \n9) Visakapatnam \n");
  scanf ("%d", &dest);
  if (dest == 1)      strcpy(tk[1].dcity,"Vijayawada");
  else if (dest == 2) strcpy(tk[1].dcity,"Hyderabad");
  else if (dest == 3) strcpy(tk[1].dcity,"Delhi");
  else if (dest == 4) strcpy(tk[1].dcity,"Mumbai");
  else if (dest == 5) strcpy(tk[1].dcity,"Chennai");
  else if (dest == 6) strcpy(tk[1].dcity,"Kolkata");
  else if (dest == 7) strcpy(tk[1].dcity,"Benguluru");
  else if (dest == 8) strcpy(tk[1].dcity,"pune");
  else if (dest == 9)strcpy(tk[1].dcity,"Visakapatnam");
  else {
      system("clear");
      printf("Invalid, please select the destination city again");
      goto dest;
  }
  printf("\n The selected city = %s",tk[1].dcity);
  if(from == dest)
  {
      system("clear");
      printf("Invalid,Both the boarding and destination are same, please select again");
      goto selection;
  }

  else if(from!=dest) 
  {
    if(from<=5)
   {
    if (dest<=5) 
    {
        train :
        printf ("\nAVAILABLE TRAINS ARE:");
        printf ("\n1) Pinakini , 6:00am \n2) Rajadani , 10:00pm\n3) Intercity , 4:30pm\n");
        scanf ("%d", &tk[1].train);
        if (tk[1].train == 1)
        {
            strcpy(tk[1].Train,"Pinakini , 6:00am");
        }
        else if (tk[1].train == 2)
        {
            strcpy(tk[1].Train,"Rajadani , 10:00pm");
        }
        else if(tk[1].train == 3)
        {
            strcpy(tk[1].Train,"Interciry , 4:30pm");
        }
        else
        {
            system("clear");
            printf("\nThe selected option is invalid,Plase select again");
            goto train;
            return 0;
        }
    }
    
     if (dest>=6)
     {
         train1 :
        printf ("\nAVAILABLE TRAINS ARE:");
        printf ("\n1) Konark 7:40am\n2) Sangamithra 11:45pm\n3) Gangakaveri 9:50pm\n");
        scanf ("%d", &tk[1].train);
        if (tk[1].train == 1)
        {
            strcpy(tk[1].Train,"Konark 7:40am");
        }
        else if (tk[1].train == 2)
        {
            strcpy(tk[1].Train,"Sangamithra 11:45pm");
        }
        else if(tk[1].train == 3)
        {
            strcpy(tk[1].Train,"Gangakaveri 9:50pm");
        }
        else
        { 
            system("clear");
            printf("\nThe selected option is invalid,Plase select again");
            goto train1;
            return 0;
        }
     }
   }

  else 
  {
    if (dest<=5) 
    {
        train2 :
        printf ("\nAVAILABLE TRAINS ARE:");
        printf ("\n1) Krishna  11:00am\n2) GrandTrunk 2:30am\n3) MumbaiLLT 1:25pm\n");
        scanf ("%d", &tk[1].train);
        if (tk[1].train == 1)
        {
            strcpy(tk[1].Train,"Krishna 11:00am");
        }
        else if (tk[1].train == 2)
        {
            strcpy(tk[1].Train,"GrandTrunk 2:30am");
        }
        else if(tk[1].train ==3)
        {
            strcpy(tk[1].Train,"MumbaiLLT 1:25pm");
        }
        else
        {
            system("clear");
            printf("\nThe selected option is invalid,Plase select again");
            goto train2;
            return 0;
        }
    }
    
    if (dest>=6)
    {
        train3 :
        printf ("\nAVAILABLE TRAINS ARE:");
        printf ("\n1) Udayan 8:40pm \n2) Mysuru 10:45pm\n3) Rajkot 7:00am\n");
        scanf ("%d", &tk[1].train);
        if (tk[1].train == 1)
        {
            strcpy(tk[1].Train,"Udayan 8:40pm ");
        }
        else if (tk[1].train == 2)
        {
            strcpy(tk[1].Train,"Mysuru 10:45pm");
        }
        else if(tk[1].train)
        {
            strcpy(tk[1].Train,"Rajkot 7:00am");
        }
        else
        {
            system("clear");
            printf("\nThe selected option is invalid,Plase select again");
            goto train3;
            return 0;
        }
     }
   }
   printf("ENTER THE NUMBER OF TICKETS TO BE BOOKED:\n");
   scanf("%d",&pass_no);
   for(i=1;i<=pass_no;i++){
        int Chaircar = 100,ACchaircar=200,Sleeper =300,ACsleeper3a=400,ACsleeper2a=500,ACsleeper1a=600;
    CLass :
    printf("\npassenger no.%d",i);
    printf ("\nCHOOSE THE CLASS OF TRAINS:\n");
    printf("1) CHAIR CAR - %d \n2) A/C CHAIR CAR - %d\n3) SLEEPER - %d\n4) A/C SLEEPER 3A - %d\n5) A/C SLEEPER 2A - %d\n6) A/C SLEEPER 1A - %d\n",Chaircar,ACchaircar,Sleeper,ACsleeper3a,ACsleeper2a,ACsleeper1a);
    scanf("%d",&tk[1].CLASS);
    if((tk[1].CLASS) <= 2)
    {
        if((tk[1].CLASS) == 1)
        {
            strcpy((tk[1].Class)," CHAIR CAR");
        }
        else if((tk[1].CLASS)==2)
        {
            strcpy((tk[1].Class)," A/C CHAIR CAR");
        }
    
    }
    
    else
    {
        if((tk[1].CLASS) == 3)
        {
            strcpy(tk[1].Class," SLEEPR");
        }  
        else if(tk[1].CLASS == 4)
        {
            strcpy(tk[1].Class," A/C SLEEPER 3A");
        }  
        else if(tk[1].CLASS==5)
        {
            strcpy(tk[1].Class," A/C SLEEPER 2A");
        }  
        else if(tk[1].CLASS==6)
        {
            strcpy(tk[1].Class," A/C SLEEPER 1A");
        }
        else 
        {
            system("clear");
            printf("\nThe selected option is invalid,Plase select again");
            goto CLass;
            return 0;
        }
    }    
        
        seat :
        printf ("\nCHOOSE THE PREFERENCE OF SEATING:");
        printf("\n1) LOWER\n2) MIDDLE \n3) UPPER \n4) SIDE LOWER\n5) SIDE UPPER\n");
        scanf ("%d", &tk[1].seat);
        if (tk[1].seat == 1)
        {
            strcpy(tk[1].Seat,"LOWER");
        }
        else if (tk[1].seat == 2)
        {
            strcpy(tk[1].Seat,"MIDDLE");
        }else if(tk[1].seat == 3)
        {
            strcpy(tk[1].Seat,"UPPER");
        }
        else if (tk[1].seat == 4)
        {
            strcpy(tk[1].Seat,"SIDE LOWER");
        }
        else if(tk[1].seat == 5)
        {
            strcpy(tk[1].Seat,"SIDE UPPER");
        }
        else if(tk[1].seat>5)
        {
            system("clear");
            printf("\nThe selected option is invalid,please select again\n");
            goto seat;
            return 0;
        }
    

 
   //cost2=calulation(dest,from,tk[1].age,tk[1].CLASS);
    ticket(cost2);
    }
  }
    return 0;
}


int ticket(int cost2)
{
    
    name:
     printf ("Enter name of passenger:");
     fflush(stdin);
     scanf(" %[^\n]",tk[1].name);
     if(strlen (tk[1].name)>20 || strlen(tk[1].name)<3)
     {
         system("clear");
         printf("\n Invalid ,Max range of first name is 20 & min is 2\n");
         goto name;
       
     }
     for(i=0; tk[1].name[i] != '\0'; i++)
     {
         if(isalpha(tk[1].name[i]) ==0)
         {
             system("clear");
             printf("\n Invalid ,name contains invalid characher \n");
             goto name;
           
         }
     }
     age :
     printf("\nThe age must be postive not be negative");
     printf ("\n\nEnter age of poassenger:");
     scanf (" %d",&tk[1].age);
     phn :
     printf ("\n\nEnter contact number of passenger :");
     fflush(stdin);
     scanf(" %[^\n]",tk[1].phn);
     if(strlen(tk[1].phn)>10||strlen(tk[1].phn)<10)
	  {  
	         system("clear");  
	    	 printf("ENTER A VALID PHONE NUMBER\n");
			 goto phn;
	  }
	 for(i=0; tk[1].phn[i] != '\0'; i++)
	 {
         if(isdigit(tk[1].phn[i]) ==0)
         {
             system("clear");
             printf("\n Invalid ,phone number contains invalid characher \n");
             goto phn;
           
         }
     }
    aadhar :
     printf ("\n\nEnter aadhar number of passenger :");
     fflush(stdin);
     scanf(" %[^\n]",tk[1].aadhar);
     if(strlen(tk[1].aadhar)>12||strlen(tk[1].aadhar)<12)
     {  
	    	 printf("ENTER A VALID AADHAR NUMBER\n");
			 goto aadhar;
		   }
	 for(i=0; tk[1].aadhar[i] != '\0'; i++)
	 {
         if(isdigit(tk[1].aadhar[i]) ==0)
         {
             system("clear");
             printf("\n Invalid ,AADHAR NUMBER contains invalid characher \n");
             goto aadhar;
           
         }
     }	   
        
     printf("\n\n************************************************************************************************************");
     printf ("\n\t\t\t\tRECEIEPT");
     printf("\n\n************************************************************************************************************");
     printf("\n\nThe name of the passenger is \t\t\t:%s",tk[1].name);
     printf("\n\nThe age of the passenger is \t\t\t:%d",tk[1].age);
     printf("\n\nThe contact number of passenger is \t\t:%s",tk[1].phn);
     printf("\n\nThe aadhar number of passenger is \t\t:%s",tk[1].aadhar);
     printf("\n\nThe selected date is \t\t\t\t:%d-%d-%d",tk[1].day,tk[1].month,tk[1].year);
     printf("\n\nSelected staring city is\t\t\t:%s",tk[1].fcity);
     printf("\n\nselected destination is\t\t\t\t:%s",tk[1].dcity);
     printf("\n\nThe selected train \t\t\t\t:%s",tk[1].Train);
     printf("\n\nThe selected class of seat \t\t\t:%s",tk[1].Class);
     printf("\n\nThe selcted preference of seating\t\t:%s",tk[1].Seat);
     printf ("\n\nCOST OF TRAVELLING \t\t\t\t:%d\n\n",calculation(dest,from,tk[1].age,tk[1].CLASS));
    pmt();
}

int calculation(int dest,int from,int age,int CLASS)
{
    int a,cost1,cost2;
    a= dest - from;
    if(a<0)
    {
        a = a*(-1);
    }
    cost1 =(a * 100) + (CLASS * 100);

    if (age<=5)
    {
      cost2 = 0;
    }
    else if (age>5 && age<60)
    {
      cost2 = cost1;
    }
   
    else
    {
      cost2 = cost1-200;
    }
    return (cost2);
}

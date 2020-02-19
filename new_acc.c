#include "common.h"

void new_acc()
{
    int choice;
    FILE *ptr;
    char temp;

    ptr=fopen("record.dat", "a+");
    account_no:
    system("clear");
    printf("\t\t\t\xB2\xB2\xB2  ADD RECORD  \xB2\xB2\xB2\xB2\x0A");
    printf("\n\n\nEnter today's date(dd/mm/yyyy):");
    scanf("%d/%d/%d", &add.deposit.day, &add.deposit.month, &add.deposit.year);
    printf("\nEnter the account number: ");
    scanf("%16s", &check.acc_no);
    
    while(fscanf(ptr, "%s %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n", &add.acc_no, add.name, &add.dob.day, &add.dob.month, &add.dob.year, &add.age, add.address, add.citizenship, add.phone, add.acc_type, &add.amt, &add.deposit.day, &add.deposit.month, &add.deposit.year) != EOF)
    {

        if(strcmp(check.acc_no, add.acc_no) == 0)
        {
            printf("Account no. already in use!");
            fordelay(10000000);
                goto account_no;
        }
    }
        strcpy(add.acc_no, check.acc_no);
        scanf("%c", &temp); // for clearing buffer
        printf("\nEnter the name:");
        scanf("%[^\n]", add.name);
        scanf("%c", &temp); // for clearing input buffer
        printf("\nEnter the date of birth(dd/mm/yyyy):");
        scanf("%d/%d/%d", &add.dob.day, &add.dob.month, &add.dob.year);
        printf("\nEnter the age:");
        scanf("%d", &add.age);
        scanf("%c", &temp); // for clearing input buffer
        printf("\nEnter the address:");
        scanf("%[^\n]", add.address);
        scanf("%c", &temp); // for clearing input buffer
        printf("\nEnter your citizenship (Indian or NRI):");
        scanf("%[^\n]", add.citizenship);
        scanf("%c", &temp); // for clearing input buffer
        printf("\nEnter your contact no.:");
        scanf("%[^\n]", add.phone);
        scanf("%c", &temp); // for clearing input buffer
        printf("\nEnter the amount to deposit:Rs.");
        scanf("%lf", &add.amt);
        printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed(no. of years)\n\tEnter your choice:");
        scanf("%s", add.acc_type);

            fprintf(ptr, "%s %s %d/%d/%d %d %s %s %s %s %.2lf %d/%d/%d\n", add.acc_no, add.name, add.dob.day, add.dob.month, add.dob.year, add.age, add.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposit.day, add.deposit.month, add.deposit.year);

        fclose(ptr);
        printf("\nAccount created successfully!");
        add_invalid:
        printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d", &main_exit);
        system("clear");
        if(main_exit == 1)
            menu();
        else if(main_exit == 0)
            close();
        else
            {
                printf("\nInvalid!\a");
                goto add_invalid;
            }   

    
    
}


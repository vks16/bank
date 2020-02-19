#include "common.h"

void view_list()
{
    FILE *view;
    view = fopen("record.dat", "r");
    int test = 0;
    system("clear");
    printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");
    // while(fscanf(view, "%s %s %d/%d/%d %d %s %s %s %s %.2lf %d/%d/%d\n",add.acc_no, add.name, add.dob.day, add.dob.month, add.dob.year, add.age, add.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposit.day, add.deposit.month, add.deposit.year)== 14)
    while(fscanf(view, "%s %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n", add.acc_no, add.name, &add.dob.day, &add.dob.month, &add.dob.year, &add.age, add.address, add.citizenship, add.phone, add.acc_type, &add.amt, &add.deposit.day, &add.deposit.month, &add.deposit.year) != EOF)
    {
        
        printf("%s\t|%s\t\t\t|%s\t\t\t|%s\n", add.acc_no, add.name, add.address, add.phone);
        test++;
    }

    fclose(view);
    if(test==0)
    {
        system("clear");
        puts("NO RECORDS!!");
    }

    view_list_invalid:
    printf("\n\nEnter 1 to go to main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("clear");
    if(main_exit == 1)
    {
        menu();
    }
    else if(main_exit == 0)
    {
        close();
    }
    else{
        goto view_list_invalid;
    }
}
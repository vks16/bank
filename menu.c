#include "common.h"

void menu(void)
{
    int choice;
    // system("cls");
    // system("color 9");
    printf("\n\n\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Create new account\n\t\t2.Update information of existing account\n\t\t3.For transactions\n\t\t4.Check the details of existing account\n\t\t5.Removing existing account\n\t\t6.View customer's list\n\t\t7.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d", &choice);

    // system("cls");
    switch(choice)
    {
        case 1:new_acc();
        break;
        case 2:
        case 3:
        case 4:
        case 5:menu();break;
        case 6:view_list();
	    break;
        case 7:close();


    }
}

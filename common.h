#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i, j;
int main_exit;

typedef struct date{
    int day,month,year;
} date;

typedef struct 
{
    char name[60];
    char acc_no[17];
    int age;
    char address[60];
    char citizenship[15];
    char phone[13];
    char acc_type[10];
    double amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

} account;
account add,update,check,remaining,transaction;

float interest(float, float, float);

void fordelay(int);

void new_acc();

void close(void);

void menu(void);

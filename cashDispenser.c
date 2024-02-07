#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int balance;

void menu(){
    system("cls");
    printf("\nYour Balance:%d\n\n", balance);
    int choice;
    printf("Bank Transactions Application\n\n");
    printf("\t1-Withdraw Money\n");
    printf("\t2-Deposit Money\n");
    printf("\t3-Pay Bill\n");
    printf("\t4-Transfer\n");
    printf("\tYour Choice:");
    scanf("%d", &choice);
    if(choice < 1 || choice > 4) {
        printf("Invalid input.\n");
        sleep(2);
        printf("Redirecting to the main menu...");
        sleep(2);
    }

    switch(choice) {
        int amount;
        case 1:
            printf("Amount to withdraw:");
            scanf("%d", &amount);
            if(balance < amount){
            printf("Insufficient balance.\n");sleep(2);
            printf("Redirecting to the main menu...");sleep(2);
            break;
            }
            balance -= amount;
            printf("Processing your transaction...\n");
            sleep(2);
            printf("Transaction successful. Don't forget to take your money.\n");
            sleep(2);
            printf("Redirecting to the main menu...");
            sleep(2);
            break;
        case 2:
            printf("Amount to deposit:");
            scanf("%d", &amount);
            balance += amount;
            printf("Please place your money into the machine..\n");
            sleep(4);
            printf("Processing your transaction...\n");
            sleep(2);
            printf("Transaction successful. Redirecting to the main menu...\n");
            sleep(2);
            break;
        case 3:
            amount= rand()%100+20;
            printf("1-Electricity\n");
            printf("2-Water\n");
            printf("3-Natural Gas\n");
            printf("4-Phone\n");
            printf("Your Choice:");
            scanf("%d", &choice);
            if(choice < 1 || choice > 4) {
                printf("Invalid input.\n");
                sleep(2);
                printf("Redirecting to the main menu...\n");
                sleep(2);
            }
            printf("Enter your account number:");
            scanf("%d", &choice);
            printf("\nYour Bill:%d\n", amount);
            printf("1-Confirm.\n");
            printf("2-Cancel\n");
            printf("Your Choice:");
            scanf("%d", &choice);
            if(choice == 2){
                break;
            }
            if(choice != 0) {
                if(balance < amount){
                    printf("Insufficient balance.\n");sleep (2);
                    printf("Redirecting to the main menu...");sleep(2);
                    break;
                }
                printf("Please place your money into the machine..\n");
                sleep(2);
                printf("Processing your transaction..\n");
                sleep(2);
                balance -= amount;
                printf("Transaction successful. Redirecting to the main menu..");
                sleep(2);
            }
            break;
        case 4:
            amount= rand()%100+20;
            printf("Enter IBAN (enter 0 to cancel):");
            scanf("%d", &choice);
            if(choice == 0) {
                break;
                printf("Redirecting to the main menu...");
                sleep(2);
            }
            printf("Enter the amount to transfer:");
            scanf("%d", &amount);
            if(balance < amount){
                printf("Insufficient balance.\n");sleep(2);
                printf("Redirecting to the main menu...");sleep(2);
                break;
            }
            printf("Processing your transaction..\n");
            sleep(2);
            balance -= amount;
            printf("Transaction successful. Redirecting to the main menu...");
            sleep(2);
            break;
    }
}

int main() {
    srand(time(NULL));
    balance = rand() % 900 + 100;
    while(1) {
        menu(balance);
    }

    return 0;
}

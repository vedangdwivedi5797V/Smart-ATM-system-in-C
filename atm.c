#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int choice;

    float balance = 10000.0;
    float amount;

    printf("\n================================\n");
    printf("       WELCOME TO SMART ATM     \n");
    printf("================================\n");

    // PIN Authentication
    printf("\nEnter your ATM PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("\nIncorrect PIN! Access Denied.\n");
        return 0;
    }

    printf("\nLogin Successful!\n");

    // ATM Menu
    do
    {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Balance Inquiry\n");
        printf("2. Cash Withdrawal\n");
        printf("3. Cash Deposit\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nYour balance is: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter withdrawal amount: Rs. ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance!\n");
                }
                else
                {
                    balance = balance - amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining balance: Rs. %.2f\n", balance);
                }
                break;

            case 3:
                printf("\nEnter deposit amount: Rs. ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else
                {
                    balance = balance + amount;
                    printf("Cash deposited successfully!\n");
                    printf("Updated balance: Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using Smart ATM!\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
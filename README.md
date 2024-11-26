#include <stdio.h>
#include <string.h>

void main()
{
    int ch;
    float a[100]; // Changed to float for precision
    float totalExpense = 0, salary = 0;
    char categories[100][20]; // Support up to 100 categorized expenses
    int expenseCount = 0; // Track the number of expenses
    float balance;

    printf("********************************************\n");
    printf("        WELCOME TO EXPENSE TRACKER          \n");
    printf("********************************************\n");

    while (1)
    {
printf("\n======== MAIN MENU =========\n");
printf("\n EXPENSE TRACKER\n");
printf("1. Enter Salary\n");
printf("2. Add Expense\n");
printf("3. View Total Expense\n");
printf("4. Check Balance\n");
printf("5. Exit\n");
printf("============================\n");

printf("Enter Your Choice: ");
scanf("%d", &ch);

        switch (ch)
        {
            case 1:
printf("Enter Your Monthly Salary: ");
scanf("%f", &salary);
if (salary <= 0)
{
    printf("Please Enter Valid Salary Amount! \n");
}
else
{
    printf("Salary recorded: ₹%.2f\n", salary);
}
                break;

            case 2:
printf("How many expenses do you want to add (max 100)? ");
                int count;
scanf("%d", &count);

                if (expenseCount + count > 100)
                {
printf("Cannot add more than 100 expenses in total.\n");
                    break;
                }

                for (int i = 0; i< count; i++)
                {
printf("Enter expense %d (amount and category): ", expenseCount + 1);
scanf("%f", &a[expenseCount]);
scanf("%s", categories[expenseCount]);
totalExpense += a[expenseCount];
expenseCount++;
                }
printf("Expenses added successfully!\n");
                break;

            case 3:
printf("=========== CATEGORIZED EXPENSES ============\n");
                for (int i = 0; i<expenseCount; i++)
                {
printf("%s: ₹%.2f\n", categories[i], a[i]);
                }
printf("Total Expense: ₹%.2f\n", totalExpense);
                break;

            case 4:
                if (salary == 0)
                {
                    printf("\n Please enter your salary first. \n");
                }
                else
                {
                    float balance = salary - totalExpense;
                    printf("\n Your Remaining Balance: ₹%.2f\n", balance);
                    if(balance < 0)
                    {
                        printf("WARNING: You have overspent by ₹%.2f! Try to control your Expenses. \n", -balance);
                    }
                    else if(balance < salary*0.2)
                    {
                        printf("CAUTION: You are nearing your spending limit. Plan Wisely! \n");
                    }
                    else
                    {
                        printf("GOOD JOB! You are managing your expenses well. \n");
                    }
                }
                break;

            case 5:
printf("Thank you for using Expense Tracker!! GOODBYE!!!\n");
                return;

            default:
printf("INVALID CHOICE! Please enter the number between 1 to 5.\n");
        }
    }
}

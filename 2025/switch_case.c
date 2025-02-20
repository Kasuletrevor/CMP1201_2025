#include <stdio.h>

int main()
{

    int account_type;
    double interest_rate, interest;
    double principal = 2000000.0;
    int time = 4;

    printf("Enter account type: 1-3: ");
    scanf("%d", &account_type);

    switch (account_type)
    {
    case 1:
        interest_rate = 1.2;
        break;

    case 2:
        interest_rate = 1.3;
        break;

    case 3:
        interest_rate = 1.6;
        break;

    default:
        interest_rate = 0.0;
        printf("Invalid account type\n");
    }

    interest = principal * (interest_rate / 100) * time;

    printf("Interest: %.2f\n", interest);

    return 0;
}
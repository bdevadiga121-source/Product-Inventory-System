
#include <stdio.h>

struct BankAccount {
    int accountNo;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount b;

    printf("Enter Account Number: ");
    scanf("%d", &b.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%49s", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    printf("\n--- Bank Account Details ---\n");
    printf("Account Number: %d\n", b.accountNo);
    printf("Account Holder: %s\n", b.name);
    printf("Balance: %.2f\n", b.balance);

    return 0;
}

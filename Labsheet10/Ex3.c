#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputAccountDetails() {
    FILE *file = fopen("account.txt", "a");
    if (file == NULL) {
        printf("Error opening account.txt file!\n");
        exit(1);
    }

    int accountNo;
    char NIC[20];
    char customerName[50];
    float accountBalance;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);
    fflush(stdin);

    printf("Enter NIC Number: ");
    scanf("%s", NIC);
    fflush(stdin);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    fflush(stdin);

    printf("Enter Account Balance: ");
    scanf("%f", &accountBalance);

    fprintf(file, "%d %s %s %.2f\n", accountNo, NIC, customerName, accountBalance);
    fclose(file);
}

float getAccountBalance(int accountNo) {
    FILE *file = fopen("account.txt", "r");
    if (file == NULL) {
        printf("Error opening account.txt file!\n");
        exit(1);
    }

    int currentAccountNo;
    char NIC[20];
    char customerName[50];
    float accountBalance;

    while (fscanf(file, "%d %s %s %f", &currentAccountNo, NIC, customerName, &accountBalance) != EOF) {
        if (currentAccountNo == accountNo) {
            fclose(file);
            return accountBalance;
        }
    }

    fclose(file);
    return -1;
}

void updateAccountBalance() {
    FILE *transactionFile = fopen("transaction.txt", "r");
    if (transactionFile == NULL) {
        printf("Error opening transaction.txt file!\n");
        exit(1);
    }

    int accountNo;
    char transactionType;
    float transactionAmount;

    while (fscanf(transactionFile, " %c %d %f", &transactionType, &accountNo, &transactionAmount) != EOF) {
        float currentBalance = getAccountBalance(accountNo);
        if (currentBalance != -1) {
            if (transactionType == 'D') {
                currentBalance += transactionAmount;
            } else if (transactionType == 'W') {
                if (currentBalance >= transactionAmount) {
                    currentBalance -= transactionAmount;
                } else {
                    printf("Insufficient balance for withdrawal for account %d\n", accountNo);
                }
            }

            FILE *accountFile = fopen("account.txt", "r+");
            if (accountFile == NULL) {
                printf("Error opening account.txt file!\n");
                exit(1);
            }

            int currentAccountNo;
            char NIC[20];
            char customerName[50];
            float accountBalance;

            while (fscanf(accountFile, "%d %s %s %f", &currentAccountNo, NIC, customerName, &accountBalance) != EOF) {
                if (currentAccountNo == accountNo) {
                    fseek(accountFile, -1 * sizeof(float), SEEK_CUR);
                    fprintf(accountFile, "%.2f", currentBalance);
                    break;
                }
            }

            fclose(accountFile);
        } else {
            printf("Account %d not found!\n", accountNo);
        }
    }

    fclose(transactionFile);
}

int main() {
    int accountNumber;
    printf("Enter the account number: ");
    scanf("%d", &accountNumber);

    float accountBalance = getAccountBalance(accountNumber);

    if (accountBalance != -1) {
        printf("Account Balance for Account %d: %.2f\n", accountNumber, accountBalance);
        updateAccountBalance();
        accountBalance = getAccountBalance(accountNumber);
        printf("Updated Account Balance for Account %d: %.2f\n", accountNumber, accountBalance);
    }
    else {
        printf("Account %d not found!\n", accountNumber);
    }

    return 0;
}

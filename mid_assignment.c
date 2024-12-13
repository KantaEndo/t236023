#include <stdio.h>
#include <string.h>
#include <ctype.h>

void checkPasswordStrength(const char *password) {
    int length = strlen(password);
    int hasUpperCase = 0, hasLowerCase = 0, hasDigit = 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpperCase = 1;
        if (islower(password[i])) hasLowerCase = 1;
        if (isdigit(password[i])) hasDigit = 1;
    }
    
    int isStrong = (length >= 8) && hasUpperCase && hasLowerCase && hasDigit;

    if (isStrong) {
        printf("強いパスワードです。\n");
    } else {
        printf("弱いパスワードです。改善点:\n");
        if (length < 8) {
            printf("- パスワードは8文字以上にしてください。\n");
        }
        if (!hasUpperCase) {
            printf("- 大文字を含めてください。\n");
        }
        if (!hasLowerCase) {
            printf("- 小文字を含めてください。\n");
        }
        if (!hasDigit) {
            printf("- 数字を含めてください。\n");
        }
    }
}

int main() {
    char password[100];

    printf("パスワードを入力してください: ");
    scanf("%99s", password);

    checkPasswordStrength(password);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i;

    printf("Informe um nome: ");
    scanf("%s", &str);

    for(i = 0; i < strlen(str); i++) {
        if (str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u') {
            str[i] = '@';
        }
    }
    printf("novo nome: %s\n", str);

    return 0;
}
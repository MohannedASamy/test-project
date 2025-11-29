#include "input.h"


int intIN(char *prompt){
    char *s = malloc(12 * sizeof(char));
    int x = 0;
    for (;;){
        printf("%s", prompt);
        if (!fgets(s, 12, stdin))
            continue;
        _Bool y = 1;
        for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
            if (s[i] < '0' || s[i] > '9'){
                y = 0;
            }
        if (!y)
            continue;
        x = atoi(s);
        break;
    }
    return x;
}
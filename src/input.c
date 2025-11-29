#include "input.h"


int intIN(char *prompt){
    char *s = malloc(12 * sizeof(char));
    int x = 0;
    for (;;){
        printf("%s", prompt);
        if (!fgets(s, 12, stdin))
            continue;
        for (int i = 0; s[i] != '\0'; i++)
            if (s[i] < '0' || s[i] > '9')
                continue;
        x = atoi(s);
    }
    return x;
}
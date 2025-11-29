#include "input.h"


void clear_input_buffer(void){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int intIN(char *prompt){
    char *s = malloc(12 * sizeof(char));
    int x = 0;
    int sign = 1;
    for (;;){
        printf("%s", prompt);
        if (!fgets(s, 12, stdin))
            continue;
        clear_input_buffer();
        _Bool y = 1;
        if (s[0] == '-'){
            s++;
            sign = -1;
        }
        for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
            if (s[i] < '0' || s[i] > '9'){
                y = 0;
                break;
            }
        if (!y)
            continue;
        x = atoi(s);
        break;
    }
    return sign * x;
}

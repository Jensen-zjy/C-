#include <stdio.h>
#include <ctype.h>

int main()
{
    int count[5] = {0}; 
    const char *name[5] = {"a/A", "i/I", "e/E", "o/O", "u/U"};
    int ch, i;

    while ((ch = getchar()) != '$' && ch != EOF) {
        switch (tolower((unsigned char)ch)) {
            case 'a': count[0]++; break;
            case 'i': count[1]++; break;
            case 'e': count[2]++; break;
            case 'o': count[3]++; break;
            case 'u': count[4]++; break;
            default:  break;
        }
    }

    for (i = 0; i < 5; i++) {
        printf("ÔªÒô %s: %d ´Î\n", name[i], count[i]);
    }

    return 0;
}

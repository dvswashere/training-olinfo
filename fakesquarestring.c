#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    char string[n];
    int alph[26];

    scanf("%s", string);

    for (int i=0; i<26; i++)    alph[i]=0;
    for (int i=0; i<n; i++)     alph[string[i]-'a']++; // counting chars appearing in string

    // only a char appearing an even amount of times is the odd one out
    for (int i=0; i<26; i++) {
        if (alph[i]%2!=0) {
            printf("%c", 'a'+i);
            break;
        }
    }
}
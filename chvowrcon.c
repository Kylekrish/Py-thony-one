#include <stdio.h>
int main()
{
    char k;
    int lowercasevowel, uppercasevowel;

    printf("Enter an alphabet: ");
    scanf("%c",&k);

    lowercasevowel = (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u');
    uppercasevowel = (k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U');
    if (lowercasevowel || uppercasevowel)
        printf("Vowel.", k);
    else if( (k>='!' && k<=')' ))
    printf("Invalid");
    else
        printf("Consonant.", k);
    return 0;
}

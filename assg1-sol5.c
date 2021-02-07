#include<stdio.h>
int main()
{
    char c;
    printf("\n Enter a character(alphabet) to check whether it is a vowel or consonant : ");
    scanf("%c", &c);
    if((c>=65&&c<=90)||(c>=97&&c<=122))
    {
        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("\n Entered character is a vowel");
                    break;
        
        default: printf("\n Entered character is a consonant");
            break;
        }
    }
        else{ printf("\n enter a valid alphabet");}
    return 0;
}




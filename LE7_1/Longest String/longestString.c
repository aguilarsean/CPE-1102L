#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

int lgString(char word[][MAX_LEN]);

int main(void){
    char word[5][MAX_LEN];
    int longestString;

    printf("Enter 5 strings: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", word[i]);
    }
    
    longestString = lgString(word);
    printf("\nLongest string: %s", word[longestString]);
    return 0;
}

int lgString(char word[][MAX_LEN]){
    int longest_string = 0, longest_index = 0;

    for (int i = 0; i < 5; i++)
    {
        int longest = strlen(word[i]);
        if (longest > longest_string) {
            longest_string = longest;
            longest_index = i;
        }
    }
    return longest_index;
}
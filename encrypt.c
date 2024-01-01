#include <stdio.h>
#include <stdlib.h>

int main() {

    char *word = (char *) malloc (1024);
    int *choice = (int *) malloc (sizeof(int));
    int *num1 = (int *) malloc (sizeof(int));
    *num1 = 0;

    printf("Enter a word: ");
    fgets(word, 1024, stdin);
    printf("Do you want to encrypt or decrypt: \n");
    printf("[1] encrypt \n");
    printf("[2] decrypt \n");
    scanf("%d", choice);

    if (*choice == 1) {
            while (*num1 < 1024) {
                word[*num1]++;
                printf("%c", word[*num1]);
		(*num1)++;
            }
    }

    if (*choice == 2) {
            while (*num1 < 1024) {
                    word[*num1]--;
		    printf("%c", word[*num1]);
		    (*num1)++;
            }
    }

    free(num1);
    free(choice);
    free(word);
    return 0;
}

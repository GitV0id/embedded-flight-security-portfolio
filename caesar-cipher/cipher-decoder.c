#include <stdio.h>
#include <ctype.h>

int main(void) {

    int key; // stores the shift value
    char msg[50]; // assigns a variable for characters upto 49 chars

    printf("Key: ");
    scanf("%i", &key); // gets the users input for the key

    while (getchar() != '\n'); // iterates through the line until it reaches the end

    printf("Message: ");
    fgets(msg, sizeof(msg), stdin); // gets the full line of the users input

    for (int i = 0; msg[i] != '\0'; i++) { // loops through the individual characters in the message

        if (isupper(msg[i])) { // detects if the message is uppercase
            printf("%c", ((msg[i] - 'A') + key) % 26 + 'A'); // if its uppercase it keeps it uppercase but shifts the letter by the key amount
        }

        else if (islower(msg[i])) { // detects if the message is a lowercase character
            printf("%c", ((msg[i] - 'a') + key) % 26 + 'a'); // if its a lowercase character it keeps lowercase but shifts the letter by the key amount
        }
        else {
            printf("%c", msg[i]); // prints it unchanged
        }
    }
}

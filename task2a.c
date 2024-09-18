//Task 2a
//#include <stdio.h>
//
//int main() {
//    char str[100];   // Array to hold the input string
//    char ch;         // Character to search for
//    int count = 0;   // Counter for occurrences
//
//    // Prompt the user for input
//    printf("Enter a string: ");
//    scanf("%s", str);
//
//    printf("Enter a character to count: ");
//    scanf(" %c", &ch);  // Note the space before %c to consume any leftover newline character
//
//    // Loop through the string to count occurrences of the character
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (str[i] == ch) {
//            count++;
//        }
//    }
//
//    // Print the result
//    printf("%c appears %d time%s\n", ch, count, count == 1 ? "" : "s");
//
//    return 0;
//}

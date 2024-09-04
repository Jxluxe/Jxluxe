// Basic User Input
// My first C progra

#include <stdio.h>
int main() {
    // integer variable to store user input
    int myNum;
    // we ask the user to type a number
    printf("Enter a number: \n");
    // getting the number they type and storing it as myNum
    scanf("%d", &myNum);
    // printing the number the user typed, stored in myNum
    printf("You entered the number: %d", myNum);
}

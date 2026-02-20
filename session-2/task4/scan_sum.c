
#include <stdio.h>

int main( void ) {

    // define suitable data
    int number
    // use scanf to read from the terminal
    printf("Enter an integer: ");
    int result = scanf("%d", &number);

    // print the output from scanf and the data values 
    printf("scanf returned: %d\n", result);
    printf("You entered: %d\n", number);
    
    return 0;
}
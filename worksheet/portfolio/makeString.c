
/*
Name: Chenxuan Li
Student ID: 201859038
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[1000] = "";
    
    // process the command-line data using appropriate string functions
    
    strcpy(buffer, argv[1]);
    // copy the first argv to "buffer"
    
    for (int i = 2; i < argc; i++) {
        strcat(buffer, "-");
        strcat(buffer, argv[i]);
    }
    // add "-" and argv[i] to "buffer"
    
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}
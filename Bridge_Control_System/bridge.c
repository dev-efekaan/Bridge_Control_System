#include <stdio.h>
#include <string.h>
#include <unistd.h> // for sleep() function
#include <ctype.h>  // for tolower() function

// Function that simulates the bridge control system
void bridge_system() {
    char select[20]; // Array to store user input
    int i;            // Loop counter

    // Initial messages
    printf("*****BRIDGE CONTROL SYSTEM*****\n");
    printf("System is ready for run\n");
    printf("Bridge closed\n");

    // Infinite loop: runs until the user types 'exit'
    while (1) {
        // Get input from the user
        printf("\nIs a ship coming or a train coming? (ship/train/exit): ");
        scanf("%s", select);

        for (i = 0; select[i]; i++) {
            select[i] = tolower(select[i]); // Convert each character to lowercase
        }

        // If the user enters "ship"
        if (strcmp(select, "ship") == 0) {
            printf("Ship is coming!\n");
            sleep(1); // Wait for 1 second
            printf("The Bridge is opening...\n");
            sleep(1);
            printf("The Bridge opened, Ship is passing...\n");
            sleep(3);
            printf("The Ship passed, The Bridge is closing...\n\n");

        // If the user enters "train"
        } else if (strcmp(select, "train") == 0) {
            printf("Train is coming!\n");
            sleep(1);
            printf("The bridge is already closed. Train can pass the bridge.\n");
            sleep(1);
            printf("The Train is passing...\n");

        // If the user enters "exit", stop the program
        } else if (strcmp(select, "exit") == 0) {
            printf("System is closing...\n");
            sleep(2);
            printf("System is closed\n");
            break; // Exit the while loop

        // If the user enters an invalid input
        } else {
            printf("Error! Invalid input.\n");
        }
    }
}


int main() {
    bridge_system(); // Run the bridge control system
    return 0;        
}


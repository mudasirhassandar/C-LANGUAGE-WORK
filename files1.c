//File Handling – Writing to a File

#include <stdio.h>

int main() {
    FILE *filePointer;       // Declare a file pointer
    char filename[100] = "output.txt";   // Name of the file
    char text[200];          // Text to write into the file

    // Open the file in write mode ("w")
    filePointer = fopen(filename, "w");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Ask user for input text
    printf("Enter the text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    // Write to file
    fprintf(filePointer, "%s", text);

    // Close the file (this saves the data)
    fclose(filePointer);

    printf("File '%s' written and saved successfully.\n", filename);

    return 0;
}
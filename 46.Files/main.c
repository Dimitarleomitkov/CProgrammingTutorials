#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("Creating C.txt and writing into it\n");

    // Create a file pointer
    FILE *filePointer;

    // Open the file to write into it
    filePointer = fopen ("C.txt", "w");

    // Check if the file opened successfuly
    if (filePointer == NULL) {
        printf ("An error occurred! File was not opened!\nAborting!!!\n");
        return -1;
    } else {
        printf ("C.txt is opened successfully.\n");
    }

    // Printing into a file
    fprintf (filePointer, "1. I love chickens!\n");

    // Check if the file closed successfuly
    if (fclose (filePointer) != EOF) {
        printf ("C.txt was closed successfuly.\n");
    }

    // Let's append some more text into the file
    printf ("\nAppending to C.txt\n");

    // Open the file to append to it
    filePointer = fopen ("C.txt", "a");

    // Check if the file opened successfuly
    if (filePointer == NULL) {
        printf ("An error occurred! File was not opened!\nAborting!!!\n");
        return -1;
    } else {
        printf ("C.txt is opened successfully.\n");
    }

    // Printing into a file
    fprintf (filePointer, "2. I love pumpkins!\n");
    fprintf (filePointer, "3. I love computer!\n");

    // Check if the file closed successfuly
    if (fclose (filePointer) != EOF) {
        printf ("C.txt was closed successfuly.\n");
    }

    printf ("\nReading C.txt\n");

    // Let's read and confirm that we have written the correct things
    filePointer = fopen ("C.txt", "r");

    // Check if the file opened successfuly
    if (filePointer == NULL) {
        printf ("An error occurred! File was not opened!\nAborting!!!\n");
        return -1;
    } else {
        printf ("C.txt is opened successfully.\n");
    }

    char *line;

    while (1) {
        // Read the line from the file and save it in line
        fgets (line, 81, filePointer);
        // Check if end of the file is reached
        if (feof (filePointer)) {
            break;
        }
        // Print each line
        printf ("%s", line);
    }

    // Check if the file closed successfuly
    if (fclose (filePointer) != EOF) {
        printf ("C.txt was closed successfuly.\n");
    }

    printf ("\nAccessing C.txt in a certain position\n");

    // Random accessing the file
    filePointer = fopen ("C2.txt", "w+");

    fputs ("I ate some food today.", filePointer);
    // Set the cursor on the position - 30 positions after start (SEEK_SET)
    fseek (filePointer, 6, SEEK_SET);
    // Put this string in that place
    fputs ("3 pumpkins today.", filePointer);

    // Check if the file closed successfuly
    if (fclose (filePointer) != EOF) {
        printf ("C.txt was closed successfuly.\n");
    }

    /* Random accessing the file properly. However in this way you have to concatinate
       the rest of the file to your string, or substitute exactly the same amount of symbols.
       This does not work as expected but can be checked out if needed. */
//    filePointer = fopen ("C.txt", "ra+");
//
//    fseek (filePointer, -24, SEEK_END);
//    fprintf (filePointer, " I ate 3 today.\n");
//
//    printf ("3\n");
//    if (fclose (filePointer) != EOF) {
//        printf ("C.txt was closed successfuly.\n");
//    }

    return 0;
}

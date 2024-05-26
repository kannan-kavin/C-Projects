#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Checking Command Line
    if (argc != 2)
    {
        printf("Usage ./recover <raw data>\n");
        return 1;
    }
    // Checking if the Binary File provided by the user can be Opened
    FILE *f = fopen(argv[1], "rb");
    if (f == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }
    // Variables setup to begin reading the Memory Card File
    unsigned char buffer[512];
    bool first_jpeg = false;
    int file_counter = 0;
    char namefile[8];
    FILE *file = NULL;
    // Reading through the 512 Bytes of the Memory Card File
    while (fread(buffer, sizeof(unsigned char), 512, f) == 512)
    {
        // Checking whether it's the start of a new jpeg
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            // Checking whether it's the first jpeg
            if (first_jpeg == false)
            {
                first_jpeg = true;
            }
            // Closing the file if it's not the first jpeg
            else
            {
                fclose(file);
            }
        }
        // Checking whether it's not the start of a new jpeg
        sprintf(namefile, "%03i.jpg", file_counter);
        if (first_jpeg == true)
        {
            fwrite(buffer, sizeof(unsigned char), 512, file);
        }
    }
    return (false);
}

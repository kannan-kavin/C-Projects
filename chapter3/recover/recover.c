#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    // Opening the Memory Card File
    FILE *f = fopen("card.raw", "rb");
    if(f == NULL)
    {
        return(1);
    }
    unsigned char buffer[512];
    // Beginning to read the Memory Card File
    size_t bytesRead = fread(buffer, sizeof(unsigned char), 512, f);
    // Reading through the 512 Bytes of the Memory Card File
    bool Firstjpeg = false;
    int filecounter = 0;
    for(int j = 0; j < 512, j++)
    {
        FILE *file = NULL;
        // Checking whether it's the start of a new jpeg
        if(buffer[j] == 0xff && buffer[j + 1] == 0xd8 && buffer[j + 2] == 0xff && (buffer[j + 3] & 0xf0 == 0xe0))
        {
            sprintf(filename, "%03i.jpg", file_counter);
            // Checking whether it's the first jpeg
            if(Firstjpeg == false)
            {
                Firstjpeg = true;
                FILE *file = fopen(filename, "w");
            }
            // Checking whether it's not the first jpeg
            else
            {
                FILE *file = fopen(filename, "w");
            }
            file_counter++;
        }
        // Checking whether it's not the start of a new jpeg
        else
        {
            if(file != NULL)
            {
                fwrite(buffer, 1, 512, file);
            }
        }
        fclose(file);
    }
    return (false);
}

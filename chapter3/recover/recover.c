#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    // Checking Command Line
    if(argc != 2)
    {
        printf("Usage ./recover <raw data>\n")
        return 1;
    }
    // Checking if the Binary File provided by the user can be Opened
    FILE *f = fopen(argv[1], "rb");
    if(f == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }
    // Beginning to read the Memory Card File
    unsigned char buffer[512];
    bool Firstjpeg = false;
    int file_counter = 0;
    char namefile[8];
    FILE *file = NULL;
    // Reading through the 512 Bytes of the Memory Card File
    size_t bytesRead = fread(buffer, sizeof(unsigned char), 512, f);
        sprintf(namefile, "%03i.jpg", file_counter);
        // Checking whether it's the start of a new jpeg
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Checking whether it's the first jpeg
            if(Firstjpeg == false)
            {
                Firstjpeg = true;
                file = fopen(namefile, "wb");
                fwrite(buffer, 1, 512, file);
                file_counter++;
            }
            // Checking whether it's not the first jpeg
            else
            {
                fclose(file);
                file = fopen(namefile, "wb");
                fwrite(buffer, 1, 512, file);
                file_counter++;
            }
        }
        // Checking whether it's not the start of a new jpeg
            if(Firstjpeg == true)
            {
                fwrite(buffer, sizeof(unsigned char), 512, file);
            }
        }
    }
    return (false);
}

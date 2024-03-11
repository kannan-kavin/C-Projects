#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            float red = (float)image[j][i].rgbtRed;
            float green = (float)image[j][i].rgbtGreen;
            float blue = (float)image[j][i].rgbtBlue;
            float average = round((red + green + blue) / 3);
            image[j][i].rgbtRed = average;
            image[j][i].rgbtGreen = average;
            image[j][i].rgbtBlue = average;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < (width / 2); i++)
    {
        for (int j = 0; j < height; j++)
        {
            RGBTRIPLE temp = image[j][i];
            image[j][i] = image[j][width-1-i];
            image[j][width-1-i] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE average = image
    float averagesum = 0;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            float red = (float)image[j][i].rgbtRed;
            float green = (float)image[j][i].rgbtGreen;
            float blue = (float)image[j][i].rgbtBlue;
            float averagesun = averagesum + (red + green + blue);
            if ((i - 1) < 0)
            {
                float red = (float)image[j][i-1].rgbtRed;
                float green = (float)image[j][i-1].rgbtGreen;
                float blue = (float)image[j][i-1].rgbtBlue;
                float averagesun = averagesum + (red + green + blue);
            }
            else if (images[j][i - 1] == 0)
            {

            }
                if ((j - 1) < 0)
                {

                }
                else if (island[i][j - 1] == 0)
                {

                }
                if ((i + 1) > 4)
                {

                }
                else if (island[i + 1][j] == 0)
                {

                }
                if ((j + 1) > 4)
                {

                }
                else if (island[i][j + 1] == 0)
                {
                   perimeter = perimeter + 1;
                }
            }
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    /* for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {

        }
    }
    return; */
}

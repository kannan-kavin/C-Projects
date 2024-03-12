#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        // Iterating through the image pixel array
        {
            float red = (float) image[j][i].rgbtRed;
            float green = (float) image[j][i].rgbtGreen;
            float blue = (float) image[j][i].rgbtBlue;
            // Turning each RGB value into a float
            float average = round((red + green + blue) / 3);
            // Averaging the colors
            image[j][i].rgbtRed = average;
            image[j][i].rgbtGreen = average;
            image[j][i].rgbtBlue = average;
            // Assiging the Average back to the pixel to "Gray" the image
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
        // Iterating through the image pixel array stopping halfway through)
        {
            RGBTRIPLE temp = image[j][i];
            // Making a temporary array keeping the normal pixel
            image[j][i] = image[j][width - 1 - i];
            // Assigning the pixel its reflected pixel
            image[j][width - 1 - i] = temp;
            // Assigning the reflected pixel its pixel using the temporary array
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE average[height][width];
    // Creating a new array that contains the averages of all the colors around each pixel based on the image array
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        // Iterating through the image pixel array
        {
            float red = 0;
            float green = 0;
            float blue = 0;
            // Creating values for each pixel that will be used to find the average
            float denominator = 0;
            for (int k = -1; k < 2; k++)
            {
                for (int l = -1; l < 2; l++)
                // Iterating around the pixel we are using as our center
                {
                    if (i + k >= 0 && i + k < width && j + l >= 0 && j + l < height)
                    {
                        red += image[j + l][i + k].rgbtRed;
                        green += image[j + l][i + k].rgbtGreen;
                        blue += image[j + l][i + k].rgbtBlue;
                        denominator++;
                    }
                }
            }
            average[j][i].rgbtRed = round(red / denominator);
            average[j][i].rgbtGreen = round(green / denominator);
            average[j][i].rgbtBlue = round(blue / denominator);
            // Assigning the respective values of RGB to the average array
        }
    }
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        // Iterating through the image pixel array
        {
            image[j][i] = average[j][i];
            // Assigning all the average values back to the original array
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE matrix[height][width];
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        // Iterating through the image pixel array
        {
            matrix[j][i] = image[height][width];
            // Making a copy of the original array to mess around with
        }
    }
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        // Iterating through the image pixel array
        {
            int runningtotalx = 0;
            int runningtotaly = 0;
            int Gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
            int Gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};
            // Initializng the Sobel Operators (x and y)
            for (int k = -1; k < 2; k++)
            {
                for (int l = -1; l < 2; l++)
                // Iterating around the pixel we are using as our center
                {
                    if (i + k >= 0 && i + k < width && j + l >= 0 && j + l < height)
                    {
                        int valuex = (image[j + l][i + k].rgbtRed * Gx[l + 1][k + 1]);
                        runningtotalx += valuex;
                        int valuey = (image[j + l][i + k].rgbtRed * Gy[l + 1][k + 1]);
                        runningtotaly += valuey;
                    }
                }
            }
            matrix[j][i].rgbtRed = round(sqrt(runningtotalx * runningtotalx + runningtotaly * runningtotaly));
            // RED
            runningtotalx = 0;
            runningtotaly = 0;
            for (int k = -1; k < 2; k++)
            {
                for (int l = -1; l < 2; l++)
                // Iterating around the pixel we are using as our center
                {
                if (i + k >= 0 && i + k < width && j + l >= 0 && j + l < height)
                    {
                        int valuex = (image[j + l][i + k].rgbtGreen * Gx[l][k]);
                        runningtotalx += valuex;
                        int valuey = (image[j + l][i + k].rgbtGreen * Gy[l][k]);
                        runningtotaly += valuey;
                    }
                }
            }
            matrix[j][i].rgbtGreen = round(sqrt(runningtotalx * runningtotalx + runningtotaly * runningtotaly));
            // GREEN
            runningtotalx = 0;
            runningtotaly = 0;
            for (int k = -1; k < 2; k++)
            {
                for (int l = -1; l < 2; l++)
                // Iterating around the pixel we are using as our center
                {
                    if (i + k >= 0 && i + k < width && j + l >= 0 && j + l < height)
                    {
                        int valuex = (image[j + l][i + k].rgbtRed * Gx[l][k]);
                        runningtotalx += valuex;
                        int valuey = (image[j + l][i + k].rgbtRed * Gy[l][k]);
                        runningtotaly += valuey;
                    }
                }
            }
            matrix[j][i].rgbtBlue = round(sqrt(runningtotalx * runningtotalx + runningtotaly * runningtotaly));
            // BLUE
        }
    }
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        // Iterating through the image pixel array
        {
            image[j][i] = matrix[j][i];
            // Making a copy of the original array to mess around with
        }
    }
    return;
}

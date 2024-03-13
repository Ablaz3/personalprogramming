#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0; i<=height; i++) //go through all rows
        {
            for(int j=0; j<=width; j++) //go through all columns within each row
            {
                float redpart = image[i][j].rgbtRed;
                float bluepart = image[i][j].rgbtBlue;      //turn into float because the average may be decimal
                float greenpart = image[i][j].rgbtGreen;

                float average = round((redpart + greenpart + bluepart)/3);

                image[i][j].rgbtBlue = average;
                image[i][j].rgbtRed = average;     //turning all into the same for the colours to be eliminated
                image[i][j].rgbtGreen = average;
            }
        }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE imagetemp[height][width];  // temporary
    for(int i=0; i<=height; i++) //go through all rows
    {
        for(int j=0; j<(width/2); j++) //go through half columns (only before midpoint)
        {
            imagetemp[i][j] = image[i][j]; //to do simultaneous operations
            int column = (width-(j+1)); //finding opposite columns coordinate
            image[i][j] = image[i][column];
            image[i][column] = imagetemp[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE imagecopy[height][width]; //copy of the image
    RGBTRIPLE average; //temporary value for the average of numbers surrounding
    float Baverage; //temp values for blue green and red color values
    float Raverage;
    float Gaverage;
    float num; //number of values averaged
    for(int i = 0; i<height; i++) //go through all height
    {
        for(int j = 0; j<width; j++) //go through all width
        {
            imagecopy[i][j] = image[i][j];   //Makes imagecopy into a copy of image
        }
    }
    for(int i = 0; i<height; i++) //go through all height
    {
        for(int j = 0; j<width; j++) //go through all width
        {
            //resetting all values to 0
            average.rgbtBlue = 0;
            average.rgbtRed = 0;
            average.rgbtGreen = 0;
            Baverage = 0;
            Raverage = 0;
            Gaverage = 0;
            num = 0;
            for(int n = 0; n<3; n++) //find the average of the 9 surrounding numbers; go through 3 rows
            {
                if((n+j-1>=0)&&(n+j-1<width))
                {
                    for(int k = 0; k<3; k++) //go through 3 columns per row
                    {
                        if((k+i-1>=0)&&(k+i-1<height))
                        {
                            Baverage += imagecopy[((k+i)-1)][((n+j)-1)].rgbtBlue;
                            Raverage += imagecopy[((k+i)-1)][((n+j)-1)].rgbtRed;
                            Gaverage += imagecopy[((k+i)-1)][((n+j)-1)].rgbtGreen;
                            num++;
                        }
                    }
                }
            }
            average.rgbtBlue = round(Baverage/num);    //average of the 9 values
            average.rgbtRed = round(Raverage/num);    //average of the 9 values
            average.rgbtGreen = round(Gaverage/num);    //average of the 9 values
            image[i][j] = average;
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    int gx[3][3] = {{-1, 0, 1},{-2, 0, 2},{-1, 0, 1}}; //kernels
    int gy[3][3] = {{-1, -2, -1},{0, 0, 0},{1, 2, 1}};
    RGBTRIPLE imagecpy[height][width]; //to allow math to be done with correct numbers
    float gxtempB; //value of GX before adding together
    float gytempB; //value of gy before adding together
    float gxtempR; //value of GX before adding together
    float gytempR; //value of gy before adding together
    float gxtempG; //value of GX before adding together
    float gytempG; //value of gy before adding together
    for(int i=0; i<height; i++) //making the copy
    {
        for(int j=0; j<width; j++)
        {
            imagecpy[i][j].rgbtBlue = image[i][j].rgbtBlue;
            imagecpy[i][j].rgbtGreen = image[i][j].rgbtGreen;
            imagecpy[i][j].rgbtRed = image[i][j].rgbtRed;
        }
    }
    for(int i = 0; i<height; i++) //rows
    {
        for(int j = 0; j<width; j++) //columns
        {
            gxtempB = 0;
            gytempB = 0;
            gxtempG = 0;
            gytempG = 0;
            gxtempR = 0;
            gytempR = 0;

            for(int n = -1; n<2; n++) //rows
            {
                for(int k = -1; k<2; k++) //columns
                {
                    if((n+i<0)||(n+i>=height))
                    {
                        continue;
                    }
                    if((k+j<0)||(k+j>=width))
                    {
                        continue;
                    }
                    gxtempB += imagecpy[n+i][k+j].rgbtBlue*gx[n+1][k+1];
                    gytempB += imagecpy[n+i][k+j].rgbtBlue*gy[n+1][k+1];
                    gxtempR += imagecpy[n+i][k+j].rgbtRed*gx[n+1][k+1];
                    gytempR += imagecpy[n+i][k+j].rgbtRed*gy[n+1][k+1];
                    gxtempG += imagecpy[n+i][k+j].rgbtGreen*gx[n+1][k+1];
                    gytempG += imagecpy[n+i][k+j].rgbtGreen*gy[n+1][k+1];
                }
            }
            int edgered = round(sqrt(gxtempR*gxtempR+gytempR*gytempR));
            int edgegreen = round(sqrt(gxtempG*gxtempG+gytempG*gytempG));
            int edgeblue = round(sqrt(gxtempB*gxtempB+gytempB*gytempB));
            if(edgered>255)
            {
                edgered = 255;
            }
            if(edgegreen>255)
            {
                edgegreen = 255;
            }
            if(edgeblue>255)
            {
                edgeblue = 255;
            }
            image[i][j].rgbtRed = edgered;
            image[i][j].rgbtBlue = edgeblue;
            image[i][j].rgbtGreen = edgegreen;
        }
    }
    return;
}

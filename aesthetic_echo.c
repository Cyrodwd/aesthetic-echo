#include "aesthetic/styles.h"
#include "aesthetic/colors.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

void setTextColor(const char* color);
void setTextStyle(const char* style);
void aestheticEcho(const char color[], const char style[], const char text[]);

int main(int argc, char** argv) {
    // Check if the correct number of command-line arguments is provided
    if (argc != 4) {
        printf("Usage: %s <color> <style> <text>\n", argv[0]);
        return 1;
    }

    // Extract command-line arguments
    const char* color = argv[1];
    const char* style = argv[2];
    const char* text = argv[3];

    // Call the function
    aestheticEcho(color, style, text);
    return 0;
}

// Function to set text color based on input color
void setTextColor(const char* color) {
    if (strcasecmp(color, "red") == 0)
        printf(RED);
    else if (strcasecmp(color, "green") == 0)
        printf(GREEN);
    else if (strcasecmp(color, "white") == 0)
        printf(WHITE);
    else if (strcasecmp(color, "cyan") == 0)
        printf(CYAN);
    else if (strcasecmp(color, "blue") == 0)
        printf(BLUE);
    else if (strcasecmp(color, "yellow"))
        printf(YELLOW);
    else {
        fprintf(stderr, "Invalid color: %s\n", color);
        exit(1); // Exit with an error code
    }
}

// Function to set text style based on input style
void setTextStyle(const char* style) {
    if (strcasecmp(style, "bold") == 0)
        printf(STYLE_BOLD);
    else if (strcasecmp(style, "underline") == 0)
        printf(STYLE_UNDERLINE);
    else if (strcasecmp(style, "italic") == 0)
        printf(STYLE_ITALIC);
    else {
        fprintf(stderr, "Invalid style: %s\n", style);
        exit(1); // Exit with an error code
    }
}

// Function to print colored and styled text
void aestheticEcho(const char color[], const char style[], const char text[]) {
    setTextColor(color);
    setTextStyle(style);
    printf("%s\n", text);

    // Reset color and style to default after printing
    printf(COLOR_RESET);
    printf(STYLE_NORMAL);
}
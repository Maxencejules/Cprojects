#include <stdio.h>

//Store display message program
int main() {
    // Variable Declaration
    int appleQuantity; 
    double applePrice; 
    float appleReview; 
    int appleReviewDisplay; 
    const char appleLocation = 'F'; 

    // Initial Values Assignment
    appleQuantity = 23; 
    applePrice = 1.49; 
    appleReview = 82.5; 

    // Casting
    appleReviewDisplay = (int)appleReview; 

    // Output
    printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);
}

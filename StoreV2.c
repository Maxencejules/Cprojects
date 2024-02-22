#include <stdio.h>

int main() {
    int appleQuantity;
    double applePrice = 1.49;
    double appleReview;
    int appleReviewDisplay;
    const char appleLocation = 'F';
    int dayOfWeek = 0;

    appleQuantity = 23;

    // Step 2: Calculating average review score
    int totalReviewScore = 823; // Total review score from 9 reviewers
    int totalReviewers = 9; // Number of reviewers
    appleReview = (double)totalReviewScore / totalReviewers;

    // Step 3: Setting the initial value of dayOfWeek
    dayOfWeek = 0; // Setting dayOfWeek to 0 (first day of the week)

    // Step 4: Adding any number of days to the initial value of dayOfWeek
    dayOfWeek += 3; // Adding 3 days

    // Step 6: Adding a new review
    int newReviewScore = 52; // New review score
    totalReviewScore += newReviewScore; // Adding the new review score to the total
    totalReviewers++; // Incrementing the number of reviewers
    appleReview = (double)totalReviewScore / totalReviewers; // Recalculating the average review
    appleReviewDisplay = (int)appleReview; // Cast the average review score to an integer for display

    // Step 1: Checking if appleQuantity is less than 10
    if (appleQuantity < 10 || dayOfWeek == 4) { // Step 5: Checking if it's the fourth day of the week
        printf("Sale on apples today, today only they are: $%.2f\n", applePrice * 0.9);
    }
 // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}

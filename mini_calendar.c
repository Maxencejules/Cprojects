#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//calendar calculator

// Function to determine if a given year is a leap year
bool is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

// Function to add a certain number of days to a given date
void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while (days_left_to_add > 0) {
        int days_left_in_month = days_in_month[*mm] - *dd;
        
        if (*mm == 2 && is_leap_year(*yy)) {
            days_left_in_month += 1;
        }
        
        if (days_left_to_add > days_left_in_month) {
            days_left_to_add -= days_left_in_month;
            days_left_to_add -= 1;
            *dd = 1;
            
            if (*mm == 12) {
                *mm = 1;
                *yy += 1;
            } else {
                *mm += 1;
            }
        } else {
            *dd += days_left_to_add;
            days_left_to_add = 0;
        }
    }
}

int main() {
    int mm, dd, yy, days_left_to_add;
    
    // Prompting the user for input
    printf("Please enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date: ");
    scanf("%d %d %d %d", &mm, &dd, &yy, &days_left_to_add);
    
    // Adding days to the date
    add_days_to_date(&mm, &dd, &yy, days_left_to_add);
    
    // Outputting the new date
    printf("New date: %d %d %d\n", mm, dd, yy);
    
    return 0;
}

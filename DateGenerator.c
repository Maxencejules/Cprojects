//Program to generate the date format (Month day(suffix), year)
int main(void) {
    int month, day, year;

    // Prompt the user to enter the date
    printf("Enter date (mm/dd/yyyy): ");
    // Read the date input
    scanf("%d/%d/%d", &month, &day, &year);

    // Print the month in text form
    switch(month) {
        case 1:
            printf("January ");
            break;
        case 2:
            printf("February ");
            break;
        case 3:
            printf("March ");
            break;
        case 4:
            printf("April ");
            break;
        case 5:
            printf("May ");
            break;
        case 6:
            printf("June ");
            break;
        case 7:
            printf("July ");
            break;
        case 8:
            printf("August ");
            break;
        case 9:
            printf("September ");
            break;
        case 10:
            printf("October ");
            break;
        case 11:
            printf("November ");
            break;
        case 12:
            printf("December ");
            break;
        default:
            printf("Invalid month ");
    }

    // Print the day in numerical form
    printf("%d", day);

    // Print the day with suffix
    if (day == 1 || day == 21 || day == 31) {
        printf("st");
    } else if (day == 2 || day == 22) {
        printf("nd");
    } else if (day == 3 || day == 23) {
        printf("rd");
    } else {
        printf("th");
    }

    // Print the year
    printf(", %d\n", year);

    return 0;
}

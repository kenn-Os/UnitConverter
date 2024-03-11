#include <stdio.h>
#include <time.h>

void displayCalendar(int year, int month) {

    printf("Calendar for %d/%d\n", month, year);
}

void getCurrentDate(int* year, int* month, int* day) {
    time_t currentTime;
    struct tm* timeInfo;

    currentTime = time(NULL);
    timeInfo = localtime(&currentTime);

    *year = timeInfo->tm_year + 1900;
    *month = timeInfo->tm_mon + 1;
    *day = timeInfo->tm_mday;
}

int main() {
    int year, month, day;

    getCurrentDate(&year, &month, &day);

    printf("Current Date and Time: %d/%d/%d\n", month, day, year);

    displayCalendar(year, month);


    return 0;
}

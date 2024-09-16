#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("%s <year>\n", argv[0]);
        return 1;
    }

    int year = atoi(argv[1]);

    if (is_leap_year(year)) {
        printf("%d was a leap year\n", year);
    } else {
        printf("%d was not a leap year\n", year);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846

double computeSectorArea(double rad, double ang) {
    return (M_PI * rad * rad * ang) / 360.0;
}

double computeSectorPerimeter(double rad, double ang) {
    double arcLen = (2 * M_PI * rad * ang) / 360.0;
    return 2 * rad + arcLen; 
}

bool checkPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int computeDateDifference(int yr1, int mon1, int day1, int yr2, int mon2, int day2) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays1 = yr1 * 365 + day1;
    int totalDays2 = yr2 * 365 + day2;

    for (int yr = 1; yr < yr1; yr++) {
        if (yr % 4 == 0 && (yr % 100 != 0 || yr % 400 == 0)) totalDays1++;
    }
    for (int yr = 1; yr < yr2; yr++) {
        if (yr % 4 == 0 && (yr % 100 != 0 || yr % 400 == 0)) totalDays2++;
    }

    for (int mon = 0; mon < mon1 - 1; mon++) totalDays1 += daysInMonth[mon];
    for (int mon = 0; mon < mon2 - 1; mon++) totalDays2 += daysInMonth[mon];

    if (mon1 > 2 && (yr1 % 4 == 0 && (yr1 % 100 != 0 || yr1 % 400 == 0))) totalDays1++;
    if (mon2 > 2 && (yr2 % 4 == 0 && (yr2 % 100 != 0 || yr2 % 400 == 0))) totalDays2++;

    return abs(totalDays2 - totalDays1);
}

int main() {
    double rad, ang;
    int yr1, mon1, day1, yr2, mon2, day2;

    printf("Enter radius and angle of the sector: ");
    scanf("%lf %lf", &rad, &ang);

    double area = computeSectorArea(rad, ang);
    double perimeter = computeSectorPerimeter(rad, ang);

    printf("Sector Area: %.2lf\n", area);
    printf("Sector Perimeter: %.2lf\n", perimeter);

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &day1, &mon1, &yr1);
    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &day2, &mon2, &yr2);

    int dayDifference = computeDateDifference(yr1, mon1, day1, yr2, mon2, day2);
    printf("Days Difference: %d\n", dayDifference);

    if (checkPrime(dayDifference)) {
        printf("The difference in days is a prime number.\n");
    } else {
        printf("The difference in days is not a prime number.\n");
    }

    return 0;
}

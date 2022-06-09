#include <stdio.h>

void main(void) {
    int burger;
    int side;
    int drink;
    int dessert;

    scanf("%d\n%d\n%d\n%d", &burger, &side, &drink, &dessert);

    int total_calories = 0;

    if (burger == 1) {
        total_calories += 461;
    } else if (burger == 2) {
        total_calories += 431;
    } else if (burger == 3) {
        total_calories += 420;
    }

    if (side == 1) {
        total_calories += 100;
    } else if (side == 2) {
        total_calories += 57;
    } else if (side == 3) {
        total_calories += 70;
    }

    if (drink == 1) {
        total_calories += 130;
    } else if (drink == 2) {
        total_calories += 160;
    } else if (drink == 3) {
        total_calories += 118;
    }

    if (dessert == 1) {
        total_calories += 167;
    } else if (dessert == 2) {
        total_calories += 266;
    } else if (dessert == 3) {
        total_calories += 75;
    }

    printf("Your total Calorie count is %d.", total_calories);
}
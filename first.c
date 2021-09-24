#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    float tip, newTip, tax, newTax;
    float mealCost, taxCost, tipCost, total;
    char *mealName;
    int i, n;
    double randNum;
    n = 1;

    printf("Enter tip amount as a percentage: ");
    scanf("%f", &tip);
    printf("Enter tax amount as a percentage: ");
    scanf("%f", &tax);

    newTip = tip / 100;
    newTax = tax / 100;
    
    for(i = 0; i < n; i++ ){
        randNum = rand()%4;
    }

        if (randNum == 0) {
            mealCost = 9.95;
            mealName = "Salad";
        }
        else if (randNum == 1){
            mealCost = 4.55;
            mealName = "Soup";
        }
        else if (randNum == 2){
            mealCost = 13.25;
            mealName = "Sandwich";
        }
        else {
            mealCost == 22.35;
            mealName = "Pizza";
        }
    taxCost = mealCost * newTax;
    tipCost = mealCost * newTip;
    total = taxCost + tipCost + mealCost;

    printf("\n");
    printf("You enjoyed a nice %s\n", mealName);
    printf("Meal cost is: $%.2f\n", mealCost);
    printf("Tax amount is: $%.2f\n", taxCost);
    printf("Tip cost is: $%.2f\n", tipCost);
    printf("Total cost is: $%.2f\n", total);
}
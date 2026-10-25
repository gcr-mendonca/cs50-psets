#include <stdio.h>

void calc_change(int cents);
int calc_quarters(int cents);
int calc_dimes(int cents);
int calc_nickels(int cents);
int calc_pennies(int cents);

int main(void) {
    int cents = 0;
    while (cents <=0) {
        printf("Change Owned: ");
        scanf("%d", &cents);
    }
    
    calc_change(cents);
    
    return 0;
}

void calc_change(int cents){
    int quarters = calc_quarters(cents);
    cents = cents - (quarters * 25);
    int dimes = calc_dimes(cents);
    cents = cents - (dimes * 10);
    int nickels = calc_nickels(cents);
    cents = cents - (nickels * 5);
    int pennies = calc_pennies(cents);
    cents = cents - (pennies * 1);
    
    printf("%d\n", quarters + dimes + nickels + pennies);
}

int calc_quarters(int cents) {
    int quarters = 0;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

int calc_dimes(int cents) {
    int dimes = 0;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

int calc_nickels(int cents) {
    int nickels = 0;
    while (cents >= 5) {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

int calc_pennies(int cents) {
    int pennies = 0;
    while (cents >= 1) {
        pennies++;
        cents -= 1;
    }
    return pennies;
}

#include <stdio.h>
#include <stdlib.h>

/*	
 *	Please define your functions after main().
 *	You can import standard C / C++ libraries.
 *	Recommended: add description of your code.
 * 
 */

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[]);
void printGroupMemberNames();

int main(void) {
    printGroupMemberNames();
    printf("\n");

    int row[500];
    for (int i = 0; i < 500; i++) {
        row[i] = i;
    }

    printAsChars(row);
    printf("\nThe sum of square is: %i\n", getSumOfSquares(row));
    printf("\nSubtract All Values: %d\n", subtractAllValues(row));

    return 1;
}

/*Sengkhun Lim*/
int subtractAllValues(int myArray[]) {
    int result = 0;
    for (int i = 0; i < 500; i++) {
        result -= myArray[i];
    }
    return result;
}

/*Sengkhun Lim*/
float invertAllValues(int myArray[]) {
    
}

/*Sokrattanak Utdorm Em*/
void printAsChars(int myArray[]) {
    for (int i = 0; i < 500; i++) {
        printf("%c ", myArray[i]);
    }
    printf("\n");
}

/*Sokrattanak Utdorm Em*/
int getSumOfSquares(int myArray[]) {
    int expo = 1;
    int sumOfSquare = 0;
    for (int i = 0; i < 500; i++) {
        expo = myArray[i] * myArray[i];
        sumOfSquare += expo;
    }
    return sumOfSquare;
}

/*Youhak*/
void printGroupMemberNames() {
    printf(" Sokrattanak Utdorm Em\n ");
    printf("Sengkhun Lim\n ");
    printf("Youhak Seng\n ");
    printf("Lyhour Sovann\n");
}
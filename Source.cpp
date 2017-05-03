#include <stdio.h>
#include <stdlib.h>

/*
 *	Please define your functions after main().
 *	You can import standard C / C++ libraries.
 *	Recommended: add description of your code.
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
    printf("\nThe sum of array: %d\n", getSum(row));
    printf("\nInvert values of array: %f\n",invertAllValues(row));


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

/*Sengkhun Lim & Youhak Seng*/
float invertAllValues(int myArray[]) {
    float invert = 0;
    for (int i=0;i<500;++i){
        invert = 1/myArray[i];
        myArray[i] = invert;
        
    }
    return 0;
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
/*youhak*/
int getSum(int myArray[]){
    int sum = 0;
    for (int i = 0; i <500 ; ++i) {
        sum =+ myArray[i];
    }
    return sum;
}

/*Youhak*/
void printGroupMemberNames() {
    printf(" Sokrattanak Utdorm Em\n ");
    printf("Lyhour Sovann\n");
    printf("Sengkhun Lim\n ");
    printf("Youhak Seng\n ");
}
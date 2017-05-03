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

    int row[500];
    for (int i = 0; i < 500; i++){
        row[i] = i;
    }
    
//    printAsChars(row);
//    getSumOfSquares(row);
    
    return 1;
}

void printAsChars(int myArray[]) {
    for(int i = 0; i < 500; i++) {
        printf("%c", myArray[i]);
    }
    printf("\n");
}

int getSumOfSquares(int myArray[]) {
    int expo = 1;
    int sumOfSquare = 0;
    for(int i = 0; i < 500; i++) {
        expo = myArray[i]*myArray[i];
        sumOfSquare+=expo;
    }
    printf("\nThe sum of square is: %i\n",sumOfSquare);
    return sumOfSquare;
}


void printGroupMemberNames() {
    printf("Name1\n ");
    printf("Name2\n ");
    printf("Name3\n ");
    printf("That's it!\n");
}
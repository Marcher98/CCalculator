#include <stdio.h>

int main() {
    printf("Enter a(n) operation (+,-,/,*,%%):");
    char operation;
    scanf("%c", &operation);
	if (operation != '+' && operation != '-' && operation != '/' && operation != '*' && operation != '%') {
        printf("please enter a valid operation..");
	} else if (operation == '+') { /* addition */
		addition();
	} else if (operation == '-') { /* subtraction */
		subtraction();
	} else if (operation == '/') { /* division */
		division();
	} else if (operation == '*') { /* multiplication */
		multiplication();
	} else if (operation == '%') { /* modulos */
		modulos();
	}
}

void multiplication () {
	int nums;
	printf("How many numbers would you like to multiply?:");
	scanf("%d", &nums);
	//printf("There are %d nums", nums);
	int input[nums]; //0-(nums-1) spots to fill
	for (int i = 0; i < nums; i++) {
		printf("Enter number %d: \n", (i+1));
        scanf("%d", &input[i]);
    }
	int product = input[0];
	for (int i = 1; i < nums; i++) {
		product = product * input[i];
	}
    for (int i = 0; i < nums; i++) {
		if (i == nums-1) {
			printf("%d ", input[i]);
		} else {
              printf("%d * ", input[i]);
	    }
	}
	printf("= %d\n", product);
}

void division() {
	int nums = 2;
	//printf("There are %d nums", nums);
	int input[nums]; //0-(nums-1) spots to fill
	for (int i = 0; i < nums; i++) { //for loop fills array
       printf("Enter number %d: \n", (i+1));
		scanf("%d", &input[i]);
    }
	int result = input[0];
	for (int i = 1; i < nums; i++) {
		result = result / input[i];
	}
   for (int i = 0; i < nums; i++) {
		if (i == nums-1) {
			printf("%d ", input[i]);
		} else {
            printf("%d / ", input[i]);
        }
	}
	printf("= %d\n", result);
}

void subtraction() {
		int nums = 2;
		//printf("There are %d nums", nums);
		int input[nums]; //0-(nums-1) spots to fill
		for (int i = 0; i < nums; i++) { //for loop fills array
            printf("Enter number %d: \n", (i+1));
			scanf("%d", &input[i]);
        }
		int result = input[0];
		for (int i = 1; i < nums; i++) {
			result = result - input[i];
		}
        for (int i = 0; i < nums; i++) {
			if (i == nums-1) {
				printf("%d ", input[i]);
			} else {
                printf("%d - ", input[i]);
            }
		}
		printf("= %d\n", result);
}

void addition() {
	int nums;
    printf("How many numbers would you like to add?:");
	scanf("%d", &nums);
	//printf("There are %d nums", nums);
	int input[nums]; //0-(nums-1) spots to fill
	for (int i = 0; i < nums; i++) {
		printf("Enter number %d: \n", (i+1));
        scanf("%d", &input[i]);
    }
	int sum = 0;
	for (int i = 0; i < nums; i++) {
		sum = sum + input[i];
	}
    for (int i = 0; i < nums; i++) {
		if (i == nums-1) {
			printf("%d ", input[i]);
		} else {
            printf("%d + ", input[i]);
        }
	}
	printf("= %d\n", sum);
}

void modulos() {
	int nums = 2;
		//printf("There are %d nums", nums);
		int input[nums]; //0-(nums-1) spots to fill
		for (int i = 0; i < nums; i++) { //for loop fills array
            printf("Enter number %d: \n", (i+1));
			scanf("%d", &input[i]);
        }
		int result = input[0];
		for (int i = 1; i < nums; i++) {
			result = result % input[i];
		}
        for (int i = 0; i < nums; i++) {
			if (i == nums-1) {
				printf("%d ", input[i]);
			} else {
                printf("%d %% ", input[i]);
            }
		}
		printf("= %d\n", result);
}

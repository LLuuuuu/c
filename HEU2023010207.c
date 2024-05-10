#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
    int divisible_by_3 = 0, divisible_by_5 = 0, divisible_by_7 = 0;
    
    scanf("%d", &number);
    
    // 检查是否能被3整除
    if (number % 3 == 0) {
        divisible_by_3 = 1;
    }
    
    // 检查是否能被5整除
    if (number % 5 == 0) {
        divisible_by_5 = 1;
    }
    
    // 检查是否能被7整除
    if (number % 7 == 0) {
        divisible_by_7 = 1;
    }
    
    // 输出结果
    if (divisible_by_3 && divisible_by_5 && divisible_by_7) {
        printf("Can be divisible by 3,5,7.\n");
    } else if (divisible_by_3 || divisible_by_5 || divisible_by_7) {
        printf("Can be divisible by ");
        if (divisible_by_3) printf("3");
        if (divisible_by_5) {
            if (divisible_by_3) printf(",");
            printf("5");
        }
        if (divisible_by_7) {
            if (divisible_by_3 || divisible_by_5) printf(",");
            printf("7");
        }
        printf(".\n");
    } else {
        printf("Can not be divisible by 3,5,7.\n");
    }
	
	return 0;
}


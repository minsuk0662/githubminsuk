#include <stdio.h>

int main() {
    int num1, num2;
    
    // 사용자로부터 두 개의 정수 입력 받기
    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &num1);
    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &num2);
    
    // 덧셈, 뺄셈, 곱셈, 나눗셈 결과 계산 및 출력
    printf("덧셈 결과: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("뺄셈 결과: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("곱셈 결과: %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        // 두 번째 숫자가 0이 아닌 경우에만 나눗셈 수행
        double divisionResult = (double)num1 / num2;
        printf("나눗셈 결과: %d / %d = %.2lf\n", num1, num2, divisionResult);
    } else {
        printf("0으로 나눌 수 없습니다.\n");
    }

    return 0;
}

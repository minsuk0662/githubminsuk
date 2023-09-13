#include <stdio.h>

int main(void) 
{
    int num1, num2;
    printf("두 개의 정수를 입력하세요: ");

    // 사용자로부터 두 개의 정수 입력 받기
    scanf_s("%d %d", &num1, &num2);

    // 덧셈 연산
    int sum = num1 + num2;
    printf("덧셈 결과: %d\n", sum);

    // 뺄셈 연산
    int difference = num1 - num2;
    printf("뺄셈 결과: %d\n", difference);

    // 곱셈 연산
    int product = num1 * num2;
    printf("곱셈 결과: %d\n", product);

    // 나눗셈 연산 (실수 결과를 얻기 위해 형변환)
    float quotient = (float)num1 / num2;
    printf("나눗셈 결과: %.2f\n", quotient); // 결과를 소수점 두 자리까지 출력

    return 0;
}
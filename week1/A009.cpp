#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int length = 0;
    // 문자열 길이 계산
    while (s[length] != '\0') {
        length++;
    }
    // 길이가 4 또는 6이 아닌 경우 false 반환
    if (length != 4 && length != 6) {
        return false;
    }
    // 문자열이 숫자로만 구성되어 있는지 확인
    for (int i = 0; i < length; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false; // 숫자가 아닌 문자가 포함된 경우 false 반환
        }
    }
    // 모든 조건을 만족하면 true 반환
    return answer;


}

int main() {
    // 테스트 케이스
    const char* test1 = "1234"; // true
    const char* test2 = "a234"; // false
    const char* test3 = "123456"; // true
    const char* test4 = "12345"; // false
    const char* test5 = "1234567"; // false

    printf("%s: %s\n", test1, solution(test1) ? "true" : "false");
    printf("%s: %s\n", test2, solution(test2) ? "true" : "false");
    printf("%s: %s\n", test3, solution(test3) ? "true" : "false");
    printf("%s: %s\n", test4, solution(test4) ? "true" : "false");
    printf("%s: %s\n", test5, solution(test5) ? "true" : "false");

    return 0;
}
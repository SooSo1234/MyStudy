#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));  // 난수 발생을 위한 초기화

    int computer, user, result;

    printf("가위(1), 바위(2), 보(3) 중 하나를 선택하세요.\n");
    printf("가위 = 1, 바위 = 2, 보 = 3\n");

    while (1)
    {
    while (1)
    {

      printf("선택: ");
      scanf_s("%d", &user);

        if (user < 1 || user > 3) 
        {
            printf("잘못된 입력입니다.\n");
        }
        else
            break;
    }

    computer = rand() % 3 + 1;  // 컴퓨터가 가위, 바위, 보 중 하나 선택

    printf("컴퓨터: %d\n", computer);

    result = (user - computer + 3) % 3;  // 승패 결정

    if (result == 0) {
        printf("비겼습니다.\n");
    }
    else if (result == 1) {
        printf("당신이 이겼습니다.\n");
        break;
    }
    else {
        printf("컴퓨터가 이겼습니다.\n");
    }

    }
    return 0;
}
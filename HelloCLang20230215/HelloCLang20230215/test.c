#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));  // ���� �߻��� ���� �ʱ�ȭ

    int computer, user, result;

    printf("����(1), ����(2), ��(3) �� �ϳ��� �����ϼ���.\n");
    printf("���� = 1, ���� = 2, �� = 3\n");

    while (1)
    {
    while (1)
    {

      printf("����: ");
      scanf_s("%d", &user);

        if (user < 1 || user > 3) 
        {
            printf("�߸��� �Է��Դϴ�.\n");
        }
        else
            break;
    }

    computer = rand() % 3 + 1;  // ��ǻ�Ͱ� ����, ����, �� �� �ϳ� ����

    printf("��ǻ��: %d\n", computer);

    result = (user - computer + 3) % 3;  // ���� ����

    if (result == 0) {
        printf("�����ϴ�.\n");
    }
    else if (result == 1) {
        printf("����� �̰���ϴ�.\n");
        break;
    }
    else {
        printf("��ǻ�Ͱ� �̰���ϴ�.\n");
    }

    }
    return 0;
}
#include<stdio.h>
int main()
{
//1~5번은 변수 필요 없음
//1. 내 이름은 $ s 입니다.
	printf("내 이름은 %s입니다.\n", "소병수");

//2. 내 혈액형은 % 입니다.(%?)
	printf("내 혈액형은 %s입니다.\n", "O");

//3. 내 나이는 %d살이고 나는 %d년생입니다.
	printf("내 나이는 %d살이고 나는 %d년생입니다.\n", 33, 1991);
	 
//4. 내 MBTI는 %s이고, 내 키는 %f입니다.
	printf("내 MBTI는 %s이고, 내 키는 %.1f입니다.\n", "ENFT", 177.8);
	
//5. 내 별명은 "%s" 입니다.
	printf("내 별명은 \"%s\"입니다.\n", "별명");

//6~7번은 변수 이용해야함
//6. 2x+7에서 x값 입력받고 값 출력하게 하기
	int x;
	printf("\n2x+7에서 x값을 입력하시오.\n");
	scanf_s("%d", &x);
	printf("%d\n", 2 * x + 7);
	
//7. 내 학점(A,B,C,D,F)을 입력 받아서 출력하기
	//해결방법 : 문자 입력 전 버퍼 청소하기
	//rewind(stdin); 문자를 입력할때만 이용, 숫자 입력 전이나 이럴땐 굳이 쓸 필요 없음
	//백준 알고리즘에선 이거때문에 에러가 나기도 하니 주의할 필요 있음
	char grade;
	printf("\n학점을 입력하시오.\n");
	rewind(stdin);
	scanf_s("%c", &grade,1);
	printf("\n내 학점은 %c입니다.\n", grade);
	
	//문자 입력 방법 2 
	rewind(stdin);
	printf("\n다시 학점 입력해봐\n");
	grade = getchar(); //getchar()도 문자 입력하는것 
	printf("\n%c\n", grade);


	return 0;
}
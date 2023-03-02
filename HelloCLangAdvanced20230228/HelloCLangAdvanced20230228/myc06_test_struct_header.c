#include<stdio.h>
#include"Position.h"
int main()
{
	MyPosition p1 = { .x = 10,.y = 20,.z = 30 };
	struct Pos p2 = { 10,20,30 };

	struct GameCharacter player1 = { .id = "핑크공주이동준",.level = 100,.p = p1 };
	MyPlayer player2 = { .id = "남자는핑크",.level = 255,.p = p2 };
	printf("%s %d %d %d %d\n", player1.id, player1.level, player1.p.x, player1.p.y, player1.p.z);
	printf("%s %d %d %d %d\n", player2.id, player2.level, player2.p.x, player2.p.y, player2.p.z);


	return 0;
}
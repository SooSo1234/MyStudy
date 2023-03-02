#pragma once
struct Pos {
	int x;
	int y;
	int z;

}typedef MyPosition;

struct GameCharacter {
	MyPosition p;
	char id[100];
	int level;

}typedef MyPlayer;

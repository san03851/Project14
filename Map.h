#pragma once
class Map
{
public:
	Map();
	~Map();

	struct GameObjects
	{
		int floor = 0;
		int Player = 1;
		int Enemy = 2;
		int Wall = 3;
		int Item = 4;
	};

	void CheckCollision(int Row, int Col, int* Mapptr, int* Playerpos, int* Enemypos);
	void CheckDestination();
	void CreateMap(int Row, int Col, int* Mapptr, int* Playerpos, int* Enemypos);
	void DrawMap(int Row, int Col, int* Mapptr);


};


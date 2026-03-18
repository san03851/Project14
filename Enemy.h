#pragma once
class Enemy
{
	Enemy();
	~Enemy();

	int EnemyX;
	int EnemyY;
	
	void GetPosition();
	void SetPosition();
	void EnemyMoveLogic();


};


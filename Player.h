#pragma once
class Player
{
public:
	Player();
	~Player();

	int PlayerX;
	int PlayerY;

	void GetPosition();
	void SetPosition();
	void PlayerControl();
};


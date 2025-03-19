#pragma once
#include "Singleton.h"
#include "config.h"

class Character;
class CollisionManager : public Singleton<CollisionManager>
{
private:
	Character* pLeft;
	Character* pRight;
public:
	HRESULT Init();
	void set(Character* player);
	bool isAttacked(RECT attackRC);
	bool isValidMove();

};


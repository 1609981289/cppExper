#pragma once
class Role
{
public:
	Role();
	Role(const char name[],int hp);
	~Role();
	void setRole(const char name[20],int hp);
	void show();
	void attack();
	void eat();
	void beAttack();
private:
    char name[20];
	int hp;
	bool is_live;
};


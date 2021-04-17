#include "Role.h"
#include <iostream>

Role::Role()
{
	this->is_live = true;
}

Role::Role(const char name[20], int hp)
{
	strcpy_s(this->name, name);
	this->hp = hp;
	this->is_live = true;
}

void Role::setRole(const char name[20], int hp)
{
	strcpy_s(this->name, name);
	this->hp = hp;
	if (hp >= 0)
	{
		this->is_live = true;
	}
	else
	{
		this->is_live = false;
	}
}

void Role::show()
{
	std::cout << "姓名:" << this->name << "\t血量:" << this->hp<<std::endl;
}

void Role::attack()
{
	this->hp += 1;
}

void Role::eat()
{
	this->hp += 2;
}

void Role::beAttack()
{
	this->hp -= 1;
	if (hp<=0)
	{
		this->is_live = false;
		delete this;
	}
}

Role::~Role()
{
	std::cout << this->name<<"退出江湖" << std::endl;
}
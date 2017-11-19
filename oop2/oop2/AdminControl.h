#pragma once
#include "Board.h"
#include "pacman.h"
#include "Ghost.h"
class AdminControl
{
public:
	AdminControl();
	~AdminControl();
private:
	Board m_board;
	Pacman m_pacman;
	Ghost m_elf;
};


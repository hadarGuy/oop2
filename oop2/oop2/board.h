#pragma once
class board
{
public:
	board();
	~board();
private:
	int size ;
	int score ;
	int screenNum ;

	pacman m_pacman ;
	elf m_elf ;

};


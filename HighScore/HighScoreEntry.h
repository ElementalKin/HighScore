#pragma once
#include <iostream>
#include <string>
class HighScoreEntry
{
public:
	std::string name;
	int score;
	int level;

	HighScoreEntry(std::string playernName, std::string playersScore, std::string playerLevel);
	~HighScoreEntry();
};
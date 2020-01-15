#include "HighScoreEntry.h"

HighScoreEntry::HighScoreEntry(std::string playernName, std::string playersScore, std::string playerLevel)
{
	name = playernName;
	score = std::stoi(playersScore);
	level = std::stoi(playerLevel);
}

HighScoreEntry::~HighScoreEntry()
{
	name = nullptr;
	score = NULL;
	level = NULL;
}

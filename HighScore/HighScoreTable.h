#pragma once
#include "HighScoreEntry.h"
#include <fstream>
#include <vector>

class HighScoreTable
{
public:
	std::fstream file;
	std::string buffer;
	std::vector<HighScoreEntry> hsVector;
	std::vector<HighScoreEntry> topNNScores(int topRows);
	bool pruneBottomNNScores(int bottomRows);

	HighScoreTable();
	HighScoreTable(std::string fileName);
	~HighScoreTable();
};
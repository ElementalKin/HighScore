#include "HighScoreTable.h"

std::vector<HighScoreEntry> HighScoreTable::topNNScores(int topRows)
{
	return std::vector<HighScoreEntry>();
}

bool HighScoreTable::pruneBottomNNScores(int bottomRows)
{
	return false;
}

HighScoreTable::HighScoreTable()
{
}

HighScoreTable::HighScoreTable(std::string fileName)
{
	file.open(fileName);
	if (!file.is_open())
	{
		std::cerr << "File not found." << std::endl;
	}
	else
	{
		while (std::getline(file, buffer))
		{
			int i = 0;
			std::string name;
			std::string points;
			std::string level;
			if (buffer.size() > 0)
			{
				


					if(i = 0)
					{
						name = buffer;
						i++;
					}
					else if (i = 1)
					{
						points = std::stoi(buffer);
						i++;
					}
					else if (i = 2)
					{
						level = std::stoi(buffer);
						i++;
					}
					

				hsVector.push_back(HighScoreEntry(name,points,level));
			}
		}


		
	}
}

HighScoreTable::~HighScoreTable()
{

}

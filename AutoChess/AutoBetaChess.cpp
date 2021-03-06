// AutoBetaChess.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "AlphaBetaSearch.h"
#include "ChessState.h"
#include <list>

#include "ChessRules.h"

namespace AutoChess {
	class AutoBetaChess : public AlphaBetaSearch<ChessState> {
	public:
		ChessState currentState;

	private:
		// Function that returns a Heuristic value calculated from the current game state.
		int heuristic(ChessState);

		// Function to test if the game has reach a conclusion
		bool terminalTest(ChessState);

		// Returns a list of all the next possible states from a current give state.
		std::list<ChessState> nextMoves(ChessState);
	};

	int AutoBetaChess::heuristic(ChessState)
	{
		return 0;
	}

	bool AutoBetaChess::terminalTest(ChessState)
	{
		return false;
	}

	std::list<ChessState> AutoBetaChess::nextMoves(ChessState)
	{
		return std::list<ChessState>();
	}

	int main()
	{
		//ChessRules cRules = ChessRules


		return 0;
	}
}
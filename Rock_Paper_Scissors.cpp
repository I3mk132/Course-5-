/// Project 1 :: Ammars Project first Try ::
// Rock - Paper - Scissors
 /*
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;


enum enGameStatus { Win = 1, Lost = 2, Draw = 3 };
enum enTools { Rock = 1, Paper = 2, Scissors = 3 };

struct stGameResults {
	int PlayerWon = 0;
	int PlayerLost = 0;
	int ComputerWon = 0;
	int ComputerLost = 0;
	int Draw = 0;
};

struct stGameStatus {

	stGameResults GameResults;
	
	int Rounds = 0;
	bool Continue = true;

};

void SetVariablesToZero(stGameStatus &GameStatus) {
	GameStatus.GameResults.ComputerLost = 0;
	GameStatus.GameResults.ComputerWon = 0;
	GameStatus.GameResults.PlayerLost = 0;
	GameStatus.GameResults.PlayerWon = 0;
	GameStatus.GameResults.Draw = 0;
	GameStatus.Rounds = 0;
	GameStatus.Continue = true;
}

int Randint(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

int ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

void ReadRounds(stGameStatus &GameStatus) {
	int Num;
	do {
		Num = ReadPositiveNumber("Enter a Number Between 1 - 10 : ");
	} while (!(Num <= 10 && Num > 0));
	GameStatus.Rounds = Num;
}

void PrintRoundStartMenu(int Round) {
	cout << "\n\nRound [" << Round << "] begins: \n\n";

}

enTools ReadPlayerChoice() {
	int Number;
	do {
		Number = ReadPositiveNumber("Your Choice: [1]:Rock,  [2]:Paper, [3]:Scissors ? ");
	} while (Number < 1 || Number > 3);
	return (enTools)Number;
}

enTools ReadComputerChoice() {
	return (enTools)Randint(1, 3);
}

void MakeEffects(enGameStatus GameStatus) {
	switch (GameStatus) {
	case enGameStatus::Draw: {
		system("Color 6F");
		break;
	}
	case enGameStatus::Lost: {
		system("Color 4F");
		break;
	}
	case enGameStatus::Win: {
		system("Color 2F");
		cout << '\a';
		break;
	}
	default: {
		cout << "hi";
	}
	}
}

enGameStatus PlayerChoicePaper(enTools ComputerChoice, stGameStatus &GameStatus) {

	
	switch (ComputerChoice) {

		case enTools::Rock: {
			GameStatus.GameResults.PlayerWon++;
			GameStatus.GameResults.ComputerLost++;
			return enGameStatus::Win;
		}

		case enTools::Scissors: {
			GameStatus.GameResults.PlayerLost++;
			GameStatus.GameResults.ComputerWon++;
			return enGameStatus::Lost;
		}

		case enTools::Paper: {
			GameStatus.GameResults.Draw++;
			return enGameStatus::Draw;
		}

	}

	
}

enGameStatus PlayerChoiceRock(enTools ComputerChoice, stGameStatus &GameStatus) {
	

	switch (ComputerChoice) {

		case enTools::Scissors: {
			GameStatus.GameResults.PlayerWon++;
			GameStatus.GameResults.ComputerLost++;
			return enGameStatus::Win;
		}

		case enTools::Paper: {
			GameStatus.GameResults.PlayerLost++;
			GameStatus.GameResults.ComputerWon++;
			return enGameStatus::Lost;
		}

		case enTools::Rock: {
			GameStatus.GameResults.Draw++;
			return enGameStatus::Draw;
		}

	}
}

enGameStatus PlayerChoiceScissors(enTools ComputerChoice, stGameStatus &GameStatus) {


	switch (ComputerChoice) {

		case enTools::Rock: {
			GameStatus.GameResults.PlayerWon++;
			GameStatus.GameResults.ComputerLost++;
			return enGameStatus::Win;
		}

		case enTools::Scissors: {
			GameStatus.GameResults.PlayerLost++;
			GameStatus.GameResults.ComputerWon++;
			return enGameStatus::Lost;
		}

		case enTools::Paper: {
			GameStatus.GameResults.Draw++;
			return enGameStatus::Draw;
		}

	}

}

enGameStatus GetResultAlgurithm(enTools PlayerChoice, enTools ComputerChoice, stGameStatus &GameStatus) {

	switch (PlayerChoice) {

		case enTools::Paper: {

			return PlayerChoicePaper(ComputerChoice, GameStatus);
		}

		case enTools::Rock: {

			return PlayerChoiceRock(ComputerChoice, GameStatus);

		}

		case enTools::Scissors: {

			return PlayerChoiceScissors(ComputerChoice, GameStatus);
			
		}

	}

}

string PrintRoundWinner(enGameStatus Winner) {
	switch (Winner) {
	case enGameStatus::Win: {
		return "Player1";
	}
	case enGameStatus::Lost: {
		return "Computer";
	}
	case enGameStatus::Draw:
		return "No Winner";
	}
}

string PrintChoice(enTools Choice) {
	switch (Choice) {
		case enTools::Paper: {
			return "Paper";
		}
		case enTools::Rock: {
			return "Rock";
		}
		case enTools::Scissors: {
			return "Scissors";
		}
	}
}

void PrintRoundEndMenu(int Round, string PlayerChoice, string ComputerChoise, string WinnerState) {
	cout << " _________________________ Round [" << Round << "] _________________________\n\n";
	cout << " Player1 Choice  : " << PlayerChoice << "\n";
	cout << " Computer Choice : " << ComputerChoise << "\n";
	cout << " Round Winner    : [" << WinnerState << "]\n\n";
	cout << " ________________________________________________________________" << endl;
}

enGameStatus GetFinalResult(stGameStatus GameStatus) {
	if (GameStatus.GameResults.ComputerWon > GameStatus.GameResults.PlayerWon) {
		return enGameStatus::Lost;
	}
	else if (GameStatus.GameResults.ComputerWon < GameStatus.GameResults.PlayerWon) {
		return enGameStatus::Win;
	}
	else {
		return enGameStatus::Draw;
	}
}

string GetWinner(enGameStatus GameWinner) {
	switch (GameWinner) {
	case enGameStatus::Lost: {
		return "Computer";
	}
	case enGameStatus::Win: {
		return "Player1";
	}
	case enGameStatus::Draw: {
		return "No Winner";
	}
	}
}

void PrintGameStatus(int Round, int Player1Wins, int ComputerWins, int Draws, string FinalWinner) {
	string FiveTabs = "\t\t\t";
	string Line = "___________________________________________________________________________";

	cout << FiveTabs << "___________________________ ( Game Results ) _____________________________\n\n";
	cout << FiveTabs << "Game Rounds :" << Round << "\n";
	cout << FiveTabs << "Player1 won Times : " << Player1Wins << "\n";
	cout << FiveTabs << "Computer won Times : " << ComputerWins << "\n";
	cout << FiveTabs << "Darw times : " << Draws << "\n";
	cout << FiveTabs << "Final Winner : " << FinalWinner << "\n";
	cout << FiveTabs << Line << endl << endl;
}

void PrintGameOver() {
	string Line = "___________________________________________________________________________";
	string FiveTabs = "\t\t\t";
	cout << endl;
	cout << FiveTabs << Line << "\n\n";
	cout << FiveTabs << FiveTabs << "+++ G a m e  O v e r +++\n\n";
	cout << FiveTabs << Line << "\n\n";
	
}

bool ReadPlayAgain() {
	string FiveTabs = "\t\t\t";
	char Play; 
	
	do {
		cout << "\n" << FiveTabs << "Do you wnat to play again? (Y/N) : \n";
		cin >> Play;
	} while (!(Play == 'Y' || Play == 'y' || Play == 'N' || Play == 'n'));

	if (Play == 'Y' || Play == 'y') {
		return true;
	}
	else {
		return false;
	}
}

void StartGame() {
	stGameStatus GameStatus;
	
	while (GameStatus.Continue) {
		SetVariablesToZero(GameStatus);
		ReadRounds(GameStatus);
		for (int Round = 1; Round <= GameStatus.Rounds; Round++) {

			PrintRoundStartMenu(Round);
			enTools PlayerChoose = ReadPlayerChoice();
			enTools ComputerChoose = ReadComputerChoice();
			enGameStatus GStatus = GetResultAlgurithm(PlayerChoose, ComputerChoose, GameStatus);
			MakeEffects(GStatus);
			PrintRoundEndMenu(Round, PrintChoice(PlayerChoose), PrintChoice(ComputerChoose), GetWinner(GStatus));

		}
		string AllGameStatus = GetWinner(GetFinalResult(GameStatus));
		PrintGameOver();
		PrintGameStatus(GameStatus.Rounds, GameStatus.GameResults.PlayerWon,
			GameStatus.GameResults.ComputerWon, GameStatus.GameResults.Draw,
			AllGameStatus);

		if (ReadPlayAgain()) {
			GameStatus.Continue = true;
		}
		else {
			GameStatus.Continue = false;
		}
	}
}

int main() {
	srand((unsigned)time(NULL));
	StartGame();
}
*/
/// Project 1 :: Ammars Project Second Try ::
// Rock - Paper - Scissors

#include <iostream>
#include <cstdlib>

using namespace std;

enum enGameChoice { Rock = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundNumber {
	short RoundNumber = 0;
	enGameChoice Player1Choice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName;
};

struct stGameResults {
	short GameRounds = 0;
	short Player1WinTimes = 0;
	short ComputerWinTimes = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName = "";
};

short Randint(short From, short To) {
	short Num = rand() % (To - From + 1) + From;
	return Num;
}

string Tabs(int Num) {
	string t = "";
	for (int i = 1; i <= Num; i++) {
		t += "\t";
	}
	return t;
}

enGameChoice GetComputerChoice() {
	return (enGameChoice)Randint(1, 3);
}

enGameChoice ReadPlayerChoice() {
	int Num;
	do {
		cout << "Your Choice : [1]:Rock, [2]:Paper, [3]:Scissors ? " << endl;
		cin >> Num;

	} while (Num < 1 || Num > 3);
	return (enGameChoice)Num;
}

string WinnerName(enWinner Winner) {
	string RoundWinnerArray[3] = { "Player1", "Computer", "No Winner" };
	return RoundWinnerArray[Winner - 1];
}

string ChoiceName(enGameChoice ChoiceName) {
	string ChoiceNameArray[3] = { "Rock", "Paper", "Scissors" };
	return ChoiceNameArray[ChoiceName - 1];
}

void PrintRoundResults(stRoundNumber RoundNumber) {
	cout << "_____________Round [" << RoundNumber.RoundNumber << "]_____________\n\n";
	cout << "Player1  Choice: " << ChoiceName(RoundNumber.Player1Choice) << "\n";
	cout << "Computer Choice: " << ChoiceName(RoundNumber.ComputerChoice) << "\n";
	cout << "Round Winner   : [" << RoundNumber.WinnerName << "]\n";
	cout << "_______________________________________" << endl;
}

enWinner GetRoundWinner(stRoundNumber& RoundNumber) {

	if (RoundNumber.Player1Choice == RoundNumber.ComputerChoice) {
		return enWinner::Draw;
	}

	switch (RoundNumber.Player1Choice) {
	case enGameChoice::Paper: {

		if (RoundNumber.ComputerChoice == enGameChoice::Scissors) {
			return enWinner::Computer;
		}
		break;

	}
	case enGameChoice::Rock: {

		if (RoundNumber.ComputerChoice == enGameChoice::Paper) {
			return enWinner::Computer;
		}
		break;

	}

	case enGameChoice::Scissors: {

		if (RoundNumber.ComputerChoice == enGameChoice::Rock) {
			return enWinner::Computer;
		}
		break;

	}

	default: {
		return enWinner::Player1;
	}

	}
}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes) {
	if (Player1WinTimes == ComputerWinTimes) {
		return enWinner::Draw;
	}
	else if (Player1WinTimes < ComputerWinTimes) {
		return enWinner::Computer;
	}
	else {
		return enWinner::Player1;
	}
}

stGameResults FillGameResults(short AmountOfRounds, short PlayerWins, short ComputerWins, short Draws) {
	stGameResults GameResults;

	GameResults.GameRounds = AmountOfRounds;
	GameResults.Player1WinTimes = PlayerWins;
	GameResults.ComputerWinTimes = ComputerWins;
	GameResults.DrawTimes = Draws;
	GameResults.GameWinner = WhoWonTheGame(GameResults.Player1WinTimes, GameResults.ComputerWinTimes);
	GameResults.WinnerName = WinnerName(GameResults.GameWinner);

	return GameResults;
}

stGameResults PlayGame(short AmountOfRounds) {
	stRoundNumber RoundNumber;
	short PlayerWins = 0, ComputerWins = 0, Draws = 0;

	for (short i = 1; i <= AmountOfRounds; i++) {
		cout << "Round [" << i << "] begins: \n" << endl;
		RoundNumber.RoundNumber = i;
		RoundNumber.Player1Choice = ReadPlayerChoice();
		RoundNumber.ComputerChoice = GetComputerChoice();
		RoundNumber.Winner = GetRoundWinner(RoundNumber);
		RoundNumber.WinnerName = WinnerName(RoundNumber.Winner);

		// Counters
		if (RoundNumber.Winner == enWinner::Player1) {
			PlayerWins++;
			system("Color 2F");
		}
		else if (RoundNumber.Winner == enWinner::Computer) {
			ComputerWins++;
			system("Color 4F");
		}
		else {
			Draws++;
			system("Color 3F");
		}

		PrintRoundResults(RoundNumber);
	}

	return FillGameResults(AmountOfRounds, PlayerWins, ComputerWins, Draws);
}

short ReadAmountOffRounds() {
	short Num;
	do {
		cout << "How many Rounds 1 to 10 ? " << endl;
		cin >> Num;
	} while (Num < 1 || Num > 10);
	return Num;
}

void ResetScreen() {
	system("cls");
	system("Color 0F");
}

void PrintGameOver() {
	cout << Tabs(2) << "_____________________________________________________\n\n";
	cout << Tabs(4) << "+++ G A M E  O V E R +++\n";
	cout << Tabs(2) << "_____________________________________________________\n\n";
}

void PrintGameResults(stGameResults GameResults) {
	cout << Tabs(2) << "__________________ [ Game Results ] ___________________\n\n";
	cout << Tabs(2) << "Game Rounds        : " << GameResults.GameRounds << "\n";
	cout << Tabs(2) << "Player1 won Times  : " << GameResults.Player1WinTimes << "\n";
	cout << Tabs(2) << "Computer won times : " << GameResults.ComputerWinTimes << "\n";
	cout << Tabs(2) << "Draw Times         : " << GameResults.DrawTimes << "\n";
	cout << Tabs(2) << "Final Winner       : " << WinnerName(GameResults.GameWinner) << "\n";
	cout << Tabs(2) << "________________________________________________________\n" << endl;
}

void StartGame() {
	char PlayAgain = 'Y';

	do {
		ResetScreen();
		stGameResults GameResults = PlayGame(ReadAmountOffRounds());
		PrintGameOver();
		PrintGameResults(GameResults);

		cout << "Do you wnat to play again? Y/N ? " << endl;
		cin >> PlayAgain;
	} while (PlayAgain == 'y' || PlayAgain == 'Y');
	cout << "Bye!" << endl;
}

int main() {
	srand((unsigned)time(NULL));

	StartGame();

}

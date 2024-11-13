/// Project 2 :: Ammar Made. ::
// Math Game. 
/*
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

enum enDifficultys{ Easy = 1, Medium = 2, Hard = 3, Mix = 4};
enum enOperationType{ Add = 1, Sub = 2, Mult = 3, Div = 4, Mix = 5};
enum enisPass { Pass = 1, Fail = 2 };

struct stGameInfo {

	enDifficultys Difficulty;
	enOperationType OpType;
	enisPass isPass;
	short RightAnswers = 0;
	short WrongAnswres = 0;
	short NumberOfQuestions = 0;


};

bool ValidateNumberBetween(short Num, short from, short to) {
	return (Num >= from || Num <= to);
}

int Randint(short From, short To) {
	int Num = rand() % (To - From + 1) + From;
	return Num;
}

short ReadRounds() {
	short Num;
	do {
		cout << "Enter How Many Questions do you want to answer? : " << endl;
		cin >> Num;

	} while (!ValidateNumberBetween(Num, 1, 100));
	return Num;
}

enDifficultys ReadDifficulty() {
	short Num;
	do {
		cout << "Enter Question Level [1] Easy, [2] Med, [3] Hard, [4] Mix ? : " << endl;
		cin >> Num;

	} while (!ValidateNumberBetween(Num, 1, 4));

	return (enDifficultys)Num;
}

enOperationType ReadOperationType() {
	short Num;
	do {
		cout << "Enter Question Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix? : " << endl;
		cin >> Num;
	} while (!ValidateNumberBetween(Num, 1, 5));

	return (enOperationType)Num;
}

short GetQuestionNumber(enDifficultys Difficulty) {
	switch (Difficulty) {

		case enDifficultys::Easy: {
			return Randint(1, 10);
		}
		case enDifficultys::Medium: {
			return Randint(11, 50);
		}
		case enDifficultys::Hard: {
			return Randint(51, 100);
		}
		case enDifficultys::Mix : {
			return Randint(1, 100);
		}
	}
}

short GetQuestionAnswer(enOperationType OpType, short Num1, short Num2) {
	switch (OpType) {

		case enOperationType::Add: {
			return Num1 + Num2;
		}
		case enOperationType::Sub: {
			return Num1 - Num2;
		}
		case enOperationType::Mult: {
			return Num1 * Num2;
		}
		case enOperationType::Div: {
			return Num1 / Num2;
		}

	}
}

char OperationName(enOperationType OpType) {
	char arr[5] = { '+', '-', '*', '/', 'X'};
	return arr[OpType - 1];
}

string DifficultyName(enDifficultys Difficulty) {
	string arr[4] = { "Easy", "Medium", "Hard", "Mix" };
}

void PrintQuestionNumber(short QuestionNum, short TotalQuestion) {
	cout << "\n\nQuestion [" << QuestionNum << "/" << TotalQuestion << "] : " << endl;
}

short ReadQuestionAnswer(short Num1, short Num2, char OpType) {
	short Answer;
	cout << Num1 << "\n";
	cout << Num2 << " " << OpType << "\n";
	cout << "___________\n";
	cin >> Answer;
	return Answer;
}

string Tabs(short Num) {
	string t = "";
	for (int i = 1; i <= Num; i++) {
		t += "\t";
	}
	return t;
}

enisPass CheckIfPass(short Num1, short Num2) {
	if (Num1 > Num2) {
		return enisPass::Pass;
	}
	else {
		return enisPass::Fail;
	}
}

void FinalResult(enisPass isPass) {
	cout << "_________________________\n\n";
	cout << "Final Results is ";
	if (isPass == enisPass::Pass) {
		cout << "PASS :-)\n";
	}
	else {
		cout << "FAIL :-(\n";
	}
	cout << "_________________________" << endl;
}

void PrintGameResultsScreen(stGameInfo GameInfo) {
	FinalResult(GameInfo.isPass);
	cout << "_____________________________________\n";
	cout << "Number Of Questions     : " << GameInfo.NumberOfQuestions << "\n";
	cout << "Question Level          : " << GameInfo.Difficulty << "\n";
	cout << "OpType                  : " << GameInfo.OpType << "\n";
	cout << "Number of Right Answers : " << GameInfo.RightAnswers << "\n";
	cout << "Number of Wrong Answers : " << GameInfo.WrongAnswres << "\n";
	cout << "_____________________________________" << endl;
}

stGameInfo FillGameInfo(short TotalRounds, short RightAnswers,
	short WrongAnswers, enDifficultys Difficulty, enOperationType DefOpType, enisPass isPass) {
	stGameInfo GI;
	GI.NumberOfQuestions = TotalRounds;
	GI.RightAnswers = RightAnswers;
	GI.WrongAnswres = WrongAnswers;
	GI.Difficulty = Difficulty;
	GI.OpType = DefOpType;
	GI.isPass = isPass;

}

stGameInfo PlayGame(short TotalRounds) {
	short RightAnswers = 0, WrongAnswers = 0;
	enisPass isPass;
	enDifficultys Difficulty = ReadDifficulty();
	enOperationType DefOpType = ReadOperationType();
	enOperationType OpType = DefOpType;

	for (short i = 1; i <= TotalRounds; i++) {
		short PlayerAnswer;
		PrintQuestionNumber(i, TotalRounds);

		short Num1 = GetQuestionNumber(Difficulty);
		short Num2 = GetQuestionNumber(Difficulty);

		if (OpType == enOperationType::Mix) {
			OpType = (enOperationType)Randint(1, 4);
		}

		short Answer = GetQuestionAnswer(OpType, Num1, Num2);
		// counters
		if (Answer == ReadQuestionAnswer(Num1, Num2, OperationName(OpType))) {
			RightAnswers++;
			cout << "\nRight Answer :-)\a" << endl;
			system("Color 2F");
		}
		else {
			WrongAnswers++;
			cout << "\nWrong Answer :-(" << endl;
			system("Color 4F");
		}
	}

	isPass = CheckIfPass(RightAnswers, WrongAnswers);

	return FillGameInfo(TotalRounds, RightAnswers, WrongAnswers, Difficulty, DefOpType, isPass);
}

void StartGame() {
	char PlayAgain = 'Y';
	do {
		stGameInfo GameInfo = PlayGame(ReadRounds());
		PrintGameResultsScreen(GameInfo);


	} while (PlayAgain == 'Y' || PlayAgain == 'y');
	cout << "Bye!!" << endl;
}

int main() {
	srand((unsigned)time(NULL));

	StartGame();
}
*/

// Project 2 :: Second Try ::
// Math Game : 

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum enOperationType{ Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5};
enum enQuestionsLevel{ EasyLevel = 1, MediumLevel = 2, HardLevel = 3, Mix = 4};

struct stQuestion {
	short Number1 = 0;
	short Number2 = 0;
	enOperationType OperationType;
	enQuestionsLevel QuestionLevel;
	short CorrectAnswer = 0;
	short UserAnswer = 0;
	bool isCorrect = false;
};

struct stQuizz {
	stQuestion QuestionList[100];
	short NumberOfQuestions;
	enQuestionsLevel QuestionLevel;
	enOperationType OpType;
	short NumberOfRightAnswers = 0;
	short NumberOfWrongAnswers = 0;
	bool isPass = false;
};

short Randint(short from, short to) {
	return (rand() % (to - from + 1) + from);
}

short ReadNumberBetween(string Message, short from, short to) {
	short Num;
	do {
		cout << Message << endl;
		cin >> Num;
	} while (!(Num >= from && Num <= to));
	return Num;
}

string Tabs(short Num) {
	string t = "";
	for (short i = 1; i <= Num; i++) {
		t += "\t";
	}
	return t;
}

string GetQuestionLevelName(enQuestionsLevel QuestionLevel) {
	string arr[4] = { "EasyLevel", "MediumLevel", "HardLevel", "Mix" };
	return arr[QuestionLevel - 1];
}

string GetOperationTypeName(enOperationType OpType) {
	string arr[5] = { "Add", "Sub", "Mult", "Div", "Mix" };
	return arr[OpType - 1];
}

char GetOperationTypeSymbol(enOperationType OpType) {
	char arr[4] = { '+', '-', '*', '/' };
	return arr[OpType - 1];
}

short SimpleCalculator(short Num1, short Num2, enOperationType OpType) {
	switch (OpType) {
		case enOperationType::Add: {
			return Num1 + Num2;
		}
		case enOperationType::Sub: {
			return Num1 - Num2;
		}
		case enOperationType::Mult: {
			return Num1 * Num2;
		}
		case enOperationType::Div: {
			return Num1 / Num2;
		}
	}
}

stQuestion GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OperationType) {
	stQuestion Question;

	if (QuestionLevel == enQuestionsLevel::Mix) {
		QuestionLevel = (enQuestionsLevel)Randint(1, 3);
	}
	if (OperationType == enOperationType::MixOp) {
		OperationType = (enOperationType)Randint(1, 4);
	}

	switch (QuestionLevel) {
		case enQuestionsLevel::EasyLevel: {
			Question.Number1 = Randint(1, 10);
			Question.Number2 = Randint(1, 10);
			break;
		}
		case enQuestionsLevel::MediumLevel: {
			Question.Number1 = Randint(10, 50);
			Question.Number2 = Randint(10, 50);
			break;
		}
		case enQuestionsLevel::HardLevel: {
			Question.Number1 = Randint(50, 100);
			Question.Number2 = Randint(50, 100);
			break;
		}					
	}
	Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, OperationType);
	Question.QuestionLevel = QuestionLevel;
	Question.OperationType = OperationType;

	return Question;

}

void CorrectQuestionAnswer(stQuizz& Quizz, short QuestionNumber) {

	if (Quizz.QuestionList[QuestionNumber].CorrectAnswer == Quizz.QuestionList[QuestionNumber].UserAnswer) {
		Quizz.QuestionList[QuestionNumber].isCorrect = true;
		Quizz.NumberOfRightAnswers++;

		cout << "Right Answer :-)\n";
		system("Color 0A");
	}
	else {
		Quizz.QuestionList[QuestionNumber].isCorrect = false;
		Quizz.NumberOfWrongAnswers++;

		cout << "Wrong Answer :-(\n";
		cout << "The right Answer is: " << Quizz.QuestionList[QuestionNumber].CorrectAnswer << "\n";
		system("Color 0C");
	}
	cout << endl;
}

short ReadQuestionAnswer() {
	short Answer;
	cin >> Answer;
	return Answer;
}

void PrintQuestion(stQuizz Quizz, short QuestionNumber) {
	cout << "\nQuestion [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "] \n\n";
	cout << Quizz.QuestionList[QuestionNumber].Number1 << endl;
	cout << Quizz.QuestionList[QuestionNumber].Number2 << " ";
	cout << GetOperationTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType) << endl;
	cout << "_____________" << endl;
}

void AskAndCorrectQuestionListAnswers(stQuizz& Quizz) {
	for (short Question = 0; Question < Quizz.NumberOfQuestions; Question++) {

		PrintQuestion(Quizz, Question);
		Quizz.QuestionList[Question].UserAnswer = ReadQuestionAnswer();

		CorrectQuestionAnswer(Quizz, Question);

	}
	Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);
}

void ResetScreen() {
	system("cls");
	system("Color 0F");
}

void MakeQuizzQuestions(stQuizz& Quizz) {
	for (short Question = 0; Question < Quizz.NumberOfQuestions; Question++) {
		Quizz.QuestionList[Question] = GenerateQuestion(Quizz.QuestionLevel, Quizz.OpType);
	}
}

string GetFinalResultsText(bool isPass) {
	if (isPass) {
		system("Color 2F");
		return "PASS :-)";
	}
	else {
		system("Color 4F");
		return "FAIL :-(";
	}
}


void PrintEndGameMenu(stQuizz Quizz) {
	cout << Tabs(2) << "\n____________________________________________\n\n";
	cout << Tabs(2) << "Final Results is " << GetFinalResultsText(Quizz.isPass) << "\n";
	cout << Tabs(2) << "\n______________________________________________\n\n";

	cout << Tabs(2) << "Number Of Questions     : " << Quizz.NumberOfQuestions << endl;
	cout << Tabs(2) << "Questions Level         : " << GetQuestionLevelName(Quizz.QuestionLevel) << endl;
	cout << Tabs(2) << "OperationType           : " << GetOperationTypeName(Quizz.OpType) << endl;
	cout << Tabs(2) << "Number Of Right Answers : " << Quizz.NumberOfRightAnswers << endl;
	cout << Tabs(2) << "Number Of Wrong Answers : " << Quizz.NumberOfWrongAnswers << endl;
	cout << Tabs(2) << "________________________________________________\n" << endl;
}

void PlayMathGame() {
	stQuizz Quizz;

	Quizz.NumberOfQuestions = ReadNumberBetween("Enter The Number Of Question : ", 1, 10);
	Quizz.QuestionLevel = (enQuestionsLevel)ReadNumberBetween(
		"Enter the question Level [1]:Easy, [2]:Normal, [3]:Hard, [4]:Mix ? :", 1, 4);
	Quizz.OpType = (enOperationType)ReadNumberBetween(
		"Enter The Operation Type [1]:Add, [2]:Sub, [3]:Mult, [4]:Div, [5]:Mix ? : ", 1, 5);


	MakeQuizzQuestions(Quizz);
	AskAndCorrectQuestionListAnswers(Quizz);
	PrintEndGameMenu(Quizz);

}

void StartGame() {
	char PlayAgain = 'y';
	do {
		
		ResetScreen();
		PlayMathGame();

		cout << "Do you want to Play Again? Y/N : " << endl;
		cin >> PlayAgain;

	} while (PlayAgain == 'y' || PlayAgain == 'Y');
	cout << "\n\nBye" << endl;
}

int main() {
	srand((unsigned)time(NULL));

	StartGame();
}

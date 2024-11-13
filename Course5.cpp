/// --------------------------------- ( Course 5 Algorithms And Problem Solving ) ----------------------------------
// Problem #1 ( Multiplication Table 1 to 10 )
/*
#include <iostream>
using namespace std;

void PrintTableHeader(){
    cout << "\n\n\t\t\t multiplication Table From 1 to 10 \n\n\t\t";
    for (int i = 1; i <= 10; i++){
        cout << i << "\t";
    }
    cout << "\n________________________________________________________________________________________" << endl;

}

string ColumSperator(int i){
    if (i < 10){
        return "   |";
    } else {
        return "  |";
    }
}

void PrintMultiplicationTable(){
    PrintTableHeader();
    for (int i = 1; i <= 10; i++){
        cout << " " << i << ColumSperator(i) << "\t";
        for (int j = 1; j <= 10; j++){
            cout << j * i << "\t";
        }
        cout << endl;
    }
}

int main(){
    PrintMultiplicationTable();
}
 */
// Problem #2 ( Print All Prime Numbers 1 to N )
/*
#include <iostream>
#include <string>
using namespace std;

enum enPrimeOrNot{ Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Message){
    int Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

enPrimeOrNot CheckIfPrime(int Num){
    int M = Num/2;
    for (int Counter = 2; Counter <= M; Counter++){
        if (Num % Counter == 0) {
            return enPrimeOrNot::NotPrime;
        }
    }
    return enPrimeOrNot::Prime;
}

void PrintResults(int Number){
    cout << "Printing Numbers from 1 to " << Number << endl << endl;
    cout << "Number : 1 is not a Prime Number. " << endl;
    for (int i = 2; i <= Number; i++){
        if (CheckIfPrime(i) == enPrimeOrNot::Prime){

            cout << "Number : " << i << " is a Prime Number. " << endl;
        } else {

            cout << "Number : " << i << " is not a Prime Number. " << endl;
        }
    }
}

int main(){
    PrintResults(ReadPositiveNumber("Enter a Positive Number -N- : "));

    return 0;
}
 */
// Problem #3 ( Perfect Number )
/* //Ammar Way
#include <iostream>
#include <string>

using namespace std;

enum PerfectOrNot{Perfect = 1, NotPerfect = 2};

int ReadPositiveNumber(string Message){
    int Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

PerfectOrNot CheckIfPerfect(int Num){

    int Sum = 0;
    for (int counter = 1; counter <= Num/2; counter++){
        if (Num % counter == 0){
            Sum += counter;
        }
    }
    if (Sum == Num){

        return PerfectOrNot::Perfect;
    } else {
        cout << Sum << endl;
        return PerfectOrNot::NotPerfect;
    }
}

void PrintResult(PerfectOrNot Result, int Num){

    if (Result == PerfectOrNot::Perfect){
        cout << "The Number " << Num << " is Perfect. " << endl;
    } else {
        cout << "The Number " << Num << " is Not Perfect. " << endl;
    }
}

int main(){
    int Number = ReadPositiveNumber("Enter a Positive Number to Check if it is Perfect : ");
    PrintResult(CheckIfPerfect(Number), Number);
    return 0;
}
 */
/* //Abu-Hadhoud Way
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while ( Number <= 0);
    return Number;
}

bool isPerfectNumber(int Number){
    int Sum = 0;
    for (int i = 1; i < Number; i++){
        if (Number % i == 0){
            Sum += i;
        }
    }
    return Number == Sum;
}

void PrintResult(int Number){
    if (isPerfectNumber(Number)){
        cout << Number << " Is Perfect Number. \n";
    } else {
        cout << Number << " Is Not Perfect Number. 'n";
    }
}

int main(){
    PrintResult(ReadPositiveNumber("Please enter a positive Number? :"));
    return 0;
}
 */
// Problem #4 ( Perfect Number from 1 to N )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

bool CheckIfPerfect(int Num){
    int Sum = 0;
    for (int counter = 1; counter < Num; counter++){
        if (Num % counter == 0){
            Sum += counter;
        }
    }
    return Sum == Num;
}

void PrintNumFrom1toN(int N){
    for (int i = 1; i <= N; i++){
        if (CheckIfPerfect(i)){
            cout << "Number " << i << " is Perfect." << endl;
        } else {
            cout << "Number " << i << " is Not Perfect." << endl;
        }
    }
}

int main(){
    PrintNumFrom1toN(ReadPositiveNumber("Enter a Positive Number : "));
    return 0;
}
 */
// Problem #5 ( Print Digits in a Reversed Order )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void PrintNumbersReversed(int Number){
    int temp = 0;
    while (Number > 0){
        temp = Number % 10;
        Number /= 10;
        cout << temp << endl;
    }

}
int main(){
    PrintNumbersReversed(ReadPositiveNumber("Enter a Positive Number : "));

    return 0;
}
 */
// Problem #6 ( Sum of Digits )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int PrintSumOfDigits(int Number){
    int temp = 0;
    int sum = 0;
    while (Number > 0){
        temp = Number % 10;
        Number /= 10;
        cout << temp << endl;
        sum += temp;
    }
    cout << "********************" << endl;
    return sum;
}

int main(){
    int Num  = ReadPositiveNumber("Enter a Positive Number : ");
    int sum = PrintSumOfDigits(Num);
    cout << "Sum of Digits = " << sum << endl;
}
 */
// Problem #7 ( Reverse Number )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int GetReverse(int Num){
    int Temp = 0;
    int result = 0;

    while (Num > 0){
        Temp = Num % 10;
        Num /= 10;
        result = result * 10 + Temp;
    }
    return result;
}

int main(){
    int Num = ReadPositiveNumber("Enter a Positive Number : ");
    cout << "The Reverse is : " << GetReverse(Num) << endl << endl;
    return 0;
}
*/
// Problem #8 ( Digit Frequency )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int CheckFrequency(int Num1, short Num2){
    int Temp = 0;
    int Frequency = 0;
    while (Num1 > 0){
        Temp = Num1 % 10;
        Num1 /= 10;
        if (Temp == Num2){
            Frequency++;
        }
    }
    return Frequency;
}

int main(){
    int Num1 = ReadPositiveNumber("Enter a Positive Number : ");
    short Num2 = (short) ReadPositiveNumber("Want to check for which Number? : ");

    int Frequency = CheckFrequency (Num1, Num2);

    cout << "Digit " << Num2 << " Frequency is " << Frequency << " Time(s)." << endl;

    return 0;
}
 */
// Problem #9 ( Digit Frequency )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int CheckFrequency(int Num1, short Num2){
    int Temp = 0;
    int Frequency = 0;
    while (Num1 > 0){
        Temp = Num1 % 10;
        Num1 /= 10;
        if (Temp == Num2){
            Frequency++;
        }
    }
    return Frequency;
}

void PrintAllDigitFrequency(int Num){
    cout << endl;
    int Frequency = 0;
    for (short i = 0; i <= 9; i++){
        Frequency = CheckFrequency(Num, i);
        if (Frequency > 0) {
            cout << "Digit " << i << " Frequency is " << Frequency << " Time(s)." << endl;
        }
    }
}

int main(){
    int Num1 = ReadPositiveNumber("Enter a Positive Number : ");
    PrintAllDigitFrequency(Num1);
    return 0;
}
 */
// Problem #10 ( Print Digits in Order )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumbers(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int ReverseNumber(int Number){
    int temp = 0, Num2 = 0;
    while (Number > 0) {
        temp = Number % 10;
        Number /= 10;
        Num2 = Num2 * 10 + temp;
    }
    return Num2;
}


void PrintNumber(int Number){
    int Temp = 0;
    while (Number > 0){
        Temp = Number % 10;
        Number /= 10;
        cout << Temp << endl;
    }
}

int main(){
    PrintNumber(ReverseNumber(ReadPositiveNumbers("Enter a Positive Number : ")));

    return 0;
}
 */
// Problem #11 ( Palindrome Number )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumbers(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int ReverseNumber(int Number){
    int temp = 0, Num2 = 0;
    while (Number > 0) {
        temp = Number % 10;
        Number /= 10;
        Num2 = Num2 * 10 + temp;
    }
    return Num2;
}

bool IsPalindromeNumber(int Number){
    return Number == ReverseNumber(Number);
}

int main(){
    if (IsPalindromeNumber(ReadPositiveNumbers("Enter a Positive Number : "))){
        cout << "\nYes, it is a Palindrome Number. " << endl;
        system("color 2F");
    } else {
        system("color 4F");
        cout << "\n NO, It is Not a Palindrome Number. " << endl;
    }

    return 0;
}
*/
// Problem #12 ( Inverted number pattern )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumbers(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void PrintNumbers(int Number){
    for (int i = Number; i >= 1; i--){

        for (int j = 1; j <= i; j++){

            cout << i;

        }

        cout << endl;

    }
}

int main(){
    PrintNumbers(ReadPositiveNumbers("Enter a Positive Number : "));

    return 0;
}
 */
// Problem #13 ( Number Pattern )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumbers(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void PrintNumber(int Number){
    for (int i = 1; i <= Number; i++){
        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    PrintNumber(ReadPositiveNumbers("Enter a Positive Number : "));

    return 0;
}
 */
// Problem #14 ( Inverted letter pattern )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumbers(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int printNumbers(int Number){
    int LetterA = 65;
    for (int i = LetterA+Number-1; i >= LetterA; i--){
        for (int j = i; j >= LetterA; j--){
            cout << char(i);
        }
        cout << endl;
    }
}

int main(){
    printNumbers(ReadPositiveNumbers("Enter a Positive Number : "));

    return 0;
}
 */
// Problem #15 ( Letter Pattern )
/*
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumbers(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void printNumbers(int Number){
    int LetterA = 65;
    for (int i = LetterA; i < LetterA+Number; i++){
        for (int j = LetterA; j <= i; j++){
            cout << char(i);
        }
        cout << endl;
    }
}

int main(){
    printNumbers(ReadPositiveNumbers("Enter a Positive Number : "));

    return 0;
}
 */
// Problem #16 ( All Word from AAA to ZZZ )
/*
#include <iostream>
#include <string>

using namespace std;

void PrintWordFromAAAtoZZZ() {
	cout << "\n";
	string word = "";
	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {

			for (int k = 65; k <= 90; k++) {
				word += char(i);
				word += char(j);
				word += char(k);

				cout << word << endl;

				word = "";
			}
		}
		cout << endl;
	}
}

int main() {
	PrintWordFromAAAtoZZZ();
	return 0;
}
*/
// Problem #17 ( Guess a 3-Letter Password )
/*
#include <iostream>
#include <string>

using namespace std;

string ReadPassword() {
	string Password;
	do {
		cout << "Please enter a 3-Letter Password ( all capital ) ? : " << endl;
		cin >> Password;
	} while (Password.length() != 3);
	return Password;
}

bool PasswordGuesser(string Password) {
	int LetterA = 65, LetterZ = 90;
	string word = "";
	int counter = 0;
	cout << endl;
	for (int i = LetterA; i <= LetterZ; i++) {
		for (int j = LetterA; j <= LetterZ; j++) {
			for (int k = LetterA; k <= LetterZ; k++) {
				counter++;
				word += char(i);
				word += char(j);
				word += char(k);

				cout << "Trial [" << counter << "]: " << word << endl;

				if (word == Password) {
					cout << "The Password is : " << word << endl;
					cout << "Found after " << counter << " Trial(s)" << endl;
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}

int main() {
	PasswordGuesser(ReadPassword());

	return 0;
}
*/
// Problem #18 ( Encrypt/ Decrypt Text )
/*
#include <iostream>
#include <string>

using namespace std;

string ReadText() {
	string Text;
	cout << "Enter a Your Text : " << endl;
	getline(cin, Text);
	return Text;
}

string EncryptText(string& Text, short EncryptionKey) {
	for (int i = 0; i <= Text.length(); i++) {
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}

string DecryptText(string& Text, short EncryptionKey) {
	for (int i = 0; i <= Text.length(); i++) {
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

int main() {
	const short EncryptionKey = 1000;
	string Text = ReadText();

	cout << "Text Before Encryption : " << Text << "\n";
	cout << "Text After Encryption : " << EncryptText(Text, EncryptionKey) << "\n";
	cout << "Text After Decryption : " << DecryptText(Text, EncryptionKey) << endl;

	return 0;
}
*/
// Problem #19 ( Random 3 Numbers from 1 to 10 )
/*
#include <iostream>
#include <cstdlib>


using namespace std;

int Randint(int From, int To) {
	// Function to generater random number :

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));


	cout << Randint(1, 10) << endl;
	cout << Randint(1, 10) << endl;
	cout << Randint(1, 10) << endl;

	return 0;
}
*/
// Problem #20 ( Random Small Letter, Capital Letter, Special C, and Digit in order )
/*
#include <cstdlib>
#include <iostream>

using namespace std;

int Randint(int From, int To) {
	// Function to generater random number :

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharcter = 3, Digit = 4};

char GetRandomCharacter(enCharType CharType) {
	switch (CharType) {

	case enCharType::SmallLetter: {
		return char(Randint(97, 122));
		}
	case enCharType::CapitalLetter: {
		return char(Randint(65, 90));
	}
	case enCharType::SpecialCharcter: {
		return char(Randint(33, 47));
	}
	case enCharType::Digit: {
		return char(Randint(48, 57));
	}
	default: {
		return Randint(65, 90);
	}

	}
}

int main() {
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialCharcter) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;

	return 0;
}
*/
// Problem #21 ( Generate Keys )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
	// Function to generater random number :

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharcter = 3, Digit = 4 };

int ReadPositiveNumber(string Message) {
	int Num = 0;
	do {
		cout << Message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

char GetRandomCharacter(enCharType CharType) {
	switch (CharType) {

	case enCharType::SmallLetter: {
		return char(Randint(97, 122));
	}
	case enCharType::CapitalLetter: {
		return char(Randint(65, 90));
	}
	case enCharType::SpecialCharcter: {
		return char(Randint(33, 47));
	}
	case enCharType::Digit: {
		return char(Randint(48, 57));
	}
	default: {
		return Randint(65, 90);
	}

	}
}

string GenerateWord(enCharType CharType, short Length) {
	string word = "";

	for (int i = 1; i <= Length; i++) {
		word += GetRandomCharacter(CharType);
	}
	return word;
}

string GenerateKey() {

	string Key = "";

	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void PrintResults(int Num) {
	for (int i = 1; i <= Num; i++) {
		cout << "Key [" << i << "] : " << GenerateKey() << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));

	PrintResults(ReadPositiveNumber("Enter the amount of keys you need : "));

	return 0;
}
*/
// Problem #22 ( Repeated Elements Count In Array )
/*
#include <iostream>
#include <string>

using namespace std;



int ReadPositiveNumber(string Message) {
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void ReadArray(int Arr[100], int& Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    cout << "Enter array elements : " << endl;
    for (int i = 0; i < Length; i++){
        cout << "Element [" << i+1 << "] :";
        cin >> Arr[i];
        cout << endl;
    }
}

int CheckForRepeatedNumberInArray(int Arr[100], short Length, short Letter){
    int counter = 0;
    for (int i = 0; i < Length; i++){
        if (Arr[i] == Letter){
            counter++;
        }
    }
    return counter;
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

int main(){
    int Arr[100], ArrayLength, NumberToCheck;
    ReadArray(Arr, ArrayLength);

    NumberToCheck = ReadPositiveNumber("Enter the number you want to check : ");

    cout << endl << "Original Array: ";
    PrintArray(Arr, ArrayLength);
    cout << endl;

    cout << NumberToCheck << " is repeated ";
    cout << CheckForRepeatedNumberInArray(Arr, ArrayLength, NumberToCheck) << " Time(s)." << endl;

    return 0;
}
 */
// Problem #23 ( Fill Array with random numbers from 1 to 100 )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message) {
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], ArrayLength;
    FillArrayWithRandomNumbers(Arr, ArrayLength);
    cout << "Array Elements:";
    PrintArray(Arr, ArrayLength);

    return 0;
}
*/
// Problem #24 ( Max Random Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message) {
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

int PrintMaxNumInArray(int Arr[100], int Length){
    int Max = 0;

    for (int i = 0; i < Length; i++){
        if (Arr[i] > Max){
            Max = Arr[i];
        }
    }
    return Max;
}

int main(){
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Arr[100], ArrayLength;

    FillArrayWithRandomNumbers(Arr, ArrayLength);

    cout << "Array Elements:";
    PrintArray(Arr, ArrayLength);

    cout << "\nMax Number is : " << PrintMaxNumInArray(Arr, ArrayLength) << endl;

    return 0;
}
 */
// Problem #25 ( Min Random Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

int GetMinNumInArray(int Arr[100], int Length){
    int Min = 100;

    for (int i = 0; i < Length; i++){
        if (Arr[i] <= Min){
            Min = Arr[i];
        }
    }
    return Min;
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], ArrayLength;

    FillArrayWithRandomNumbers(Arr, ArrayLength);

    cout << "Array Element: ";
    PrintArray(Arr, ArrayLength);
    cout << endl;

    cout << "Min Number is : ";
    cout << GetMinNumInArray(Arr, ArrayLength);
    cout << endl;

    return 0;
}
 */
// Problem #26 ( Sum of Random Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

int GetSumNumInArray(int Arr[100], int Length){
    int Sum = 0;

    for (int i = 0; i < Length; i++){
        Sum += Arr[i];
    }
    return Sum;
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], ArrayLength;

    FillArrayWithRandomNumbers(Arr, ArrayLength);

    cout << "Array Elements: ";
    PrintArray(Arr, ArrayLength);
    cout << endl;

    cout << "Sum of all number is: ";
    cout << GetSumNumInArray(Arr, ArrayLength) << endl;

    return 0;
}
 */
// Problem #27 ( Average of Random Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

float GetAverageSumNumInArray(int Arr[100], int Length){
    float Sum = 0;

    for (int i = 0; i < Length; i++){
        Sum += Arr[i];
    }
    return Sum/Length;
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], ArrayLength;

    FillArrayWithRandomNumbers(Arr, ArrayLength);

    cout << "Array Elements: ";
    PrintArray(Arr, ArrayLength);
    cout << endl;

    cout << "Average of all number is: ";
    cout << GetAverageSumNumInArray(Arr, ArrayLength) << endl;

    return 0;
}
 */
// Problem #28 ( Copy Array );
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

void CopyArray(int Arr1[100], int Arr2[100], int ArrayLength){
    for (int i = 0; i < ArrayLength; i++){
        Arr2[i] = Arr1[i];
    }
}

int main(){
    srand((unsigned)time(NULL));

    int Arr1[100], Arr2[100], ArrayLength;

    FillArrayWithRandomNumbers(Arr1, ArrayLength);

    CopyArray(Arr1, Arr2, ArrayLength);

    cout << "Array 1 elements: ";
    PrintArray(Arr1, ArrayLength);
    cout << endl << endl;

    cout << "Array 2 elements after copy: ";
    PrintArray(Arr2, ArrayLength);
    cout << endl;

    return 0;
}
 */
// Problem #29 ( Copy only Prime Numbers )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

bool CheckIfPrime(int Num){
    for (int i = 2; i <= Num/2; i++){
        if (Num % i == 0){
            return false;
        }
    }
    return true;
}

void CopyPrimeNumbersInArray(int Source[100], int Destination[100], int Length1, int& Length2){
    int counter = 0;
    for (int i = 0; i < Length1; i++){
        if (CheckIfPrime(Source[i])){

            Destination[counter] = Source[i];
            counter++;

        }
    }
    Length2 = --counter;
}

int main(){
    srand((unsigned)time(NULL));
    int Arr1[100], Arr2[100], ArrayLength, ArrayLength2;

    FillArrayWithRandomNumbers(Arr1, ArrayLength);

    CopyPrimeNumbersInArray(Arr1, Arr2, ArrayLength, ArrayLength2);

    cout << "Array 1 elements: " << endl;
    PrintArray(Arr1, ArrayLength);

    cout << "Prime Numbers in Array2: " << endl;
    PrintArray(Arr2, ArrayLength2);

    return 0;
}
 */
// Problem #30 ( Sum of 2 arrays to a third one )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int ReadPositiveNumber(string Message) {
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void FillArrayWithRandomNumbers(int Arr[100], int Length){

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}

void PrintArray(int Arr[100], int Length){
    cout << " [ ";
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << "] ";
    cout << "\n";
}

void SumOf2ArraysElements(int Arr1[100], int Arr2[100], int SumArr[100], int Length){

    for (int i = 0; i < Length; i++){
        SumArr[i] = (Arr1[i] + Arr2[i]);
    }

}

int main(){
    srand((unsigned)time(NULL));

    int Arr1[100], Arr2[100], SumArr[100], ArrayLength;
    ArrayLength = ReadPositiveNumber("Enter The Array Length : ");

    FillArrayWithRandomNumbers(Arr1, ArrayLength);
    FillArrayWithRandomNumbers(Arr2, ArrayLength);
    SumOf2ArraysElements(Arr1, Arr2, SumArr, ArrayLength);

    cout << "Array 1 elements: " << endl;
    PrintArray(Arr1, ArrayLength);

    cout << "Array 2 elements: " << endl;
    PrintArray(Arr2, ArrayLength);

    cout << "Sum of Array1 and Array2 elements: " << endl;
    PrintArray(SumArr, ArrayLength);

    return 0;
}
 */
// Problem #31 ( Shuffle Ordered Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message){
    int Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

int Randint(int From, int To){
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void Swap(int& a, int& b){
    int Temp;

    Temp = a;
    a = b;
    b = Temp;
}

void FillArrayWith1toN(int Arr[100], int Length){
    for (int i = 0; i < Length; i++){
        Arr[i] = i + 1;
    }
}

void ShuffleArray(int Arr[100], int Length) {
    for (int i = 0; i < Length; i++) {
        Swap(Arr[Randint(1, Length) - 1], Arr[Randint(1, Length) - 1]);
    }
}

void PrintArray(int Arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], ArrayLength;

    ArrayLength = ReadPositiveNumber("Enter how many elements do you need : ");
    FillArrayWith1toN(Arr, ArrayLength);

    cout << "Array elements before shuffle : " << endl;
    PrintArray(Arr, ArrayLength);

    ShuffleArray(Arr, ArrayLength);

    cout << "Array elements after shuffle: " << endl;
    PrintArray(Arr, ArrayLength);

    return 0;
}
*/
// Problem #32 ( Copy Array In Reverse Order )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}

void PrintArray(int Arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << endl;
}

void CopyArrayInReversedOrder(int Arr[100],int Arr2[100], int Length){

    for (int i = 0; i < Length; i++){
        Arr2[i] = Arr[Length-i-1];
    }
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], Arr2[100], ArrayLength;

    FillArrayWithRandomNumbers(Arr, ArrayLength);
    CopyArrayInReversedOrder(Arr, Arr2, ArrayLength);

    cout << "Array 1 elements: " << endl;
    PrintArray(Arr, ArrayLength);
    cout << endl;

    cout << "Array 2 elements after copying array 1 in reversed order: " << endl;
    PrintArray(Arr2, ArrayLength);
    cout << endl;

    return 0;
}
 */
// Problem #33 ( Fill Arrays With keys )
/*

#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To) {
    // Function to generater random number :

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharcter = 3, Digit = 4 };

int ReadPositiveNumber(string Message) {
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

char GetRandomCharacter(enCharType CharType) {
    switch (CharType) {

        case enCharType::SmallLetter: {
            return char(Randint(97, 122));
        }
        case enCharType::CapitalLetter: {
            return char(Randint(65, 90));
        }
        case enCharType::SpecialCharcter: {
            return char(Randint(33, 47));
        }
        case enCharType::Digit: {
            return char(Randint(48, 57));
        }
        default: {
            return Randint(65, 90);
        }

    }
}

string GenerateWord(enCharType CharType, short Length) {
    string word = "";

    for (int i = 1; i <= Length; i++) {
        word += GetRandomCharacter(CharType);
    }
    return word;
}

string GenerateKey() {

    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}

void FillArrayWithKeys(string Arr[100], int Length){
    for (int i = 0; i < Length; i++){
        Arr[i] = GenerateKey();
    }
}

void PrintArray(string Arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << "Array [" << i+1 << "]: ";
        cout << Arr[i] << endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
    string Arr[100];
    int ArrayLength = ReadPositiveNumber("Enter the Array Length : ");

    FillArrayWithKeys(Arr, ArrayLength);

    PrintArray(Arr, ArrayLength);

    return 0;
}
 */
// Problem #34 ( Return Number index in array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

enum enCharType{SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int ReadPositiveNumber(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}



int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}


void FillArrayWithRandomNumbers(int arr[100], int Length){
    for (int i = 0; i < Length; i++){
        arr[i] = Randint(1,100);
    }
}

void PrintArray(int arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int PrintNumberPosition(int arr[100], int Length, int NeededNum){
    for (int i = 0; i < Length; i++) {
        if (NeededNum == arr[i]){
            return i;
        }
    }
    return -99;
}

int main(){
    srand((unsigned)time(NULL));

    int arr[100], NeededNum;
    int ArrayLength = ReadPositiveNumber("Enter the Array Length : ");

    FillArrayWithRandomNumbers(arr, ArrayLength);

    cout << "Array 1 elements: " << endl;
    PrintArray(arr, ArrayLength);

    NeededNum = ReadPositiveNumber("Please enter a number to search for? : ");

    cout << "the Number you looking for is: ";
    cout << NeededNum << endl;

    int NumPosition = PrintNumberPosition(arr, ArrayLength, NeededNum);

    if (NumPosition == -99){
        cout << endl << "The Number is not found :-(" << endl;
    } else {
        cout << endl << "The Number Found at position: " << NumPosition << endl;
        cout << "The Number Found its order: " << NumPosition + 1 << endl;
    }

    return 0;
}
*/
// Problem #35 (Check Number In Array)
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}

int ReadPositiveNumber(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}

int PrintNumberPosition(int arr[100], int Length, int NeededNum){
    for (int i = 0; i < Length; i++) {
        if (NeededNum == arr[i]){
            return i;
        }
    }
    return -99;
}

bool isNumberInArray(int Number, int arr[100], int Length){
    return PrintNumberPosition(arr, Length, Number) != -99;
}

void PrintArray(int arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], ArrayLength, Number;

    FillArrayWithRandomNumbers(Arr, ArrayLength);

    cout << "Array1 elements : " << endl;
    PrintArray(Arr, ArrayLength);

    Number = ReadPositiveNumber("\nPlease enter a number to search for? : ");

    cout << "\nThe Number you Looking For is : " << Number << endl;

    if (isNumberInArray(Number, Arr, ArrayLength)){
        cout << "\nYes, The Number is found :-)" << endl;
    } else {
        cout << "\nNo, The Number is Not found :-(" << endl;
    }
    return 0;
}
 */
// Problem #36 ( Add Array Element Simi dynamic )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message){
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void AddArrayNumber(int Number, int arr[100], int &Length){

    Length++;

    arr[Length -1 ] = Number;

}

void InputUserNumberInArray(int Arr[100], int& Length){
    bool AddMore = true;
    do {
        int x = ReadPositiveNumber("Please Enter a Number? ");

        AddArrayNumber(x, Arr, Length);

        cout << "\nDo you want to add more Number? : [0]:No, [1]:Yes " << endl;
        cin >> AddMore;
    } while (AddMore);
}

void PrintArray(int Arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], Length = 0;
    InputUserNumberInArray(Arr, Length);

    cout << "Array Length : " << Length << endl;
    cout << "Array Elements : ";
    PrintArray(Arr, Length);

    return 0;
}
 */
// Problem #37 ( Resolve Problem 28 Copy Array Using AddArrayElement )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}
void AddArrayNumber(int Number, int arr[100], int &Length){

    Length++;

    arr[Length -1 ] = Number;

}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrLength2){
    for (int i = 0; i < arrLength; i++){
        AddArrayNumber(arrSource[i], arrDestination, arrLength2);
    }
}

void PrintArray(int Arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100], arrLength = 0, arr2Length = 0;
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyArray(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements: \n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements: \n";
    PrintArray(arr2, arr2Length);

    return 0;
}
*/
// Problem #38 ( Copy Odd Number to a new Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}



void AddArrayNumber(int Number, int arr[100], int &Length){

    Length++;

    arr[Length -1 ] = Number;

}

bool isOdd(int Num){
    return (Num % 2 != 0);
}

void CopyOddNumberInArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrLength2){
    for (int i = 1; i < arrLength; i++){
        if (isOdd(arrSource[i])){
            AddArrayNumber(arrSource[i], arrDestination, arrLength2);
        }
    }
}

void PrintArray(int arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0, arr2Length = 0;
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyOddNumberInArray(arr, arr2, arrLength, arr2Length);

    cout << "\nArray1 elements: ";
    PrintArray(arr, arrLength);

    cout << "\nArray2 Odd Numbers: ";
    PrintArray(arr2, arr2Length);

    return 0;
}
 */
// Problem #39 ( Copy Prime Numbers to a new Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}



void AddArrayNumber(int Number, int arr[100], int &Length){

    Length++;

    arr[Length -1 ] = Number;

}

bool isPrime(int Num){
    for(int i = 2; i <= Num/2; i++){
        if (Num % i == 0){
            return false;
        }
    }
    return true;
}

void CopyPrimeNumberInArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrLength2){
    for (int i = 1; i < arrLength; i++){
        if (isPrime(arrSource[i])){
            AddArrayNumber(arrSource[i], arrDestination, arrLength2);
        }
    }
}

void PrintArray(int arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0, arr2Length = 0;
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyPrimeNumberInArray(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements: ";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 Prime Numbers: ";
    PrintArray(arr2, arr2Length);

    return 0;
}
 */
// Problem #40 ( Copy Distinct Numbers to Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

void FillArrayWithNumbers(int Arr[100], int& Length){

    Length = 10;
    Arr[0] = 10;
    Arr[1] = 10;
    Arr[2] = 10;
    Arr[3] = 50;
    Arr[4] = 50;
    Arr[5] = 70;
    Arr[6] = 70;
    Arr[7] = 70;
    Arr[8] = 70;
    Arr[9] = 90;
}



void AddArrayNumber(int Number, int arr[100], int &Length){

    Length++;

    arr[Length -1 ] = Number;

}

int FindNumberPositionInArray(int NeededNum, int arr[100], int Length){
    for (int i = 0; i < Length; i++) {
        if (NeededNum == arr[i]){
            return i;
        }
    }
    return -99;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength){
    return FindNumberPositionInArray(Number, arr, arrLength) != -99;
}

void CopyDistinctElements(int arrSource[100], int arrDestination[100], int arrLength, int& arrLength2){
    for (int i = 0; i < arrLength; i++) {
        if (!IsNumberInArray(arrSource[i], arrDestination, arrLength)) {
            AddArrayNumber(arrSource[i], arrDestination, arrLength2);
        }
    }
}

void PrintArray(int arr[100], int Length){
    for (int i = 0; i < Length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));

    int Arr[100], Arr2[100], ArrLength = 0, Arr2Length = 0;
    FillArrayWithNumbers(Arr, ArrLength);

    cout << "\nArray 1 elements: \n";
    PrintArray(Arr, ArrLength);

    CopyDistinctElements(Arr, Arr2, ArrLength, Arr2Length);

    cout << "\nArray 2 elements: \n";
    PrintArray(Arr2, Arr2Length);

    return 0;
}
*/
// Problem #41 ( Is Palindrome Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message) {
    int Num = 0;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void AddArrayNumber(int Number, int arr[100], int &Length){

    Length++;

    arr[Length -1 ] = Number;

}

void FillArrayWithNumbers(int Arr[100], int& Length){

    Length = 0;
    bool AskNum = true;
    while (AskNum) {
        AddArrayNumber(ReadPositiveNumber("Enter a Number : "), Arr,  Length);

        cout << "Do You Want to Add A Number : ? [1]Yes, [0]No " << endl;
        cin >> AskNum;
    }

}

void CopyFlipedArray(int arrSource[100], int arrDistination[100], int arrLength, int& arr2Length) {
    for (int i = arrLength-1; i >= 0; i--) {
        AddArrayNumber(arrSource[i], arrDistination, arr2Length);
    }
}

bool isPalindrome(int arr[100], int Length) {
    for (int i = 0; i < Length/2; i++) {
        if (arr[i] != arr[Length-i-1]) {
            return false;
        }
    }
    return true;
}

void PrintArray(int Arr[100], int Length) {
    for (int i = 0; i < Length; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));

    int arr1[100], arrLength = 0;
    FillArrayWithNumbers(arr1, arrLength);

    cout << "Array Elements: ";
    PrintArray(arr1, arrLength);

    if(isPalindrome(arr1, arrLength)) {
        cout << "Yes array is Palindrome" << endl;
    } else {
        cout << "No array is Not Palindrome" << endl;
    }

    return 0;
}
*/
// Problem #42 ( Count Odd Numbers in Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}

bool isOdd(int Number) {
    return (Number % 2 != 0);
}

int CountOddNumbersInArray(int arr[100], int Length) {
    int OddCount = 0;
    for (int i = 0; i < Length; i++) {

        if (isOdd(arr[i])) {
            OddCount++;
        }
    }
    return OddCount;
}

void PrintArray(int arr[100], int Length) {
    for (int i = 0; i < Length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], Length = 0;
    FillArrayWithRandomNumbers(arr, Length);

    cout << "Array Elements: ";
    PrintArray(arr, Length);

    cout << "\nOdd Numbers count is : " << CountOddNumbersInArray(arr, Length) << endl;

    return 0;
}
*/
// Problem #43 ( Count Even Numbers in Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(1, 100);
    }
    cout << endl;
}

bool isEven(int Number) {
    return (Number % 2 != 0);
}

int CountEvenNumbersInArray(int arr[100], int Length) {
    int OddCount = 0;
    for (int i = 0; i < Length; i++) {

        if (isEven(arr[i])) {
            OddCount++;
        }
    }
    return OddCount;
}

void PrintArray(int arr[100], int Length) {
    for (int i = 0; i < Length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], Length = 0;
    FillArrayWithRandomNumbers(arr, Length);

    cout << "Array Elements: ";
    PrintArray(arr, Length);

    cout << "\nOdd Numbers count is : " << CountEvenNumbersInArray(arr, Length) << endl;

    return 0;
}
*/
// Problem #44 ( Count Positive Numbers in Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(-100, 100);
    }
    cout << endl;
}

bool isPositive(int Number) {
    return (Number > 0);
}

int CountPositiveNumbersInArray(int arr[100], int Length) {
    int Count = 0;
    for (int i = 0; i < Length; i++) {

        if (isPositive(arr[i])) {
            Count++;
        }
    }
    return Count;
}

void PrintArray(int arr[100], int Length) {
    for (int i = 0; i < Length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100], Length = 0;
    FillArrayWithRandomNumbers(arr, Length);


    cout << "Array Elements: ";
    PrintArray(arr, Length);

    cout << "\nPositive Numbers count is: " << CountPositiveNumbersInArray(arr, Length);

    return 0;
}
*/
// Problem #45 ( Count Negative Numbers in Array )
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int Randint(int From, int To){
    int ReadNum = rand() % (To - From + 1) + From;
    return ReadNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &Length){
    cout << "\n Enter Number of elements : \n";
    cin >> Length;

    for (int i = 0; i < Length; i++){
        Arr[i] = Randint(-100, 100);
    }
    cout << endl;
}

bool isNegative(int Number) {
    return (Number < 0);
}

int CountNegativeNumbersInArray(int arr[100], int Length) {
    int Count = 0;
    for (int i = 0; i < Length; i++) {

        if (isNegative(arr[i])) {
            Count++;
        }
    }
    return Count;
}

void PrintArray(int arr[100], int Length) {
    for (int i = 0; i < Length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100], Length = 0;
    FillArrayWithRandomNumbers(arr, Length);


    cout << "Array Elements: ";
    PrintArray(arr, Length);

    cout << "\nNegative Numbers count is: " << CountNegativeNumbersInArray(arr, Length);

    return 0;
}
*/
// Problem #46 ( MyABS )
/*
#include <iostream>
#include <cmath>

using namespace std;

int ReadNumber(string Message) {
    int Num;
    cout << Message << endl;
    cin >> Num;
    return Num;
}

int myABS(int Num) {
    if (Num >= 0) {
        return Num;
    } else {
        return Num * -1;
    }
}

int main() {
    int Num = ReadNumber("Enter a Number : ");

    cout << "\nMy abs Result : " << myABS(Num) << endl;
    cout << "\nC++ abs Result : " << abs(Num) << endl;

    return 0;
}
*/
// Problem #47 ( MyRound )
/*
#include <iostream>
#include <cmath>

using namespace std;

float GetFractionPart(float Number) {
    return Number - int(Number);
}

int myRound(float Number) {

    int IntPart = int(Number);

    float FractionsPart = GetFractionPart(Number);

    if (abs(FractionsPart) >= .5) {

        if (Number > 0) {
            return ++IntPart;
        }
        else {
            return --IntPart;
        }

    }
    else {

        return IntPart;
    }

}

float ReadNumber() {

    float Num;
    cout << "Enter a Number : " << endl;
    cin >> Num;
    return Num;
}

int main() {

    float Number = ReadNumber();
    cout << "My Round Result : " << myRound(Number) << endl;
    cout << "C++ Round Result : " << round(Number) << endl;

    return 0;

}
*/
// Problem #48 ( MyFloor )
/*
#include <iostream>
#include <cmath>

using namespace std;

float myFloor(float Number) {

    if (Number > 0) {
        return int(Number);
    }
    else {
        return int(Number) - 1;
    }
    
}

float ReadNumber() {
    float Num;
    cout << "Enter a Number : " << endl;
    cin >> Num;
    return Num;
}

int main() {
    float Num = ReadNumber();

    cout << "My Floor Result : " << myFloor(Num) << endl;
    cout << "C++ floor Result : " << floor(Num) << endl;

    return 0;
}
*/
// Problem #49 ( myCeil )
/*
#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber() {
    float Num;
    cout << "Enter a Number : " << endl;
    cin >> Num;
    return Num;
}

float GetFractionPart(float Number) {
    return Number - int(Number);
}

int myCeil(float Num) {
    int IntPart = int(Num);

    if (abs(GetFractionPart(Num)) > 0) {

        if (Num > 0) {
            return ++IntPart;
        }
        else {
            return IntPart;
        }
    }
    else {
        return IntPart;
    }
}

int main() {
    float Num = ReadNumber();
    
    cout << "my ceil Result : " << myCeil(Num) << endl;
    cout << "C++ ceil Result : " << ceil(Num) << endl;

    return 0;
}
*/
// Problem #50 ( MySqrt )
/*
#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber() {
    float num;
    cout << "Enter a number : " << endl;
    cin >> num;
    return num;
}

float mySqrt(float Num) {
    return pow(Num, 0.5);
}

int main() {
    float Num = ReadNumber();

    cout << "My Sqrt Result : " << mySqrt(Num) << endl;
    cout << "C++ sqrt Result : " << sqrt(Num) << endl;

    return 0;
}
*/

/// ------------------------ ( Course 5 Done ) -----------------------------
/// -----------------------( 50 Problem is Done ) --------------------------

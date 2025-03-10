#include <random>

using namespace std;

enum Suit {
	spades,
	hearts,
	clubs,
	diamonds
};

enum Rank {	
	two = 2,
	three,
	four,
	five,
	six,
	seven,
	eight,
	nine,
	ten,
	jack,
	queen,
	king,
	ace,
};

Rank random_rank();
Suit random_suit();
Suit to_suit(char c);
Rank to_rank(int i);
bool compare_cards(Rank, Suit, Rank, Suit);
void print(string, Rank, Suit);
string to_string(Rank);
string to_string(Suit);

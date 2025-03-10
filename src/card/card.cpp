#include <iostream>
#include "card.h"

using namespace std;

random_device rd; // Seed for the random number generator
mt19937 mt(rd());
uniform_int_distribution<int> suits(spades, diamonds);
uniform_int_distribution<int> ranks(two, ace);

Rank random_rank() {
	return (Rank)ranks(mt);
}

Suit random_suit() {
	return (Suit)suits(mt);
}

bool compare_cards(const Rank r1, const Suit s1, const Rank r2, const Suit s2) {
	const int diff_rank = static_cast<int>(r1) - static_cast<int>(r2);
	const int diff_suit = static_cast<int>(s1) - static_cast<int>(s2);
	return diff_rank == 0 ? diff_suit > 0 : diff_rank > 0;
}

Suit to_suit(char c) {
	switch (c) {
	case('h'):
    return hearts;
	case('s'):
		return spades;
	case('c'):
		return clubs;
	case('d'):
		return diamonds;
	default:
		throw invalid_argument("Not a Suit");
	}
}

Rank to_rank(int i) {
	if (i >= 1 && i <= 13) {
		return static_cast<Rank>(i);
	}
	throw invalid_argument("Not a Rank");
}

void print(const string message, Rank r, Suit s) {
  cout << message << " " << to_string(r) << " of " << to_string(s);
}

string to_string(Rank r) {
	string res;
	switch (r) {
	case(two):
    res = "2";
    break;
	case(three):
    res = "3";
    break;
	case(four):
    res = "4";
    break;
	case(five):
    res = "5";
    break;
	case(six):
    res = "6";
    break;
	case(seven):
    res = "7";
    break;
	case(eight):
    res = "8";
    break;
	case(nine):
    res = "9";
    break;
	case(ten):
    res = "10";
    break;
	case(jack):
    res = "Jack";
    break;
	case(queen):
    res = "Queen";
    break;
	case(king):
    res = "King";
    break;
	case(ace):
    res = "Ace";
    break;
	}
	return res;
}

string to_string(Suit s) {
	string res;
	switch (s) {
	case(hearts):
    res = "Hearts";
    break;
	case(spades):
    res = "Spades";
    break;
	case(clubs):
    res = "Clubs";
    break;
	case(diamonds):
    res = "Diamonds";
    break;
	}
	return res;
}

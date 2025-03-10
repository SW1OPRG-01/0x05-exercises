#include <iostream>
#include <random>

#include "card.h"

using namespace std;

int main() {
	
  cout << endl << "The game presents you with a random card" << endl;
	cout << "Your task is to guess whether the next card is higher og lower" << endl;
	cout << "Type 'h' for higher, 'l' for lower, anything else to exit" << endl;
	
  Rank rank_user_challenge = random_rank();
	Suit suit_user_challenge = random_suit();
	Rank rank_generated;
	Suit suit_generated;

	cout << endl;
	print("Your first card is: ", rank_user_challenge, suit_user_challenge);
	cout << endl;

	bool stop = false;
	while (!stop) {
		char hl;
		cout << "Choose higher (h) or lower (l): ";
		cin >> hl;
		if (hl == 'h' || hl == 'l') {
			rank_generated = random_rank();
			suit_generated = random_suit();
			if (hl == 'h') {
				const bool user_higher = compare_cards(rank_generated, suit_generated, rank_user_challenge, suit_user_challenge);
				cout << "You " << (user_higher ? "won" : "lost");
			} else {
				const bool game_higher = compare_cards(rank_user_challenge, suit_user_challenge, rank_generated, suit_generated);
				cout << "You " << (game_higher ? "won" : "lost");
			}
			print(", the generated card were", rank_generated, suit_generated);
      cout << endl << endl;

			rank_user_challenge = rank_generated;
			suit_user_challenge = suit_generated;
		} else {
			stop = true;
		}
	}
}

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void assign_decks();
void sort_deck(string []);

//declare card values
int h2 = 0, h3 = 1, h4 = 2, h5 = 3, h6 = 4, h7 = 5, h8 = 6, h9 = 7, h10 = 8, h11 = 9, h12 = 10, h13 = 11, h14 = 12;
int d2 = 0, d3 = 1, d4 = 2, d5 = 3, d6 = 4, d7 = 5, d8 = 6, d9 = 7, d10 = 8, d11 = 9, d12 = 10, d13 = 11, d14 = 12;			
int c2 = 0, c3 = 1, c4 = 2, c5 = 3, c6 = 4, c7 = 5, c8 = 6, c9 = 7, c10 = 8, c11 = 9, c12 = 10, c13 = 11, c14 = 12;
int s2 = 0, s3 = 1, s4 = 2, s5 = 3, s6 = 4, s7 = 5, s8 = 6, s9 = 7, s10 = 8, s11 = 9, s12 = 10, s13 = 11, s14 = 12;

//arrange cards
int cards[4][13] = {{h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12, h13, h14},
				   {d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14},
				   {c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14},
				   {s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14}};

//declare card names
string card_names[4][13] = {{"2 heart", "3 heart", "4 heart", "5 heart", "6 heart", "7 heart", "8 heart", "9 heart", "10 heart", "jack heart", "queen heart", "king heart", "ace heart"},
						{ "2 dimond", "3 dimond", "4 dimond", "5 dimond", "6 dimond", "7 dimond", "8 dimond", "9 dimond", "10 dimond", "jack dimond", "queen dimond", "king dimond", "ace dimond"},
						{"2 club", "3 club", "4 club", "5 club", "6 club", "7 club", "8 club", "9 club", "10 club", "jack club", "queen club", "king club", "ace club"},
						{"2 spade", "3 spade", "4 spade", "5 spade", "6 spade", "7 spade", "8 spade", "9 spade", "10 spade", "jack spade", "queen spade", "king spade", "ace spade"}};

//declare player name
string p1_name = "player1";
string p2_name = "player2";
string p3_name = "player3";
string p4_name = "player4";

//declare array size


//declare player's deck
int p1_deck_value[13];
int p2_deck_value[13];
int p3_deck_value[13];
int p4_deck_value[13];

string p1_deck[13];
string p2_deck[13];
string p3_deck[13];
string p4_deck[13];

string decks[4] = {p1_deck, p2_deck, p3_deck, p4_deck};

//declare sorting array
string hearts_cards[0];
string dimonds_cards[0];
string clubs_cards[0];
string spades_cards[0];

int main()
{
	assign_decks();
	//sort_deck(p1_deck);
	for (int x = 0; x < 13; x++)
		cout << p1_deck[x] << endl;
	cout << endl << "player 2" << endl;
	for (int z = 0; z < 13; z++)
		cout << p2_deck[z] << endl;
}

void assign_decks()
{			
	//deal player1's deck			
	int i = 0;						//counter
	int a;							//deck checker	
	while (i < 13)
	{
		a = 0;
		int rand_suit = rand() % 4;
		int rand_card = rand() % 13;
		p1_deck_value[i] = cards[rand_suit][rand_card];
		p1_deck[i] = card_names[rand_suit][rand_card];
		for (int x = 0; x < i; x++)
		{
			if (p1_deck_value[i] == p1_deck_value[x])
				a++;
		}
		if (a > 0)
			continue;
		i++;
	}

	//deals player2's deck
	int y = 0;							//counter
	int c;								//deck checker
	while (y < 13)
	{
		c = 0;
		int rand_suit = rand() % 4;
		int rand_card = rand() % 13;
		p2_deck_value[y] = cards[rand_suit][rand_card];
		p2_deck[y] = card_names[rand_suit][rand_card];
		for (int x = 0; x < y; x++)
		{
			if (p2_deck[y] == p2_deck[x])
				c++;
		}
		for (int x = 0; x < 13; x++)
		{
			if (p2_deck[y] == p1_deck[x])
				c++;
		}
		if (c > 0)
			continue;
		y++;
	}

	//deal player3's deck

}

void sort_deck(string deck[])
{
	//checks if card is a hearts
	for (int i = 0; i < 13; i++)
	{
		for (int x = 0; x < 13; x++)
		{
			if (deck[i] == card_names[1][x])
			{
				//h++;
				hearts_cards[i] = deck[i];
			}
		}
		//checks if card is a dimond
		for (int y = 0; y < 13; y++)
		{
			if (deck[i] == card_names[1][y])
			{
				//d++;
				dimonds_cards[i] = deck[i];
			}
		}
	}
}






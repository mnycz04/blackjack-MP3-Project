/*
Blackjack Program
Written By:
    Michael Nycz
    Colin Graham
    Colin Fallat
*/

#include <stdio.h>
#include <stdlib.h>

#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Card {
    int card_id;
    string card_name;
    int value;

   public:
    void set_card_id(int id) { card_id = id; }

    int get_card_id() { return card_id; }

    string get_card_name() { return card_name; }

    int get_card_value() { return value; }

    Card(int id) {
        switch (id) {
            case (0):
                card_name = "2 of clubs";
                break;
            case (1):
                card_name = "2 of diamonds";
                break;
            case (2):
                card_name = "2 of hearts";
                break;
            case (3):
                card_name = "2 of spades";
                break;
            case (4):
                card_name = "3 of clubs";
                break;
            case (5):
                card_name = "3 of diamonds";
                break;
            case (6):
                card_name = "3 of heats";
                break;
            case (7):
                card_name = "3 of spades";
                break;
            case (8):
                card_name = "4 of clubs";
                break;
            case (9):
                card_name = "4 of diamonds";
                break;
            case (10):
                card_name = "4 of hearts";
                break;
            case (11):
                card_name = "4 of spades";
                break;
            case (12):
                card_name = "5 of clubs";
                break;
            case (13):
                card_name = "5 of diamonds";
                break;
            case (14):
                card_name = "5 of hearts";
                break;
            case (15):
                card_name = "5 of spades";
                break;
            case (16):
                card_name = "6 of clubs";
                break;
            case (17):
                card_name = "6 of diamonds";
                break;
            case (18):
                card_name = "6 of hearts";
                break;
            case (19):
                card_name = "6 of spades";
                break;
            case (20):
                card_name = "7 of clubs";
                break;
            case (21):
                card_name = "7 of diamonds";
                break;
            case (22):
                card_name = "7 of hearts";
                break;
            case (23):
                card_name = "7 of spades";
                break;
            case (24):
                card_name = "8 of clubs";
                break;
            case (25):
                card_name = "8 of diamonds";
                break;
            case (26):
                card_name = "8 of hearts";
                break;
            case (27):
                card_name = "8 of spades";
                break;
            case (28):
                card_name = "9 of clubs";
                break;
            case (29):
                card_name = "9 of diamonds";
                break;
            case (30):
                card_name = "9 of hearts";
                break;
            case (31):
                card_name = "9 of spades";
                break;
            case (32):
                card_name = "10 of clubs";
                break;
            case (33):
                card_name = "10 of diamonds";
                break;
            case (34):
                card_name = "10 of hearts";
                break;
            case (35):
                card_name = "10 of spades";
                break;
            case (36):
                card_name = "Jack of clubs";
                break;
            case (37):
                card_name = "Jack of diamonds";
                break;
            case (38):
                card_name = "Jack of hearts";
                break;
            case (39):
                card_name = "Jack of spades";
                break;
            case (40):
                card_name = "Queen of clubs";
                break;
            case (41):
                card_name = "Queen of diamonds";
                break;
            case (42):
                card_name = "Queen of hearts";
                break;
            case (43):
                card_name = "Queen of spades";
                break;
            case (44):
                card_name = "King of clubs";
                break;
            case (45):
                card_name = "King of diamonds";
                break;
            case (46):
                card_name = "King of hearts";
                break;
            case (47):
                card_name = "King of spades";
                break;
            case (48):
                card_name = "Ace of clubs";
                break;
            case (49):
                card_name = "Ace of diamonds";
                break;
            case (50):
                card_name = "Ace of hearts";
                break;
            case (51):
                card_name = "Ace of spades";
                break;
        }

        if ((card_id / 4) + 2 <= 10) {
            value = (card_id / 4) + 2;
        } else if (card_id <= 47) {
            value = 10;
        } else {
            value = 11;
        }
    }
};

class Deck {
    vector<Card> deck;

   public:
    Deck(void) {
        for (int i{0}; i <= 51; i++) {
            Card new_card(i);
            deck.push_back(new_card);
            cout << new_card.get_card_name() << endl;
        }
    }

    Card draw_card(void) {
        int card_index = rand() % deck.size();
        return deck[card_index];
    }
};

int main() {
    // TODO: Main function loop
    Deck play;
    return 0;
}

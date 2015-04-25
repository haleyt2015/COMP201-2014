// Defining your own types 
#include <iostream>
#include <vector>
#include <cstdlin>
#include<ctime>
#include <algorithm>

using namespace std;
// this is an enumeration 
// It defines a type, along with the possibilities 
enum Suit {HEARTS, SPADES, CLUBS, DIAMONDS};
const string suit_names[]={"Hearts","Spades","Clubs,""Diamonds"};
enum Rank{TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,ACE};
//each possibility must be a legit 
//array of rank names 
const string rank_names[]={
	"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"
};
typedef struct{
	//type variable;
	Suit suit;
	//type variable;
	Rank rank;
}card;

void printCard(Card card);
vector<Card>MakeDeck(){
	vecor<Card> deck;
	//create a vector 
	//create all of the cards 
	Card card;
	// for each suit...
	for(i=0;i<4;i++){
		
	}
		//for each rank...
	for(int j=0;j<13;j++){
		card.suit=(Suit) i;
		card.rank=(Rank) j;
		deck.push_back(card);
		
	}
			//create the appropriate card 
			//push it into the vector
	// return the vector 
	
}
return deck;

int main() {
//type variable_name; //declare a variable 
int age;
string name;

vector<Card> deck=makedeck)();

for(int i=0;i<desk.size();i++){
	printCard(deck[i]);
	cout<< endl;
	
}

return 0;

}
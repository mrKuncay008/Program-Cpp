//#include <iostream>
//#include <string>
//using namespace std;
//
//// Structure of chess pieces
//struct Piece {
//	string name;
//	string color;
//	int x;
//	int y;
//};
//
//// Function prototypes
//void printBoard(Piece pieces[]);
//void movePiece(Piece& piece, int newX, int newY);
//
//int main()
//{
//	// Initialize pieces
//	Piece pieces[16];
//	pieces[0].name = "Rook";
//	pieces[0].color = "Black";
//	pieces[0].x = 0;
//	pieces[0].y = 0;
//	pieces[1].name = "Knight";
//	pieces[1].color = "Black";
//	pieces[1].x = 1;
//	pieces[1].y = 0;
//	pieces[2].name = "Bishop";
//	pieces[2].color = "Black";
//	pieces[2].x = 2;
//	pieces[2].y = 0;
//	pieces[3].name = "Queen";
//	pieces[3].color = "Black";
//	pieces[3].x = 3;
//	pieces[3].y = 0;
//	pieces[4].name = "King";
//	pieces[4].color = "Black";
//	pieces[4].x = 4;
//	pieces[4].y = 0;
//	pieces[5].name = "Bishop";
//	pieces[5].color = "Black";
//	pieces[5].x = 5;
//	pieces[5].y = 0;
//	pieces[6].name = "Knight";
//	pieces[6].color = "Black";
//	pieces[6].x = 6;
//	pieces[6].y = 0;
//	pieces[7].name = "Rook";
//	pieces[7].color = "Black";
//	pieces[7].x = 7;
//	pieces[7].y = 0;
//	pieces[8].name = "Pawn";
//	pieces[8].color = "White";
//	pieces[8].x = 0;
//	pieces[8].y = 1;
//	pieces[9].name = "Pawn";
//	pieces[9].color = "White";
//	pieces[9].x = 1;
//	pieces[9].y = 1;
//	pieces[10].name = "Pawn";
//	pieces[10].color = "White";
//	pieces[10].x = 2;
//	pieces[10].y = 1;
//	pieces[11].name = "Pawn";
//	pieces[11].color = "White";
//	pieces[11].x = 3;
//	pieces[11].y = 1;
//	pieces[12].name = "Pawn";
//	pieces[12].color = "White";
//	pieces[12].x = 4;
//	pieces[12].y = 1;
//	pieces[13].name = "Pawn";
//	pieces[13].color = "White";
//	pieces[13].x = 5;
//	pieces[13].y = 1;
//	pieces[14].name = "Pawn";
//	pieces[14].color = "White";
//	pieces[14].x = 6;
//	pieces[14].y = 1;
//	pieces[15].name = "Pawn";
//	pieces[15].color = "White";
//	pieces[15].x = 7;
//	pieces[15].y = 1;
//
//	// Print board
//	printBoard(pieces);
//
//	// Move a piece
//	movePiece(pieces[0], 3, 3);
//
//	// Print board
//	printBoard(pieces);
//
//	return 0;
//}
//
//// Print the board
//void printBoard(Piece pieces[]) {
//	for (int y = 0; y < 8; y++) {
//		for (int x = 0; x < 8; x++) {
//			int found = 0;
//			for (int i = 0; i < 16; i++) {
//				if (pieces[i].x == x && pieces[i].y == y) {
//					found = 1;
//					cout << pieces[i].name[0] << " ";
//					break;
//				}
//			}
//			if (found == 0) {
//				cout << ". ";
//			}
//		}
//		cout << endl;
//	}
//}
//
//// Move a piece
//void movePiece(Piece& piece, int newX, int newY) {
//	piece.x = newX;
//	piece.y = newY;
//}


 #include<iostream>
using namespace std;

int main() {
    
    int i, j;
    
    cout << "\t\t ---- Program papa catur -----\n";
    
    for(i = 1; i <= 8; i++)
    {
        for(j = 1; j <= 8; j++)
        {
            if((i + j) % 2 == 0) 
            {
                cout << "X";
            }
            else 
            {
                cout << "O ";
            }
        }
        cout << endl;
    }
    return 0;
}


/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Structure of chess pieces
struct Piece {
	string name;
	string color;
	int x;
	int y;
};

// Function prototypes
void printBoard(vector<Piece> pieces);
void movePiece(Piece& piece, int newX, int newY, vector<Piece> pieces);

int main()
{
	// Initialize pieces
	vector<Piece> pieces;
	pieces.push_back({"Rook", "Black", 0, 0});
	pieces.push_back({"Knight", "Black", 1, 0});
	pieces.push_back({"Bishop", "Black", 2, 0});
	pieces.push_back({"Queen", "Black", 3, 0});
	pieces.push_back({"King", "Black", 4, 0});
	pieces.push_back({"Bishop", "Black", 5, 0});
	pieces.push_back({"Knight", "Black", 6, 0});
	pieces.push_back({"Rook", "Black", 7, 0});
	pieces.push_back({"Pawn", "White", 0, 1});
	pieces.push_back({"Pawn", "White", 1, 1});
	pieces.push_back({"Pawn", "White", 2, 1});
	pieces.push_back({"Pawn", "White", 3, 1});
	pieces.push_back({"Pawn", "White", 4, 1});
	pieces.push_back({"Pawn", "White", 5, 1});
	pieces.push_back({"Pawn", "White", 6, 1});
	pieces.push_back({"Pawn", "White", 7, 1});

	// Print board
	printBoard(pieces);

	// Move a piece
	movePiece(pieces[0], 3, 3, pieces);

	// Print board
	printBoard(pieces);

	return 0;
}

// Print the board
void printBoard(vector<Piece> pieces) {
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			int found = 0;
			for (int i = 0; i < pieces.size(); i++) {
				if (pieces[i].x == x && pieces[i].y == y) {
					found = 1;
					cout << pieces[i].name[0] << " ";
					break;
				}
			}
			if (found == 0) {
				cout << ". ";
			}
		}
		cout << endl;
	}
}

// Move a piece
void movePiece(Piece& piece, int newX, int newY, vector<Piece> pieces) {
	// Check if there is another piece in the destination
	for (auto& p : piece&) {
		if (p.x == newX && p.y == newY) {
			cout << "There is another piece at (" << newX << ", " << newY << "). Move failed." << endl;
			return;
		}
	}

	piece.x = newX;
	piece.y = newY;
} */

#include <iostream>

using namespace std;

int main()
{
	int pilih;
	int i, j;
	char a, b;

	cout << "Perulangan Huruf abjact\n";
	cout << "Pilih Perulangannya" << endl; 
	cout << "1. angka" << endl;
	cout << "2. abjact " << endl;
	cin >> pilih;

	if (pilih == 1)
	{
	for(i = 1; i <= 10; i++)
	{
		for(j = 1; j <= 10; j++)
		{
			if (j < i) {
				cout << " " << j;
			}
			else {
				cout << " " << i;
			}

		}
	cout << "\n";
	}
 }

 	if(pilih == 2) {

	for(a = 'A'; a <= 'M'; a++)
	{
		for(b = 'A'; b <= 'M'; b++)
		{
			if (b < a) {
				cout << " " << b;
			}
			else {
				cout << " " << a;
			}

		}
	cout << "\n";
	}
  }
	return 0;
}

/*
	output
i ~ 
i ~ A A A A A A A A A A A A A
i ~ A B B B B B B B B B B B B
i ~ A B C C C C C C C C C C C
i ~ A B C D D D D D D D D D D
i ~ A B C D E E E E E E E E E
i ~ A B C D E F F F F F F F F
i ~ A B C D E F G G G G G G G
i ~ A B C D E F G H H H H H H
i ~ A B C D E F G H I I I I I
i ~ A B C D E F G H I J J J J
i ~ A B C D E F G H I J K K K
i ~ A B C D E F G H I J K L L
i ~ A B C D E F G H I J K L M ~ j

start
- char i, j
- proses = for i = char A 
	i kurang lebih samdengan <= char M i++ menambah i
- proses2 = for j = char A
	j kurang lebih samadengan <= char M j++ menambah j
- Condition = jika j kuranglebih < i
	= maka tampilkan j
	jika tida maka = tampilkan i
end

*/

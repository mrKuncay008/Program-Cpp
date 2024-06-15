#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int main() {
  
  RenderWindow window(VideoMode(500, 500), "cobateks");
  //window.setFramerateLimit(100);   // frame window

  // di area ini untuk deklarasi objcet
    Font open_sans;
    open_sans.loadFromFile("DejaVuSerifCondensed-BoldItalic.ttf");

    Text my_text;
    
    my_text.setFont(open_sans); // pilih variable set.font
     
    my_text.setCharacterSize(40); // ukuran huruf /font 

    my_text.setString("Halooooooo"); // string untuk menulis karakter
    
    my_text.setStyle(Text::Bold);
    
    my_text.setPosition(300, 400); // posisi font
    

    my_text.setFillColor(Color::Red); // warna
    

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed) {window.close();}
        }
        

        window.clear();

        window.draw(my_text);

        window.display();
    }
    
    return 0;    
}
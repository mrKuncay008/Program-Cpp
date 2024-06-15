#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;


int main()
{
    RenderWindow window(VideoMode(600, 720), "coba1");
    window.setFramerateLimit(100);   // frame window

    RectangleShape kotak; // variable persegi
    RectangleShape kotak2; 

    Vector2f kotak2Position(150, 200);
    Vector2f rectanglePosition(400, 350); // posisi persegi nya

    kotak2.setPosition(kotak2Position);
    kotak.setPosition(rectanglePosition); // memanggil fungsi posisi kotakanglePostition
    
    kotak2.setFillColor(Color::Blue);
    kotak2.setSize(Vector2f(100,100));
    
    kotak.setSize(Vector2f(100, 100)); // besar persegi nya

    float xGerakan = 3;
    float yGerakan = 3;
    
    // ini adalah condisi control kursor dan keyboard atau printah 
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed) {window.close();}
            
            if (Keyboard::isKeyPressed(Keyboard::Escape)) window.close();
        }   
     
    // fisik

    if (rectanglePosition.x < 0 || rectanglePosition.x > 600 - 100) xGerakan *= -1;
    if (rectanglePosition.y < 0 || rectanglePosition.y > 720 - 100) yGerakan *= -1;

     if (kotak2Position.x < 1 || kotak2Position.x > 720 - 100) xGerakan *= -1;
     if (kotak2Position.y < 1 || kotak2Position.y > 600 - 100) yGerakan *= -1;


    rectanglePosition.x += xGerakan;
    rectanglePosition.y += yGerakan;
    kotak2Position.x += xGerakan;
    kotak2Position.y += yGerakan;

    kotak.setPosition(rectanglePosition);
    kotak2.setPosition(kotak2Position);

        //render
    window.clear();
   

    window.draw(kotak);     // render harus di dalam kurisal{} while window
    window.draw(kotak2);
   
    window.display();
   
    }
      
   
    
    return 0;
} 

// int main()
// {

// RenderWindow window(VideoMode(800,600),"TEXT");

// /****************************************************/

// //Declare a Font object
// Font font;

// //Load and check the availability of the font file
// if(!font.loadFromFile("ShortBaby-Mg2w.ttf"))
// {
//     cout << "can't load font" << endl;
// }

// //Declare a Text object
// Text text("Score = 0",font);

// //Set character size
// text.setCharacterSize(100);

// //Set fill color
// text.setFillColor(Color::White);

// /****************************************************/


// while(window.isOpen())
// {
//     Event event;
//     while(window.pollEvent(event))
//     {
//          if(event.type == Event::Closed){window.close();}
//     }

//     //Clear the window
//     window.clear();
//     //Draw the text
//     window.draw(text);
//     //Display the text to the window
//     window.display();
// }

// return 0;
// }

 /*   Text my_text;
    my_text.setFont(open_sans); // pilih variable set.font
    my_text.setCharacterSize(100); // ukuran huruf /font 
    my_text.setString("Halooooooo"); // string untuk menulis karakter
   my_text.setStyle(Text::Bold);
    // my_text.setPosition(300, 400); // posisi font
    my_text.setFillColor(Color::Red); // warna
       // di area ini untuk deklarasi objcet
    Font open_sans;
    if(!open_sans.loadFromFile("ShortBpwdaby-Mg2w.ttf"))
    {
        cout << "apa bisa ?";
    }
    
    // ini adalah condisi control kursor dan keyboard atau printah 
    while (window.isOpen()) */
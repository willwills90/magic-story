#include <iostream>

//program needs loop added so it doesnt quit on invalid input

int main() {

  int choice1, choice2, choice3, choice4, choice5;
  std::string user;


  std::cout << "Welcome to Will's Magical Multichoice Story!\n";
  std::cout << "First question is, what is your name? ";
  std::cin >> user;
  std::cout << "Alright " << user << ", Lets Go!\n\n";

  std::cout << "You start infront of a magical forest with tall trees, there's wind blowing through them, and its a nice sunny day.\n\n";
  std::cout << "There are 2 paths infront of you, one straight through the middle bathed in sunlight, the other twisty, dark and mysterious\nWhich do you choose?\n\n1) Straight and Sunny\n2) Twisty and Dark\n\n";
  std::cout << "I choose: ";
  std::cin >> choice1;

//First storyline starts here


  if (choice1 == 1) {
    std::cout << "You chose the Sunny path, let's see where it leads!\n\n";


    std::cout << "\n\nYou see the sunlight beaming down onto a tree stump, behind it theres a glowing blue necklace, do you take it or leave it alone?\n\n1) Take it\n2) Leave it\n\n";
    std::cout << "I choose: ";
    std::cin >> choice2;
    if (choice2 == 1) {
      std::cout << "\n\nThe necklace was an ancient troll amulet, no human can touch it, when you picked it up, you felt a strange sensation in your core, then you dont rememeber a thing.\n\nThe amulet turned you to stone and you shattered into a million pieces.\n\nThanks for Playing! Feel free to play again for a different ending!\n";
      return 0;
    }
    else if (choice2 == 2) {
      std::cout << "You keep walking down the forest path, when it finally comes to a clearing, you see a gathering of people dancing with music to one side, and a ruined old castle to the other, which do you chose?\n\n1)Gathering of people\n2)Old Ruin\n\n";
      std::cout << "I choose: ";
      std::cin >> choice3;

      if (choice3 == 1) {
        std::cout << "\n\nYou go towards the gathering of people, as you get closer you start to gesture to them so not to surpise them, once your are there you realise this is no party, its a big group of bandits, and now they have surrounded you! Suddenly you hear something swishing through the air, and suddenly you're gone. They chopped your skull in half with an axe, and now you are dead.\n\nThanks for Playing! " << user << " Try again to find another ending!\n";
      }
      if (choice3 == 2) {
        std::cout << "\n\nYou make your way towards the ruins, when you get there you notice a huge glowing treasure chest! You go to open it and its full of gold and Diamonds! This will be enough to keep your family rich for generations! Well done you!\n\nThanks for Playing! " << user << "Try again to find another ending!\n";
      }
    }
    else {
      std::cout << "Invalid input, Thanks for Playing\n" << user << "\n";
      return 0;
    }

  }

//second story line starts here


  else if (choice1 == 2){
    std::cout << "You chose the Dark path, let's see where it leads!\n\n";
    std::cout << "You come upon a stream, theres something glistening at the bottom.\nDo you reach in to try and pick it up, or ignore it and keep going?\n\n1) Try and pick it up\n2) Keep going/n/nI Choose: ";
    std::cin >> choice4;

    if (choice4 == 1) {
      std::cout << "\n\nYou put your hand in the water and try to reach for it, but then you suddenly feel yourself being pulled in, it was a portal to the void, you suffocated instantly.\n\nThanks for playing! " << user << "Try again to find another ending!\n";
    }
    else if (choice4 == 2) {
      std::cout << "You keep walking down the forest path, when it finally comes to a clearing, you see a gathering of people dancing with music to one side, and a ruined old castle to the other, which do you chose?\n\n1)Gathering of people\n2)Old Ruin\n\n";
      std::cout << "I choose: ";
      std::cin >> choice3;

      if (choice3 == 1) {
        std::cout << "\n\nYou go towards the gathering of people, as you get closer you start to gesture to them so not to surpise them, once your are there you realise this is no party, its a big group of bandits, and now they have surrounded you! Suddenly you hear something swishing through the air, and suddenly you're gone. They chopped your skull in half with an axe, and now you are dead.\n\nThanks for Playing! " << user << " Try again to find another ending!\n";
      }
      if (choice3 == 2) {
        std::cout << "\n\nYou make your way towards the ruins, when you get there you notice a huge glowing treasure chest! You go to open it and its full of gold and Diamonds! This will be enough to keep your family rich for generations! Well done you!\n\nThanks for Playing! " << user << " Try again to find another ending!\n";
      }
    }
    else {
      std::cout << "Invalid input, Thanks for Playing" << user << "\n";
    return 0;
    }

  }
  else {
    std::cout << "Invalid input, Thanks for Playing" << user << "\n";
    return 0;
  }
    

}

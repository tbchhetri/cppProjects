#include <iostream>  	//format for do loop

using namespace std;

int main () {

  do {
      //Display the menu
	cout << "\033[2j\033[H";
	
	cout << "Choices: \n"
		"(P)epperoni\n"
		"(O)lives\n"
		"(B)anana peppers\n"
		"(J)alapeno peppers\n"
		"(M)ushrooms\n"
		
		"\n(Q)uit\n\nEnter your choice: ";
      //Get choice from user

      //Process the choice (this includes the quit option)
    statement;
  } while (condition);

  return 0;
}

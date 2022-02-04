#include <iostream>
//last changes(and all notes before the main function): 8/15/2021
//This program takes a random variable and creates a table for how many outcomes.
//I think it only works for a coin toss but idk I'm proud of it.


//declaration
int ex(int point);
//combination formula
int facts(int n, int r) {


    return ex(n) / (ex(r) * ex(n - r));
}

//factorial formula
int ex(int n) {

    int answer = 1;

    for (int i = 2; i <= n; i++) {
        answer = answer * i;
    }

    return answer;
}

//object
class square {

public:
    int n, r;
    int sum = 1;

    square() {

        std::cout << "Enter a number for how many random variables (we're making a table btw)\n";
        std::cin >> n;

        //prints table on number of variables
        for (int i = 0; i < n + 1; i++) {

            std::cout << "|" << i << "|";
            std::cout << "\t";

        }

        std::cout << "\n";

        //prints the number of outcomes under the random variable
        for (int c = 0; c <= n; c++) {

            std::cout << "|" << facts(n, c) << "|";
            std::cout << "\t";
        }

        std::cout << "\n";

        //my failed attempt to draw a dash for a fraction
        for (int c = 0; c <= n; c++) {

            std::cout << " __";
            std::cout << "\t";
        }

        std::cout << "\n";

        for (int c = 1; c <= n; c++) {

            sum = sum + facts(n, c);

        }
        for (int c = 0; c <= n; c++) {
            std::cout << sum;
            std::cout << "\t";
        }
    }
    
    ~square() {
        std::cout << "\n Goodbye!";
    }

};


int main()
{

    square* Table1;
    Table1 = new square;
    delete Table1;

}
//Note: (8/15/2021)
//go fuck yourself I'm not gonna make a function to simplify the "fractions"
//I got shit to do
//I also found out that this program only supports up to 12 random variables for some reason
//but fuck it I'm gonna upload this to github lol
//Note: (2/4/2022)
//destroyed Table1 just cuz lmao

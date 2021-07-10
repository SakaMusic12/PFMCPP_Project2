#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int 
 bool
 char
 float
 double
 void
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int myAge = 24;
    int caloriesConsumed = 2045;
    int fingersLeft = 9;

    float waterLevel = 32.4f;
    float circumferenceofTable = 18.36f;
    float carSpeed = 110.0f;

    double cometTrajectory = 73.23049192;
    double smallNum = 0.00034021;
    double d = 0.3829103829;

    char firstInitial = 'W';
    char midInitial = 'S';
    char lastInitial = 'B';

    bool loveMe = false;
    bool isHungry = true;
    bool isDayTime = false;

    
    ignoreUnused(number, myAge, caloriesConsumed, fingersLeft, waterLevel, circumferenceofTable, carSpeed, cometTrajectory, smallNum, d, firstInitial, midInitial, lastInitial, loveMe, isHungry, isDayTime); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int bakePie(int minutes = 60, int temp = 350)
{
    ignoreUnused(minutes, temp);
    return{};
}
/*
 2)
 */
int playChord(int root, int third, int fifth)
{
    ignoreUnused(root, third, fifth);
    return{};
}
/*
 3)
 */
bool isSpider(bool venomous, float size, int legs = 8)
{
    ignoreUnused(venomous, size, legs);
    return{};
}
/*
 4)
 */
int moveFilter(int startFreq, int endFreq, float timeInBeats, int slopeInDB = 24)
{
    ignoreUnused(startFreq, endFreq, timeInBeats, slopeInDB);
    return{};
}

/*
 5)
 */
int reynoldsNum(float flowSpeed, float pipeWidth, float viscosity, float fluidDensity)
{
    ignoreUnused(flowSpeed, pipeWidth, viscosity, fluidDensity);
    return{};
}
/*
 6)
 */
bool canRelax(bool homeworkDone, bool dishesClean = true, bool takeTrashOut = false)
{
    ignoreUnused(homeworkDone, dishesClean, takeTrashOut);
    return{};
}
/*
 7)
 */
void orderCoffee(int size, bool withCream = true)
{
    ignoreUnused(size, withCream);
}
/*
 8)
 */
void getInitials(char firstName = 'w', char lastName = 'b')
{
    ignoreUnused(firstName, lastName);
}
/*
 9)
 */
float getLength(float start = 0.0f, float end = 3.14f)
{
    ignoreUnused(start, end);
    return{};
}
/*
 10)
 */
float totalMoney(float savings, float checking = 250.37f, float creditCard = -32.0f)
{
    ignoreUnused(savings, checking, creditCard);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto pieBaked = bakePie();
    //2)
    auto chord = playChord(0, 4, 7);
    //3)
    auto spider = isSpider(true, 1.3f);
    //4)
    auto filterPosition = moveFilter(2040, 80, 8, 36);
    //5)
    auto levelOfTurbulence = reynoldsNum(1.32f, 4.0f, 0.012f, 0.0021f);
    //6)
    auto chillTime = canRelax(true);
    //7)
    orderCoffee(2);
    //8)
    getInitials();
    //9)
    auto trackLength = getLength(1.43f);
    //10)
    auto wealth = totalMoney(500.0f);
    
    ignoreUnused(carRented, pieBaked, chord, spider, filterPosition, levelOfTurbulence, chillTime, orderCoffee, getInitials, trackLength, wealth);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

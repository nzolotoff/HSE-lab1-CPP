#include <iostream>
#include <cmath>
#include <random>

// задача 1
void Square() {
    int b1,b2,h;
    std::cout << "enter the 2 bases and the height of your trapezoid via 'enter'" << std::endl;
    std::cin >> b1 >> b2 >> h;
    int result = (b1 + b2) / 2 * h;
    std::cout << "the square of your trapezoid is: " << result << std::endl;
}

// задача 2
void Circle() {
    float r;
    std::cout << "Enter your radius: " << std::endl;
    std::cin >> r;
    float LengthOfCircle = 2 * 3.14 * r;
    std::cout << "the length of your circle is: " << LengthOfCircle << std::endl;
    float SquareOfCircle = 2 * 3.14 * r*r;
    std::cout << "the square of your circle is: " << SquareOfCircle << std::endl;
}

// задача 3
void Triangle() {
    int a,b;
    std::cout << "enter the triangle cathets via 'enter': " << std::endl;
    std::cin >> a >> b;
    int SquareOfTriangle = a*b/2;
    std::cout << "the square of your triangle is: " << SquareOfTriangle << std::endl;
    int hypotenuse = sqrt(a*a + b*b);
    std::cout << "the hypotenuse of your triangle is: " << hypotenuse << std::endl;
}

// задача 4
void SumDigits() {
    int num;
    std::cout << "Enter your four - digit number: " << std::endl;
    std::cin >> num;
    int result = num/1000 + (num%1000)/100 + (num%100)/10 + (num%10);
    std::cout << result << std::endl;
}

// задача 5
void CartToPol() {
    float CartX,CartY;
    std::cout << "enter the x and y coordinates via 'enter':" << std::endl;
    std::cin >> CartX >> CartY;
    float r = sqrt(CartX*CartX+CartY*CartY);
    float TgFi = CartY/CartX;
    std::cout << "r = " << r << " and tg(fi) = " << TgFi <<std::endl;
}

// задача 6
void PolToCart() {
    int r, fi;
    std::cout << "enter polar radius and polar angle via 'enter':" << std::endl;
    std::cin >> r >> fi;
    int x = r * cos(fi);
    int y = r * sin(fi);
    std::cout << "x = " << x << " y = " << y <<std::endl;
}

// задача 7
void EquationRoots() {
    std::cout << "enter the coefficients of your equation via 'enter':" << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    int discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        float FirstRoot = (-b + sqrt(discriminant)) / 2 * a;
        float SecondRoot = (-b - sqrt(discriminant)) / 2 * a;
        std::cout << "the roots of your equation are: " << FirstRoot << " and " << SecondRoot << std::endl;
    }
    else if (discriminant == 0) {
        float Root = -b/2*a;
        std::cout << "the root of your equation is: " << Root << std::endl;
    }
    else {
        std::cout << "your equation has no roots" << std::endl;
    }
}

// задача 8
void FindMedians() {
    int a,b,c;
    std::cout << "enter the sides of your triangle via 'enter'" << std::endl;
    std::cin >> a >> b >> c;
    float MedianA = (sqrt(2*b*b+2*c*c-a*a)/2);
    float MedianB = (sqrt(2*a*a+2*c*c-b*b)/2);
    float MedianC = (sqrt(2*a*a+2*b*b-c*c)/2);
    float NewMedianA = (sqrt(2*MedianB*MedianB+2*MedianC*MedianC-MedianA*MedianA)/2);
    float NewMedianB = (sqrt(2*MedianA*MedianA+2*MedianC*MedianC-MedianB*MedianB)/2);
    float NewMedianC = (sqrt(2*MedianA*MedianA+2*MedianB*MedianB-MedianC*MedianC)/2);
    std::cout << "the medians of the new triangle are equal: " << NewMedianA << "; " << NewMedianB << "; " << NewMedianC << std::endl;
}

// задача 9
void TimeOfDay() {
    int seconds;
    std::cout << "enter how many seconds have passed since the beginning of the day" << std::endl;
    std::cin >> seconds;
    int hours = seconds/60/60;
    int minutes = (seconds - hours*3600)/60;
    std::cout << hours << " hours and " << minutes << " minutes " << "have passed since the beginning of the day" << std::endl;
}

// задача 10
void IsoscelesTriangle() {
   std::cout << "enter the sides of your triangle via 'enter':" << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a==b || a==c || b==c) {
       std::cout << "your triangle is isosceles!" << std::endl;
    }
    else {
        std::cout << "your triangle is NOT isosceles" << std::endl;
    }
}

// задача 11
void Discount() {
    int amount;
    std::cout << "Please, enter the purchase amount" << std::endl;
    std::cin >> amount;
    if (amount > 1000) {
        int result = amount * 0.9;
        std::cout << "purchase price including discount: " << result << std::endl;
    }
    else {
        std::cout << "discount not applied, purchase amount: " << amount << std::endl;
    }
}

// задача 12
void Recommendation() {
    int height, weight;
    std::cout << "enter your height and weight via 'enter':" << std::endl;
    std::cin >> height >> weight;
    int IdealWeight = height - 100;
    if (weight > IdealWeight) {
        std::cout << "you should lose some weight!" << std::endl;
    }
    else if (weight == IdealWeight) {
        std::cout << "you have the ideal weight!" << std::endl;
    }
    else {
        std::cout << "you should gain some weight!" << std::endl;
    }
}

// задача 13
void RandNum() {
    srand(time(nullptr));
    int RandNumFirst = 1 + rand()%9;
    int RandNumSecond = 1 + rand()%9;
    int UserResult;
    std::cout << "multiply " << RandNumFirst <<  " by " << RandNumSecond  << std::endl;
    std::cout << "enter the result of multiplication" <<std::endl;
    std::cin >> UserResult;
    if (UserResult == RandNumFirst*RandNumSecond) {
        std::cout << "you are right!" <<std::endl;
    }
    else {
        std::cout << "you made a mistake :( " <<std::endl;
    }
}

// задача 14
void CostOfConv() {
    int cost, len, day;
    std::cout << " enter the cost of 1 minute of conversation :" << std::endl;
    std::cin >> cost;
    std::cout << "enter the duration of the conversation:" << std::endl;
    std::cin >> len;
    std::cout << "enter the day of the week on which you spoke (1-7):" << std::endl;
    std::cin >> day;
    if (day > 5) {
        int DiscountAmount = cost*len*0.8;
        std::cout << "the cost of your conversation with discount was: " << DiscountAmount << std::endl;
    } else {
        int amount = cost*len;
        std::cout << "the cost of your conversation was: " << amount << std::endl;
    }


}

// задача 15
void MonthOfYear() {
    int num;
    std::cout << "enter number of the month:" <<std::endl;
    std::cin >> num;
    switch (num) {
        case 1: std::cout << "January - winter" <<std::endl;
            break;
        case 2: std::cout << "February - winter" <<std::endl;
            break;
        case 3: std::cout << "March - spring" <<std::endl;
            break;
        case 4: std::cout << "April - spring" <<std::endl;
            break;
        case 5: std::cout << "May - spring" <<std::endl;
            break;
        case 6: std::cout << "June - summer" <<std::endl;
            break;
        case 7: std::cout << "July - summer" <<std::endl;
            break;
        case 8: std::cout << "August - summer" <<std::endl;
            break;
        case 9: std::cout << "September - fall" <<std::endl;
            break;
        case 10: std::cout << "October - fall" <<std::endl;
            break;
        case 11: std::cout << "November - fall" <<std::endl;
            break;
        case 12: std::cout << "December - winter" <<std::endl;
            break;
    }
}

// задача 16
void HappyNumber() {
    int num;
    std::cout << "enter your 6-digit number:" <<std::endl;
    std::cin >> num;
    int a = num/100000 + (num%100000)/10000 + (num%10000)/1000;
    int b = (num%1000)/100 + (num%100)/10 + num%10;
    if (a == b) {
        std::cout << "your number is happy!" << std::endl;
    }
    else {
        std::cout << "your number is NOT happy!" << std::endl;
    }

}

// задача 17
void AddCop() {
    int num;
    std::cout << "enter a number in the range from 1 to 99" <<std::endl;
    std::cin >> num;
    if (num > 10 & num < 20) {
        std::cout << num << " копеек" << std::endl;
    }
    else if (num%10 == 0) {
        std::cout << num << " копеек" << std::endl;
    }
    else if (num%10 == 1) {
        std::cout << num << " копейка" << std::endl;
    }
    else if (num%10 == 2 || num%10 == 3 || num%10 == 4 ) {
        std::cout << num << " копейки" << std::endl;
    }
    else if (num%10 == 5 || num%10 == 6 || num%10 == 7 || num%10 == 8 || num%10 == 9) {
        std::cout << num << " копеек" << std::endl;
    }

}

// задача 18
void Palindrome() {
    int num;
    std::cout << "enter your four - digit number: " <<std::endl;
    std::cin >> num;
    if (num%10 == num/1000 & (num/100)%10 == (num/10)%10) {
        std::cout << "Your number is a Palindrome!" <<std::endl;
    }
    else {
        std::cout << "Your number is NOT a Palindrome!" <<std::endl;
    }


}

// задача 19
void CompareToB() {
    int num,b;
    std::cout << "enter your three - digit number: " <<std::endl;
    std::cin >> num;
    std::cout << "enter a number 'b' to compare: " <<std::endl;
    std::cin >> b;
    if (num/100 * (num/10)%10 * num%10 > b) {
        std::cout << "multiplying the digits of your number is greater than the number 'b'" <<std::endl;
    }
    else {
        std::cout << "number 'b' is greater than the result of multiplying the digits of your number" <<std::endl;
    }
    int sum = num/100 + (num/10)%10 + num%10;
    if (sum%7 == 0) {
        std::cout << "the sum of digits of your number is a multiple of 7" <<std::endl;
    }
    else {
        std::cout << "the sum of digits of your number is a multiple of 7" <<std::endl;
    }

}

// задача 20
void Rectangle(){
    float a,b,c,d;
    std::cout << "enter the real positive numbers 'a, b, c, d' via 'enter':" << std::endl;
    std::cin >> a >> b >> c >> d;
    if ((a<c & b<d) || (a<d & b<c)) {
        std::cout << "rectangle 'ab' can be placed inside 'cd'" << std::endl;
    }
    else {
        std::cout << "rectangle 'ab' can NOT be placed inside 'cd'" << std::endl;
    }

}

int main()
{
    Square(); // задача 1
    Circle(); // задача 2
    Triangle(); // задача 3
    SumDigits(); // задача 4
    CartToPol(); // задача 5
    PolToCart(); // задача 6
    EquationRoots(); // задача 7
    FindMedians(); // задача 8
    TimeOfDay(); // задача 9
    IsoscelesTriangle(); // задача 10
    Discount(); // задача 11
    Recommendation(); // задача 12
    RandNum(); // задача 13
    CostOfConv(); // задача 14
    MonthOfYear(); // задача 15
    HappyNumber(); // задача 16
    AddCop(); // задача 17
    Palindrome(); // задача 18
    CompareToB(); // задача 19
    Rectangle(); // задача 20
    return 0;
}

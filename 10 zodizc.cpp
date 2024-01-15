#include <iostream>

using namespace std;

enum ZodiacSign {
    ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO,
    LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES
};

const int SIGN_START_DAY[] = {21, 21, 21, 21, 23, 24, 24, 24, 23, 22, 21, 20};
const string ZODIAC_NAMES[] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo",
                                "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces"};

ZodiacSign findZodiacSign(int day, int month) {
    if ((month == 3 && day >= SIGN_START_DAY[ARIES]) || (month == 4 && day <= 19))
        return ARIES;
    else if ((month == 4 && day >= SIGN_START_DAY[TAURUS]) || (month == 5 && day <= 20))
        return TAURUS;
    else if ((month == 5 && day >= SIGN_START_DAY[GEMINI]) || (month == 6 && day <= 20))
        return GEMINI;
    else if ((month == 6 && day >= SIGN_START_DAY[CANCER]) || (month == 7 && day <= 22))
        return CANCER;
    else if ((month == 7 && day >= SIGN_START_DAY[LEO]) || (month == 8 && day <= 22))
        return LEO;
    else if ((month == 8 && day >= SIGN_START_DAY[VIRGO]) || (month == 9 && day <= 22))
        return VIRGO;
    else if ((month == 9 && day >= SIGN_START_DAY[LIBRA]) || (month == 10 && day <= 22))
        return LIBRA;
    else if ((month == 10 && day >= SIGN_START_DAY[SCORPIO]) || (month == 11 && day <= 21))
        return SCORPIO;
    else if ((month == 11 && day >= SIGN_START_DAY[SAGITTARIUS]) || (month == 12 && day <= 21))
        return SAGITTARIUS;
    else if ((month == 12 && day >= SIGN_START_DAY[CAPRICORN]) || (month == 1 && day <= 19))
        return CAPRICORN;
    else if ((month == 1 && day >= SIGN_START_DAY[AQUARIUS]) || (month == 2 && day <= 18))
        return AQUARIUS;
    else
        return PISCES;
}

int main() {
    int day, month, year;

    cout << "Enter your date of birth (day month year): ";
    cin >> day >> month >> year;

    ZodiacSign sign = findZodiacSign(day, month);

    cout << "Your Zodiac Sign is: " << ZODIAC_NAMES[sign] << endl;

    return 0;
}


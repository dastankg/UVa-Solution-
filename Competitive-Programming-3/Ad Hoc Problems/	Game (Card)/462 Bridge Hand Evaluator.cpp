#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::map<char, int> suitConversion;
    suitConversion['S'] = 0;
    suitConversion['H'] = 1;
    suitConversion['D'] = 2;
    suitConversion['C'] = 3;

    char suitBack[4] = {'S', 'H', 'D', 'C'};

    bool hasAce[4], hasKing[4], hasQueen[4], hasJack[4], isTrump[4];
    int cardCount[4], points, specialPoints, pos;

    char temp[3];

    while (std::cin >> temp) {
        for (int i = 0; i < 4; ++i) {
            hasAce[i] = hasKing[i] = hasQueen[i] = hasJack[i] = isTrump[i] = false;
            cardCount[i] = 0;
        }

        points = specialPoints = 0;

        for (int i = 0; i < 13; ++i) {
            if (i != 0)
                std::cin >> temp;

            pos = suitConversion[temp[1]];

            switch (temp[0]) {
                case 'A':
                    hasAce[pos] = true;
                    points += 4;
                    break;

                case 'K':
                    hasKing[pos] = true;
                    points += 3;
                    break;

                case 'Q':
                    hasQueen[pos] = true;
                    points += 2;
                    break;

                case 'J':
                    hasJack[pos] = true;
                    points += 1;
            }

            ++cardCount[pos];
        }

        for (int i = 0; i < 4; ++i) {
            if (hasAce[i])
                isTrump[i] = true;

            if (hasKing[i] && cardCount[i] < 2)
                --points;
            else if (hasKing[i])
                isTrump[i] = true;

            if (hasQueen[i] && cardCount[i] < 3)
                --points;
            else if (hasQueen[i])
                isTrump[i] = true;

            if (hasJack[i] && cardCount[i] < 4)
                --points;

            if (cardCount[i] == 2)
                ++specialPoints;
            else if (cardCount[i] < 2)
                specialPoints += 2;
        }

        if (isTrump[0] && isTrump[1] && isTrump[2] && isTrump[3] && points >= 16)
            std::cout << "BID NO-TRUMP\n";
        else if (points + specialPoints >= 14) {
            char output = 'S';
            int max = 0;
            for (int i = 1; i < 4; ++i) {
                if (cardCount[i] > cardCount[max]) {
                    max = i;
                    output = suitBack[i];
                }
            }
            std::cout << "BID " << output << "\n";
        } else
            std::cout << "PASS\n";
    }
}

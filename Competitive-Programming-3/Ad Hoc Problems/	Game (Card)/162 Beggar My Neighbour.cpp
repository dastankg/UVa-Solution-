#include <iostream>
#include <deque>
#include <iomanip>
using namespace std;

int main()
{
    string card;
    while (true)
    {
        int turn = 0;
        deque<int> players[2];

        for (int i = 0; i < 52; ++i, turn = !turn)
        {
            cin >> card;
            if (card[0] == '#')
                return 0;

            int value = 0;
            if (card[1] == 'J')
                value = 1;
            else if (card[1] == 'Q')
                value = 2;
            else if (card[1] == 'K')
                value = 3;
            else if (card[1] == 'A')
                value = 4;

            players[turn].push_front(value);
        }

        deque<int> game;
        bool cycle = false;

        while (!players[turn].empty())
        {
            int currentCard = players[turn].front();
            players[turn].pop_front();
            game.push_back(currentCard);
            turn = !turn;

            while (currentCard)
            {
                if (players[turn].empty())
                {
                    cycle = false;
                    break;
                }
                else
                    cycle = true;

                int card = players[turn].front();
                players[turn].pop_front();
                game.push_back(card);

                if (card)
                {
                    turn = !turn;
                    currentCard = card;
                }
                else
                    --currentCard;
            }

            if (cycle)
            {
                cycle = false;
                turn = !turn;
                while (!game.empty())
                {
                    players[turn].push_back(game.front());
                    game.pop_front();
                }
            }
        }

        if (players[0].empty())
            cout << "1 " << setw(2) << players[1].size() << "\n";
        else
            cout << "2 " << setw(2) << players[0].size() << "\n";
    }

    return 0;
}

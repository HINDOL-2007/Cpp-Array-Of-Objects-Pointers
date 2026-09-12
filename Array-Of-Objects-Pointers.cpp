#include <iostream>
#include <string>
using namespace std;
class LoadoutDrop
{
    string itemName;
    int diamondCost;

public:
    void setData(string name, int cost)
    {
        itemName = name;
        diamondCost = cost;
    }
    void showItem()
    {
        cout << "Item :- " << itemName
             << "\nValue :- " << diamondCost << " Diamonds" << endl;
    }
};

int main()
{
    LoadoutDrop *legendarySkin = new LoadoutDrop;
    legendarySkin->setData("Evo Gun Skin", 1500);
    legendarySkin->showItem();
    LoadoutDrop *airdrop = new LoadoutDrop[3];
    LoadoutDrop *airdropTemp = airdrop;
    string name;
    int cost , i;
    for ( i = 0; i < 3; i++)
    {
        cout << "Loadout Drop :- " << i + 1 << endl;
        cout << "Enter the name of the item :- ";
        cin >> name;
        cout << "Enter the diamond cost of the item :- ";
        cin >> cost;
        airdrop->setData(name, cost);
        airdrop++;
    }
    for ( i = 0; i < 3; i++)
    {
        cout << "Loadout Drop :- " << i + 1 << endl;
        airdropTemp->showItem();
        airdropTemp++;
    }
    delete legendarySkin;
    delete[] airdrop;
    delete[] airdropTemp;
    return 0;
}

//Enum example

//An enum example in C++

using namespace std;
#include <iostream>
#include <string>

enum ItemType
{
    ITEMTYPE_SWORD,
    ITEMTYPE_TORCH,
    ITEMTYPE_POTION
};

string getItemName(ItemType itemType)
{
    if (itemType == ITEMTYPE_SWORD)
        return string("Sword");
    if (itemType == ITEMTYPE_TORCH)
        return string("Torch");
    if (itemType == ITEMTYPE_POTION)
        return string("Potion");
}

int main()
{
    ItemType itemType(ITEMTYPE_TORCH);

    cout << "You are carrying a " << getItemName(itemType) << "\n";

    return 0;
    cout<<"bruh";
}

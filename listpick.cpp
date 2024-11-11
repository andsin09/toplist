#include <iostream> 
#include <string> 
#include <vector> 
using namespace std;

int main() { 

int listpick; 
int leng; 
string item; 
string empty = " ";
vector<string> list;

cout << "Which list would you like to fill out: \n 1. Songs\n 2. Movies\n 3. YouTubers\n 4. Games\n" << endl;
cin >> listpick;

cout << "How long do you want your list to be?" << endl;
cin >> leng;
s
// Resize the vector to the desired length
list.resize(leng);


switch (listpick) {
    case 1:
        getline(cin, empty);
        for (int i = 0; i < leng; i++) {
            cout << "What is the number " << i + 1 << " song on your list?" << endl;
            getline(cin, item);
            list[i] = item;
        }
        break;
    case 2:
        getline(cin, empty);
        for (int i = 0; i < leng; i++) {
            cout << "What is the number " << i + 1 << " movie on your list?" << endl;
            getline(cin, item);
            list[i] = item;
        }
        break;
    case 3:
        getline(cin, empty);
        for (int i = 0; i < leng; i++) {
            cout << "What is the number " << i + 1 << " YouTuber on your list?" << endl;
            getline(cin, item);
            list[i] = item;
        }
        break;
    case 4:
        getline(cin, empty);
        for (int i = 0; i < leng; i++) {
            cout << "What is the number " << i + 1 << " game on your list?" << endl;
            getline(cin, item);
            list[i] = item;
        }
        break;
        
    case 5:
        getline(cin, empty);
        for(int i = 0; i < leng; i++){
            cout << "What is the number " << i + 1 << " Fortnite skin on your list?" << endl;
            getline(cin, item);
            list[i] = item;
        }
        break;
    default:
        cout << "Not an option." << endl;
        return 0;
}

// Output the list
cout << "\nYour list:" << endl;
int numba = 1;
for (const auto& entry : list) {
    cout << numba << ".  " << entry << endl;
    numba++;
}

return 0;
}

#include <iostream>
#include "Rectangle.h"
#include "Pet.h"
#include "Music.h"
using namespace std;

int main() {
    Rectangle rect1(4, 6);
    cout << "Rectangle 1:" << endl;
    cout << "Area: " << rect1.getArea() << endl;
    cout << "Perimeter: " << rect1.getPerimeter() << endl;
    cout << "Is Square?: " << boolalpha << rect1.isSquare() << endl;
    printf("=================================\n");

    Pet myPet("Lucky", 5, "dog");
    cout << "My pet's name is " << myPet.getName() << endl;
    Puppy myPuppy("Kong", 3, "dog", "Poodle");
    cout << "My puppy's breed is " << myPuppy.getBreed() << endl;
    printf("=================================\n");

    //Creat a new music streaming service
    MusicStreamingService myService("Melon");
    //Add some music to the service
    myService.addMusic("Jump", "Blackpink", "Jump", 2025);
    myService.addMusic("Swim", "BTS", "ARIRANG", 2025);
    myService.addMusic("BANG BANG", "IVE", "EVIVE", 2025);
    myService.addMusic("RUDE", "HEARTTWOHEART", "HEART", 2026);
    //Search by title
    string music_title;
    cout << "Enter the Music title";
    cin >> music_title;
    Music* result = myService.searchByTitle(music_title);
    if (result != NULL) {
        cout << "Found:" << result->getTitle() << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
    //Search by artist
    string artist_name;
    cout << "Enter the Artist name: ";
    cin >> artist_name;

    vector<Music*> searchResults = myService.searchByArtist(artist_name);
    if (searchResults.size() > 0) {
        cout << "Found " << searchResults.size() << " songs by " << artist_name << ":" << endl;
        for (int i = 0; i < searchResults.size(); i++) {
            cout << searchResults[i]->getTitle() << endl;
        }
    }
    else {
        cout << "Not Found" << endl;

    }
    return 0;
}
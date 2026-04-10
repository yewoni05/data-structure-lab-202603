#pragma once
#pragma once
#ifndef Music_h
#define Music_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Music {
private:
    string title;
    string artist;
    string album;
    int year;

public:
    Music(string t, string ar, string al, int y) {
        title = t;
        artist = ar;
        album = al;
        year = y;
    }

    string getTitle() { return title; }
    string getArtist() { return artist; }
    string getAlbum() { return album; }
    int getYear() { return year; }
};

class MusicStreamingService {
private:
    vector<Music*> musicList;
    int count;

public:
    MusicStreamingService(string name) {
        count = 0;
    }

    void addMusic(string title, string artist, string album, int year) {
        musicList.push_back(new Music(title, artist, album, year));
        count++;
    }

    // search by title
    Music* searchByTitle(string title) {
        for (int i = 0; i < count; i++) {
            if (musicList[i]->getTitle() == title) {
                return musicList[i];
            }
        }
        return NULL;
    }

    // search by artist
    vector<Music*> searchByArtist(string artist) {
        vector<Music*> results;
        for (int i = 0; i < musicList.size(); i++) {
            // artist와 musicList[i]의 artist가 같으면 results에 추가    
            if (musicList[i]->getArtist() == artist) {
                results.push_back(musicList[i]);
            }
        }
        return results;
    }
};

#endif

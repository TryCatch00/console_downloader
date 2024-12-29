#include "source/VideoDownloader.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int choice = 0, breakDef = 1, fchoice=0;
char isContinue;

void mp4Download() {
    string videoUrl;
    cout << "\nMP4: YouTube URL for the video you want to download: ";
    cin >> videoUrl;



    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "\t1.\t .mkv" << endl;
    cout << "\t2.\t .mp4" << endl;
    cout << "\t3.\t .webm" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "\nMP4: Please Select an format (Default is .mp4) : ";

    string input;
    getline(cin, input);

    downloadVideo(videoUrl, choice, fchoice);

}

void mp3Download() {
    string videoUrl;
    cout << "\nMP3: YouTube URL for the audio you want to download: ";
    cin >> videoUrl;
    downloadVideo(videoUrl, choice);
}

void thumbnailDownload() {
    string videoUrl;
    cout << "\nThumbnail: Youtube URL for the Thumbnail you want to download: ";
    cin >> videoUrl;
    downloadVideo(videoUrl, choice);
}

void beginWrite() {
    cout << "   ______                       __        ____                      __                __         	    "   << endl;
    cout << "  / ____/___  ____  _________  / /__     / __ \\____ _      ______  / /___  ____ _____/ /__  _____         " 	<< endl;
    cout << " / /   / __ \\/ __ \\/ ___/ __ \\/ / _ \\   / / / / __ \\ | /| / / __ \\/ / __ \\/ __ `/ __  / _ \\/ ___/  " 	<< endl;
    cout << "/ /___/ /_/ / / / (__  ) /_/ / /  __/  / /_/ / /_/ / |/ |/ / / / / / /_/ / /_/ / /_/ /  __/ /              " 	<< endl;
    cout << "\\____/\\____/_/ /_/____/\\____/_/\\___/  /_____\\/____/|__/|__/_/ /_/_/\\____/\\__,_/\\__,_/\\___/_/      " 	<< endl;
    cout << "\nPowered by @p0unter & @Mal1koRe1ss" << endl << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "\t1.\t Youtube MP4 Download" << endl;
    cout << "\t2.\t Youtube MP3 Download" << endl;
    cout << "\t3.\t Youtube Thumbnail Download" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
}

void _isContinue(string _message) {
    cout << _message;
    cin >> isContinue;
    if (isContinue == 'n' || isContinue == 'N') {
        breakDef = 0;
    }
}

int main() {
    while (1)
    {
        system("cls");
        beginWrite();
        cout << "Your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            mp4Download();
            break;
        case 2: 
            mp3Download();
            break;
        case 3: 
            thumbnailDownload();
            break;
        default:
            _isContinue("Please choose a correct option. Did you conutinue? (y/n): ");
        }
        _isContinue("Did you want to continue? (y/n): ");

        if (breakDef == 0) {
            break;
        }
    }

    cout << "Program finished!" << endl;
    system("pause");

    return 0;
}
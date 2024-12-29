#include "VideoDownloader.h"
#include "../DirectoryManager.h"
#include <iostream>
#include <cstdlib>


void downloadVideo(const std::string& videoUrl, int choice) {
    createDirectory("Downloaded");
    std::string command;
    std::string fileName;

    if (choice == 2) {
        command = "yt-dlp --get-title" + videoUrl + std::cin >> fileName;
        command = "yt-dlp -f bestaudio -o \"Downloaded/Audio/%(title)s.%(ext)s\" -print " + videoUrl;

        std::cout << "Running yt-dlp command: " << command << std::endl;
        int result = system(command.c_str());
        if (result != 0) {
            std::cout << "Error downloading audio." << std::endl;
            return;
        }

        fileName = 


        // MP3
        command = "ffmpeg -i \"" + fileName + "%(title)s.webm\" -vn -ar 44100 -ac 2 -b:a 192k \"" + fileName + "%(title)s.mp3\" && rm \"" + fileName + "%(title)s.webm\"";
        std::cout << "Running ffmpeg command: " << command << std::endl;

    } else if (choice == 3) {
        command = "yt-dlp --skip-download --write-thumbnail -o \"Downloaded/Thumbnail/%(title)s.%(ext)s\" " + videoUrl ;
    }

    std::cout << "Downloading process starting...\n" << command << std::endl;

    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "File downloaded successfully!" << std::endl;
    } else {
        std::cout << "Error occurred during download." << std::endl;
    }
}

void downloadVideo(const std::string& videoUrl,int choice, int fchoice) {
    createDirectory("Downloaded");
    std::string command;
        if (choice == 1) {
            switch (fchoice)
            {
            case 1:
                command = "yt-dlp -f bestvideo+bestaudio/best -o \"Downloaded/Video/%(title)s.%(ext)s\" --merge-output-format mkv " + videoUrl;
                break;
            case 2:
                command = "yt-dlp -f bestvideo+bestaudio/best -o \"Downloaded/Video/%(title)s.%(ext)s\" --merge-output-format mp4 " + videoUrl;
                break;
            case 3:
                command = "yt-dlp -f bestvideo+bestaudio/best -o \"Downloaded/Video/%(title)s.%(ext)s\" --merge-output-format webm " + videoUrl;
                break;
            default:
                command = "yt-dlp -f bestvideo+bestaudio/best -o \"Downloaded/Video/%(title)s.%(ext)s\" --merge-output-format mp4 " + videoUrl;
                break;
            }
    } 

    std::cout << "Downloading process starting...\n" << command << std::endl;

    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "File downloaded successfully!" << std::endl;
    } else {
        std::cout << "Error occurred during download." << std::endl;
    }
}
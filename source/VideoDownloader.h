#pragma once

#ifndef VIDEO_DOWNLOADER_H
#define VIDEO_DOWNLOADER_H

#include <string>

void downloadVideo(const std::string& videoUrl, int choice);
void downloadVideo(const std::string& videoUrl, int choice, int fchoice);

#endif
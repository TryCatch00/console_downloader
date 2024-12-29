<div align="center" id="readme-top">
  <a href="https://github.com/p0unter/console_downloader">
    <img src="https://github.com/user-attachments/assets/c7542326-7075-42bb-b297-15fa4d2df0f8" alt="Logo" width="150" height="150">
  </a>

  <h3 align="center">Console Downloader</h3>

  <p align="center">
    This project is a C++ console application that allows users <br> to download files from various sources. The app lets<br> you download YouTube videos in MP4 format, music in MP3 format and more.
    <br />
    <a href="https://github.com/"></a>
    <details>
      <summary><h2><strong>View Screenshoots</strong></h2></summary>
      <ul>
        <li>
          <img src="https://github.com/user-attachments/assets/5db24410-4752-4782-b8c1-c124e0b3e92e">
        </li>
        <li>
          <img src="https://github.com/user-attachments/assets/2a10ae3b-ed9f-468e-a592-8940800b583e">
        </li>
        <li>
          <img src="https://github.com/user-attachments/assets/a8c2f533-801a-44e2-8099-74e1a95de266">
        </li>
      </ul>
    </details>
  </p>

  <br />
    <br />
    <a href="https://github.com/">Support</a>
    ·
    <a href="https://github.com/p0unter/console_downloader/issues/new">Report Bug</a>
    ·
    <a href="https://www.ffmpeg.org/download.html">FFmpeg Downloads</a>
    ·
    <a href="https://github.com/BtbN/FFmpeg-Builds/releases/download/latest/ffmpeg-master-latest-win64-gpl.zip">FFmpeg Download(For Windows)</a>
</div>

<details>
  <summary><h3>Active Team</h3></summary>
  <ol>
    <li>Mal1koRe1ss <a href="https://github.com/Mal1koRe1ss">(Github)</a></li>
    <li>Pounter <a href="https://github.com/p0unter">(Github)</a></li>
  </ol>
</details>

## Features
<table>
  <tr>
    <td>YouTube videos in MP4 format</td>
    <td>YouTube channel logo and banners <strong>(NOT DONE)</strong></td>
  </tr>
  <tr>
    <td>Spotify music in MP3 format <strong>(NOT DONE)</strong></td>
    <td>Spotify channel logo <strong>(NOT DONE)</strong></td>
  </tr>
</table>

## Requirements
**FFmpeg**

**G++**

<br>

## FFmpeg Installation (Windows 10)

[Download FFmpeg from here](https://www.ffmpeg.org/download.html)

Create a new folder called **FFmpeg** inside **C:\Program Files**

Copy all the files inside the FFmpeg zip and move them into **C:\Program Files\FFmpeg**

Open **Settings** **System>About** Click **Advanced system settings.**

In the **System Properties** window Click **Environment Variables...**

In the **Environment Variables** window inside **System Variables**, open **Path.**

Click **New** and type **C:\Program Files\FFmpeg\bin.** and then Click **OK** to every window.

Now FFmpeg is installed. You can install it to a custom directory if you want.

<br>

### MinGW(Windows 10) Installation and Compiling 

[Download MinGW from here](https://www.msys2.org/) and install it.

Type ```$ pacman -S mingw-w64-ucrt-x86_64-gcc``` in MSYS2 UCRT64.

When **:: Proceed with installation? [Y/n]** text comes press Y.

After the msys2 Installation you can check G++ with ```g++ --version``` in CMD or you can go to **"C:\msys64\ucrt64\bin"** this directory.

If you done everything correct you should be able to have g++ in your system.

Clone the project:
  <br>Open a terminal and type the command below. Or directly download with **<> Code** button.
   ```bash
   git clone https://github.com/p0unter/console_downloader.git
   ```
**Make sure that the files are extracted and they are in the same location in this repository.**

Go to the directory where **Source code** is located.

Open a terminal and use cd to change the location to the directory where **Source code** is located.

Compile the project: 
<br>Open a terminal and use the command below
  ```bash
  g++ main.cpp source/VideoDownloader.cpp DirectoryManager.cpp -o VideoDownloaderApp _resource_.o
  ```
Now you are ready to go.

You can use the software with opening the **VideoDownloaderApp.exe** executable file.

<br>

## Contribution
Anyone who wants to contribute to this project is welcome to do so. Please send your suggestions and changes via a pull request. Feel free to mention that you are improving our project!

<p align="right">(<a href="#readme-top">back to top</a>)</p>

![v1imza_min](https://github.com/user-attachments/assets/a097dd95-711a-49ac-a8b3-f623d92ee959)

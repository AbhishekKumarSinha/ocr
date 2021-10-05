# ocr
OCR Example Implementation using Tesseract

### Environment
- OS: Ubuntu 20.04 LTS
- Compiler: g++
- OCR Engine: Tesseract 4.1.1

### Steps to setup development environment

Considering the fact that Ubuntu 20.04 LTS comes pre-installed with GNU C++ compiler, g++. We will see other dependencies to be installed.

First thing, please do update & upgrade.
```bash
sudo apt update
sudo apt upgrade
```

Now intall the required libraries using below commands :
```bash
sudo apt install -y libleptonica-dev
sudo apt install -y automake
sudo apt install -y pkg-config
sudo apt install -y libsdl-pango-dev
sudo apt install -y libicu-dev
sudo apt install -y libcairo2-dev
sudo apt install -y bc
```
After the above mentioned libraries are installed successfully, we will proceed to install Tesseract.
We will setup Tesseract 4.1.1 as this is the latest stable release at the time of creating this project.

Create a folder on your Home's directory and download Tesseract 4.1.1 using below command
```bash
wget https://github.com/tesseract-ocr/tesseract/archive/4.1.1.zip
```

This will download the 4.1.1.zip. Use below command to Unzip the contents.
```bash
unzip 4.1.1.zip
```
Above command will extract a folder with name tesseract-4.1.1.

Go inside tesseract-4.1.1 folder using:
```bash
cd tesseract-4.1.1
```
And, then run below commands to build tesseract-4.1.1.
```bash
./autogen.sh
./configure
make
sudo make install
sudo ldconfig
make training
sudo make training-install
```

If all the above commands were executed successfully, it should have install the tesseract-4.1.1 on the system.

This can be checked using
```bash
tesseract --version
```
Above command will display something like :
```bash
tesseract 4.1.1
 leptonica-1.79.0
  libgif 5.1.4 : libjpeg 8d (libjpeg-turbo 2.0.3) : libpng 1.6.37 : libtiff 4.1.0 : zlib 1.2.11 : libwebp 0.6.1 : libopenjp2 2.3.1
 Found AVX
 Found SSE
```
Inside tessdata folder there is a folder with name: tessdata.

We need to place eng.traineddata and osd.traineddata inside the tessdata folder in order to make tesseract capable to read english text.

These both traindata files can be downloaded from below url 
[https://github.com/tesseract-ocr/tessdata](https://github.com/tesseract-ocr/tessdata)

Now let's move to the Coding part.



### License
[MIT](https://choosealicense.com/licenses/mit/)

<!-- CONTACT -->
### Contact

Abhishek Kumar Sinha - [@_abhisheksinha](https://twitter.com/_abhisheksinha) - email4abhi@gmail.com

Project Link: [https://github.com/AbhishekKumarSinha/ocr](https://github.com/AbhishekKumarSinha/ocr)

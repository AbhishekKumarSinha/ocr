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



### License
[MIT](https://choosealicense.com/licenses/mit/)

<!-- CONTACT -->
### Contact

Abhishek Kumar Sinha - [@_abhisheksinha](https://twitter.com/_abhisheksinha) - email4abhi@gmail.com

Project Link: [https://github.com/AbhishekKumarSinha/ocr](https://github.com/AbhishekKumarSinha/ocr)

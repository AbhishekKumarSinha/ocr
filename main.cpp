#include<iostream>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>

using namespace std;

int main()
{
	cout << " Tesseract OCR Example Code :- " << endl;

	char *outText;

    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    // Initialize tesseract-ocr with English, without specifying tessdata path
    if (api->Init(NULL, "eng")) {
        fprintf(stderr, "Could not initialize tesseract.\n");
        exit(1);
    }

    // Open input image with leptonica library
    Pix *image = pixRead("test/img_1.png");
    api->SetImage(image);
    // Get OCR result
    outText = api->GetUTF8Text();
    printf("OCR output:\n%s", outText);
    cout << "OCR OUTPUT :: " << outText << endl;

    // Destroy used object and release memory
    api->End();
    delete api;
    delete [] outText;
    pixDestroy(&image);

	return 0;
}
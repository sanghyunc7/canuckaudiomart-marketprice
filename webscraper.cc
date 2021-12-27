#include "webscraper.h"

WebScraper::WebScraper()
: x{10}, y{10} {
}

int WebScraper::getX() {
	return x;
}

void WebScraper::setX(int value) {
	x = value;
}
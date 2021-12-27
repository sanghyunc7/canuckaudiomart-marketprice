#include <iostream>
#include "webscraper.h"
#include <memory>

#include <fstream>
#include "cpr/cpr.h"
#include "gumbo.h"


// int main() {
// 	std::cout << "hello world!" << '\n';
// 	// return 0;

// 	std::shared_ptr<WebScraper> webScraper = std::make_shared<WebScraper>();

// 	std::cout << webScraper->getX() << ' ' << webScraper->y << std::endl;

// }

std::string extract_html_page()
{
    cpr::Url url = cpr::Url{"https://en.wikipedia.org/wiki/Poppy_seed_defence"};
    cpr::Response response = cpr::Get(url);
    return response.text;
}

int main()
{
    std::string page_content = extract_html_page();
}
#include "IFactory.h"
#include "ListFactory.h"
#include <assert.h>
#include <iostream>
#include <memory>
#include <string>

int main() {
    std::shared_ptr<IFactory> factory(IFactoryHelper::GetFactory("ListFactory"));
    assert(factory != nullptr);
    std::shared_ptr<ILink> people(factory->CreateLink(u8"人民日报", u8"http://www.people.com.cn/"));
    std::shared_ptr<ILink> gmw(factory->CreateLink(u8"光明网", u8"http://www.gmw.cn/"));
    std::shared_ptr<ILink> us_yahoo(factory->CreateLink(u8"us_yahoo", u8"http://www.yahoo.com/"));
    std::shared_ptr<ILink> jp_yahoo(factory->CreateLink(u8"jp_yahoo", u8"http://www.yahoo.com.jp/"));
    std::shared_ptr<ILink> google(factory->CreateLink(u8"google", u8"http://www.google.com"));

    std::shared_ptr<ITray> trayNews(factory->CreateTray("news"));
    trayNews->AddItem(people.get());
    trayNews->AddItem(gmw.get());

    std::shared_ptr<ITray> trayYahoo(factory->CreateTray("yahoo!"));
    trayYahoo->AddItem(us_yahoo.get());
    trayYahoo->AddItem(jp_yahoo.get());

    std::shared_ptr<ITray> traySearch(factory->CreateTray("traySearch"));
    trayYahoo->AddItem(trayYahoo.get());
    trayYahoo->AddItem(google.get());

    std::shared_ptr<IPage> page(factory->CreatePage("LinkPage", "Hunter"));
    page->AddItem(trayNews.get());
    page->AddItem(traySearch.get());
    page->Output();

    return 0;
}

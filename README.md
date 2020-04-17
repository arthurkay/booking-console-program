# c++ Tutorial

Please note that, the `string` library is part of the std namespace, hence the need to add a
`using namespace std;` in [menu.h](menu.h)

as can be seen below.

```H
#ifndef _MENU_H_
#define _MENU_H_
#include <string>

using namespace std;

class menu {
    private:
        const int maxLength = 15;
        const int maxDraft = 5;
        const int lengthMarina = 150;
```
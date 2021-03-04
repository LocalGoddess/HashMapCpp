//
// Created by Hammer86gn on 3/4/2021.
//

#include "HashMap.h"
#include <list>
#include <algorithm>

namespace hml {

    template<typename key, typename value>
    void HashMap<key, value>::put(key Key, value Value) {
        HashMap<key, value>::MapKeys->insert(MKIterator, Key);
        ++MKIterator;

        HashMap<key, value>::MapValues->insert(MVIterator, Value);
        ++MVIterator;
    }

    template<typename key, typename value>
    value HashMap<key,value>::getValueByKey(key Key) {
        typename std::list<key>::iterator temp = std::find(MapKeys->begin(), MapKeys->end(), Key);
        typename std::list<value>::iterator temp2 = MVIterator;
        MVIterator = temp;


        value Returner = *MVIterator;
        MVIterator = temp2;
        return Returner;
    }

    template<typename key, typename value>
    void HashMap<key, value>::remove(key Key) {

    }

}






























































//
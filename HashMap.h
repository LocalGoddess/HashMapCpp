//
// Created by Hammer86gn on 3/4/2021.
//

#ifndef MAPHASH_HASHMAP_H
#define MAPHASH_HASHMAP_H

#include <list>

namespace hml {

    template<typename key, typename value>
    class HashMap {
    public:
        std::list<key>* MapKeys;
        std::list<value>* MapValues;

        typename std::list<key>::iterator MKIterator = MapKeys->begin();
        typename std::list<value>::iterator MVIterator = MapValues->begin();




        /**
         * Adds a new Key and Value to the HashMap
         *
         * @param Key The key
         * @param Value The Value
         */
        void put(key Key, value Value);


        /**
         * Gets the value of the given key
         *
         * @param Key The Key in which the value will be fetched
         * @return The value of the key
         */
        value getValueByKey(key Key);

        /**
         * Removes a given Key and Value
         *
         * @param Key The Key that will be removed
         */
        void remove(key Key);


        /**
         * Sets a value of the given key
         *
         * @param Key The Key of the value to change
         * @param Value The new value for the Key
         */
        void setValue(key Key, value Value);

    };

}
#endif //MAPHASH_HASHMAP_H







































//
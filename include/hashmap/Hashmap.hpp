#ifndef _CHLOE_HASHMAP_HPP
#define _CHLOE_HASHMAP_HPP


template<typename V>
struct _hashnode {
    unsigned long hashedKey;
    V value;
};

template<typename K>
unsigned long hashKey( K key );

template<typename K, typename V>
class Hashmap
{
public:
    Hashmap();

    void put( K key, V value );

    V get( K key );

    void remove( K key );

    bool exists( K key );

    unsigned long size();

private:
    unsigned long m_size;
    unsigned long max_size = 0xFFFFFFFF;

    _hashnode<V> m_map[];
};

#endif
#include "hashmap/Hashmap.hpp"
#include <iostream>

template<typename K, typename V>
Hashmap<K, V>::Hashmap()
{
    this->m_size = 0;
}


template<typename K, typename V>
void Hashmap<K, V>::put( K key, V value )
{
    this->m_map[this->m_size + 1] = { hashKey( key ), value };
    this->m_size++;
}

template<typename K, typename V>
V Hashmap<K, V>::get( K key )
{
    unsigned long hashedKey = hashKey( key );
        for ( int i = 0; i < this->m_size; i++ ) {
            _hashnode<V> node = this->m_map[i];
                if ( node.hashedKey == hashedKey ) {
                    return node.value;
                }
        }
    return nullptr;
}

template<typename K, typename V>
void Hashmap<K, V>::remove( K key )
{
    unsigned long hashedKey = hashKey( key );
        for ( int i = 0; i < this->m_size; i++ ) {
            _hashnode<V> node = this->m_map[i];
                if ( node.hashedKey == hashedKey ) {
                    this->m_map[i] = nullptr;
                    this->m_size--;
                }
        }
}
template<typename K, typename V>
bool Hashmap<K, V>::exists( K key )
{
    unsigned long hashedKey = hashKey( key );
        for ( int i = 0; i < this->m_size; i++ ) {
            _hashnode<V> node = this->m_map[i];
                if ( node.hashedKey == hashedKey ) {
                    return true;
                }
        }
    return false;
}
template<typename K, typename V>
unsigned long Hashmap<K, V>::size()
{
    return this->m_size;
}

template<typename K>
unsigned long hashKey( K key )
{
    std::size_t hash = std::hash<K>{}( key );
    return hash;
}

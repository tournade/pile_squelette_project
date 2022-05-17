//
// Created by etudiant on 22-05-03.
//

#ifndef PILE_INTRO_PILEIMPLEMENTATION_H
#define PILE_INTRO_PILEIMPLEMENTATION_H

#include "Pile.h"

/**
 * @brief Construit une pile d'éléments de type T, initialement vide.
 * @tparam T Type des éléments contenus dans la pile
 * @param capacite_maximale Nombre maximal d'éléments dans la pile à tout moment.
 */
template<typename T>
Pile<T>::Pile(std::size_t capacite_maximale){
    if(capacite_maximale <= 0){
        throw std::invalid_argument("la pile doit etre superieur a 0");
    }
    cardinal=capacite_maximale;

}

/**
 * @brief Ajoute un élément sur la pile.
 * @tparam T Type de l'élément rajouté.
 * @param valeur Valeur de l'élément rajouté.
 * @except runtime_error si la pile est déjà remplie à capacité.
 */
template<typename T>
void Pile<T>::push(const T &valeur) {
    if(pleine()){
        throw std::runtime_error("la pile est déjà remplie à capacité");
    } else {
        pile.push_back(valeur);
    }
}

/**
 * @brief Retire un élément de la pile.
 * @tparam T Type de l'élément retiré.
 * @return Valeur de l'élément retiré.
 * @except runtime_error si la pile est vide.
 */
template<typename T>
T Pile<T>::pop() {
    T result;
    if(vide()){
        throw std::runtime_error("la pile est vide");
    } else {
        result = pile.back();
        pile.pop_back();
    }

    return result ;
}

/**
 * @brief Vérifie si la pile contient des éléments.
 * @tparam T Type d'éléments contenus dans la pile.
 * @return true si, et seulement si, la pile est vide.
 */
template<typename T>
bool Pile<T>::vide() const {
    bool result = false;
    if (pile.size() == 0){
        result = true;
    }
    return result ;
}

/**
 * @brief Vérifie si la pile est pleine
 * @tparam T Type des éléments contenus dans la pile
 * @return true si, et seulement si, la pile est remplie à capacité.
 */
template<typename T>
bool Pile<T>::pleine() const {
    bool result = false;
    if (pile.size() == cardinal) {
        result = true;
    }

    return result ;
}


#endif //PILE_INTRO_PILEIMPLEMENTATION_H

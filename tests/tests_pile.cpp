//
// Created by etudiant on 22-05-03.
//
#include "Pile.h"
#include "gtest/gtest.h"

TEST(Pile, constructeur_noexcept) {
    EXPECT_NO_THROW(Pile<int> a) ;
}

TEST(Pile, constructeur_capacite_non_valide_throw) {
    EXPECT_THROW(Pile<int> a(0),std::invalid_argument) ;
}
/*
TEST(Pile, pop_pile_vide_throw) {


    EXPECT_EQ(0, 1) ;
}
TEST(Pile, push_pile_pleine_throw) {
    EXPECT_EQ(0, 1) ;
}
*/
TEST(Pile, pile_initiale_vide) {
    Pile<char> b(2);

    EXPECT_TRUE(b.vide());
}
/*
TEST(Pile, push_non_vide) {
    EXPECT_EQ(0, 1) ;
}

TEST(Pile, push_pop_recupere_valeur) {
    EXPECT_EQ(0, 1) ;
}

TEST(Pile, push_pop_redevient_vide) {
    EXPECT_EQ(0, 1) ;
}

TEST(Pile, push_pop_sequence) {
   EXPECT_EQ(0, 1) ;
}*/
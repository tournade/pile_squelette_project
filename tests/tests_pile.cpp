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

TEST(Pile, pop_pile_vide_throw) {
    Pile<int> p(1);
    EXPECT_THROW(p.pop(),std::runtime_error) ;

}
TEST(Pile, push_pile_pleine_throw) {
    Pile<int> z(1);
    z.push(10);
    EXPECT_THROW(z.push(2),std::runtime_error) ;


}
TEST(Pile, pile_initiale_vide) {
    Pile<char> b(2);

    EXPECT_TRUE(b.vide());
}

TEST(Pile, push_non_vide) {
    Pile<int> f(2);
    f.push(4);
    EXPECT_FALSE(f.vide()) ;
}

TEST(Pile, push_pop_recupere_valeur) {
    Pile<double> t(3);
    t.push(562);
    double result = t.pop();
    EXPECT_EQ(562,result) ;
}

TEST(Pile, push_pop_redevient_vide) {

    Pile<char> b(2);
    b.push('t');
    b.pop();
    EXPECT_TRUE(b.vide());
}

TEST(Pile, push_pop_sequence) {
    Pile<char> b(2);
    b.push('t');

    char r = b.pop();
    EXPECT_EQ(r,'t');
    EXPECT_TRUE(b.vide());
    b.push('t');
    b.push('e');
    EXPECT_TRUE(b.pleine());
    char q = b.pop();
    char w = b.pop();
    EXPECT_EQ(q,'e');
    EXPECT_EQ(w,'t');
}
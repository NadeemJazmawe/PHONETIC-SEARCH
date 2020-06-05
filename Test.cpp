
/**
 * AUTHOR : NADEEM JAZMAWE
*/

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;

TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of i and y") {
    string text = "xxx yeye yyy";
    CHECK(find(text, "yeye") == string("yeye"));
    CHECK(find(text, "ieie") == string("yeye"));
    CHECK(find(text, "yeie") == string("yeye"));
    CHECK(find(text, "ieye") == string("yeye"));
    CHECK(find(text, "YeYe") == string("yeye"));
    CHECK(find(text, "IeIe") == string("yeye"));
    CHECK(find(text, "Yeie") == string("yeye"));
    CHECK(find(text, "Ieye") == string("yeye"));
    CHECK(find(text, "YeIe") == string("yeye"));
    CHECK(find(text, "IeYe") == string("yeye"));
    CHECK_THROWS_AS(find(text, "i"), std::exception);
    CHECK_THROWS_AS(find(text, "y"), std::exception);
    CHECK_THROWS_AS(find(text, "I"), std::exception);
    CHECK_THROWS_AS(find(text, "Y"), std::exception);
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}

TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}
TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}
TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}
TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}
TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}TEST_CASE("Test replacement of d and t") {
	string text = "data ddddddd ddd";
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "dada") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "data") == string("data"));
	CHECK(find(text, "tata") == string("data"));
	CHECK(find(text, "tada") == string("data"));

}





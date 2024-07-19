#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Book{
public:
    virtual int get_rental_price(int day) = 0;
};

class ComicBook : public Book{
public:
    int get_rental_price(int day) override{
        int cost = 500;
        day -= 2;
        if(day > 0)
            cost += day * 200;
        return cost;
    }
};

class Novel : public Book{
public:
    int get_rental_price(int day) override{
        int cost = 1000;
        day -= 3;
        if(day > 0)
            cost += day * 300;
        return cost;
    }
};

int solution(vector<string> book_types, int day) {
    Book* books[50];
    int length = book_types.size();
    for(int i = 0; i < length; ++i){
        if(book_types[i] == "comic")
            books[i] = new ComicBook();
        else if(book_types[i] == "novel")
            books[i] = new Novel();
    }
    
    int total_price = 0;
    for(int i = 0; i < length; ++i)
        total_price += books[i]->get_rental_price(day);
    
    return total_price;
}

// The following is main function to output testcase.
int main() {
    vector<string> book_types = {"comic", "comic", "novel"};
    int day = 4;
    int ret = solution(book_types, day);

    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}

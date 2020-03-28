// Section 13
// Move Constructor 
#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Move(int d);
    // Copy Constructor
    Move(const Move &source);
    // Move Constructor
    Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};

 Move::Move(int d)  {
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

// Copy ctor
Move::Move(const Move &source)
    : Move {*source.data} {
        cout << "Copy constructor  - deep copy for: " << *data << endl;
}

//Move ctor
Move::Move(Move &&source) noexcept 
    : data {source.data} {
        source.data = nullptr;
        cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move() {
    if (data != nullptr) {
        cout << "Destructor freeing data for: " << *data << endl;
    } else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main() {
    vector<Move> vec;

//    Move{10} when it's benn called it's been allocated at a temporary var
//    temp, and temp needs to be copied to the vec, that's why we call the copy
//    constructor, but because Move{10} is a r-value, it needs to call the move
//    constructor instead due to efficiency, Move constructor steals the data
//    and assign nullpointer to the source data.
//    In this case the source data is a temp obj, which will be deleted after
//    calling this move constr.

    vec.push_back(Move{10});

    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
     vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});


    return 0;
}


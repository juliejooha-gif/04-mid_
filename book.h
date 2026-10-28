// 1. book.h파일에 book class를 인라인으로 구현하려고 합니다. 다음을 확인하여 위 코드를 변경하여 book.h파일을 완성해보세요. 
// 1-1. 헤더가드, 전처리지시자를 넣으세요.
#include <iostream>
#include <string>
#pragma once
#include <cstdlib>

namespace LeeJuha2630018



class book
{
    std::string title;
    int id;    
    int price; 
    void testID()//id: 1~1000
    {
        if((id < 1) || (id > 1000))
            {std::cout << "Invalid book id\n";
            std::exit(1);}
    }
    void testPrice()//price: 0~50000 won
    {
        if ((price < 0) || (price > 50000))
           { std::cout << "Invalid book price\n";
            std::exit(1);}
    }

    public:
    book(const std::string& t = "no title yet", int d = 1, int p = 0)
    :title{t}, id{d}, price{p}
    {
        testID(); testPrice();
    }    
    void input()//book b; b.input();
    {
        std::cout << "Enter book title: ";
        std::getline(std::cin >> std::ws, title);//std::cin >> title;
        std::cout << "Enter book id: ";
        std::cin >> id; testID();
        std::cout << "Enter book price: ";
        std::cin >> price; testPrice();
    }
    friend std::istream& operator>>(std::istream& is, book& b)
    {
        std::cout << "Enter book title: ";
        std::getline(is >> std::ws, b.title);
        std::cout << "Enter book id: ";
        is >> b.id; b.testID();
        std::cout << "Enter book price: ";
        is >> b.price; b.testPrice();         
        return is;
    }        
    void setID(int d){id = d; testID();}
    void setPrice(int p){price = p; testPrice();}
    void setTitle(const std::string& t){title = t;}
    void print() const
    {
        std::cout << title << "(" << id << "): " << price << " won\n";
    }
    friend std::ostream& operator<<(std::ostream& os, const book& b)
    {
        os << b.title << ", " << b.id << ", " << b.price << " won\n";
        return os;
    }
    const std::string& getTitle() const {return title;}
    int getID() const {return id;}
    int getPrice() const {return price;}

<<<<<<< HEAD
    book operator++(){*this->return book{title, id, ++price};}
    book operator++(int)
    {
        book temp{title, id, price};
        price++;
        return temp;            
    }
=======
    //book operator++(){*this->return book{title, id, ++price};}

    book operator++()
    {
        ++price;
         return *this;
    }


    // book operator++(int)
    // {
    //     book temp{title, id, price};
    //     price++;
    //     return temp;            
    // }

    book operator++(int)
    {
         book temp{*this};
        price++;
        return temp; 
    }           
  



>>>>>>> 327581d (think)
    friend bool operator==(const book& b1, const book& b2)
    {
        return b1.id == b2.id && b1.price == b2.price;
    }
    friend int operator+(const book& b1, const book& b2)
    {
        return b1.price + b2.price;
    }

    // 1-5. 복합할당연산자 +=를 구현하세요. 매개변수는 int, price에 매개변수를 더해줍니다. this를 이용하세요.
<<<<<<< HEAD
    friend int operator+(const price& p1, const price& p2)
    {
        return p1.price + p2.price;
    }
};
=======
//     friend int operator+(const price& p1, const price& p2)
//     {
//         return p1.price + p2.price;
//     }
// };

book& operator+=(int p)
{
    price += p;
    return *this;
}

friend bool operator==(const book& b1, const book& b2)
    {
        return b1.id == b2.id && b1.price == b2.price;
    }
    friend int operator+(const book& b1, const book& b2)
    {
        return b1.price + b2.price;
    }
>>>>>>> 327581d (think)

    
     

// 1-4. 전위증가연산자, 후위증가연산자를 this를 이용해서 구현하세요. 리턴형식도 참조가 필요하면 참조로 리턴하게 변경하세요. 
// 1-5. 복합할당연산자 +=를 구현하세요. 매개변수는 int, price에 매개변수를 더해줍니다. this를 이용하세요.  


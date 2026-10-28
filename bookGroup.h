2. bookGroup.h파일에 bookGroup class를 인라인으로 구현하려고 합니다. 다음을 확인하여 bookGroup.h파일을 완성해보세요.  
#include <iostream>
#include <string>
#include <cstdlib>
#pragma once

const max=100;

namespace LeeJuha2630018
{
    class bookGroup{

        std::string groupName{};
        std::array bookList{max};
        { 
            book bookList;
        }
        int n{0};

        public: 
        bookGroup():
        groupName{g},bookList{b}, n{0} 
        {

        }


    };
// 2-6. addBook멤버함수(매개변수는 const book&형): n(numOfBook)이 max(maxBook)보다 크거나 같으면 프로그램종료, bookList의 n(numOfBook)인덱스변수에 매개변수 할당, n(numOfBook)값은 
// +1

    void addBook(const book& a)
    {
        if((n > max) || (n == max))
            {std::cout << "Invalid book id\n";
            std::exit(1);}
    }
    
    booklist 
// 2-7. print멤버함수: 표준스트림으로 groupName과 bookList를 출력, 이때 bookList는 book형 n(numOfBook)개 출력해야 합니다.
// 2-8. getGroupName, setGroupName 함수를 참조를 이용하여 정의하세요.  
// 2-9. const 멤버함수가 필요한 경우 const 멤버함수로 정의하세요. 

 
    void printgroup(groupName;)
    void printbook(bookList;) const
    { 
        std::cout << book{n} << std::endl; 
    }

    void setGroupName(const std::string &g;){groupName=g;}
    void getGroupName() const{int g;}{groupName=g;}
    void printgroupName();
    void printbookList();
    {
        std::cout <<
        std::cin >> groupName;
    }
     

    


}

    //2-4. 멤버변수는 3개: std::string형의 groupName, book형의 max개의 std::array형 bookList, int형의 n(numOfBook)
// 2-5. 생성자: 매개변수 1개, groupName 초기화, n(numOfBook)은 0으로 초기화
// 2-6. addBook멤버함수(매개변수는 const book&형): n(numOfBook)이 max(maxBook)보다 크거나 같으면 프로그램종료, bookList의 n(numOfBook)인덱스변수에 매개변수 할당, n(numOfBook)값은 +1
// 2-7. print멤버함수: 표준스트림으로 groupName과 bookList를 출력, 이때 bookList는 book형 n(numOfBook)개 출력해야 합니다.
// 2-8. getGroupName, setGroupName 함수를 참조를 이용하여 정의하세요.  
// 2-9. const 멤버함수가 필요한 경우 const 멤버함수로 정의하세요. 

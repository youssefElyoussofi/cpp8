#ifndef MutantStack_hpp
#define MutantStack_hpp

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack(){}
        MutantStack(const MutantStack& mstack):std::stack<T>(mstack){}
        MutantStack& operator=(const MutantStack& mstack){
            if (this != &mstack){
                std::stack<T>::operator=(mstack);
            }
            return *this;
        };
        ~MutantStack(){}
        iterator begin(){
            return this->c.begin();
        }
        iterator end(){
            return this->c.end();
        }
};

#endif
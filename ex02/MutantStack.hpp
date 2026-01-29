#ifndef MutantStack_hpp
#define MutantStack_hpp

#include <stack>

template <typename T>
class MutantStack
{
    private:
        std::stack<T> st;
    public:
        MutantStack(){};
        MutantStack(const MutantStack& m){st = m.st;};
        MutantStack& operator=(const MutantStack& m){
            if (this != &m){ st = m.st;}
            return *this;
        };
        ~MutantStack(){};
        void push(const T& t){st.push(t);}
        void pop(void){st.pop();}
        T* begin(void){
           return &st.top(); 
        }
        T* end(void){
            std::stack<T> tmp;
            T* ptr;
            while (st.size() != 1){
                tmp.push(st.top());
                st.pop();
            }
            ptr = &st.top();
            while (!tmp.empty()){
                st.push(tmp.top());
                tmp.pop();
            }
            return ptr;
        }
        
};

#endif
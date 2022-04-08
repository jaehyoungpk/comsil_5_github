#include "LinkedList.h"

template <typename T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){
			if(this->first == NULL)
				return false;
			element = this->first->data;
			Node<T> *t =this->first;
			this->first = this->first->link;
			delete t;
			this->current_size--;

			return true;
			}
};

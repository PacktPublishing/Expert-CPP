#include "ch13_tdd_v1.h"
using namespace std;

template< class T>
Mat<T>::Mat(const uint32_t m, const uint32_t n)
	: m_rows(m)
	, m_cols(n)
	, m_buf(NULL)
{
	creatBuf();
}

template< class T>
Mat<T> :: ~Mat()
{ 
	deleteBuf(); 
}

template< class T>
void Mat<T>::creatBuf()
{
	uint32_t sz = m_rows * m_cols;
	if (sz > 0) {
		if (m_buf) { deleteBuf();}
		m_buf = new T[sz];
		assert(m_buf);
	}
	else {
		m_buf = NULL;
	}
}

template< class T>
void Mat<T>::deleteBuf()
{
	if (m_buf) {
		delete[] m_buf;
		m_buf = NULL;
	}
}

template< class T>
void Mat<T> ::print(const char* str) const
{
	cout << str << endl;
	cout << m_rows << " x " << m_cols << "[" << endl;
	const T *p = m_buf;
	for (uint32_t i = 0; i<m_rows; i++) {
		for (uint32_t j = 0; j < m_cols; j++) {
			cout << *p++ << ", ";
		}
		cout << "\n";
	}
	cout << "]\n";
}



#include "ch13_tdd_v3.h"
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
Mat<T>::Mat(const uint32_t m, const uint32_t n, const T initVal)
	: m_rows(m)
	, m_cols(n)
	, m_buf(NULL)
{
	creatBuf();
	for (uint32_t i = 0; i < numel(); ++i) {
		m_buf[i] = initVal;
	}
}

template< class T>
Mat<T>::Mat(const Mat<T> &rhs)
	: m_rows(rhs.rows())
	, m_cols(rhs.cols())
	, m_buf(NULL)
{
	creatBuf();
	if (m_buf) {
		memcpy(m_buf, rhs.data(), rhs.numel() * sizeof(T));
	}
}

template< class T>
Mat<T>& Mat<T>::operator=(const Mat<T> &rhs)
{
	if (this != &rhs) {
		m_rows = rhs.rows();
		m_cols = rhs.cols();
		if (numel() != rhs.numel()) {
			creatBuf();
		}
		if (m_buf) {
			memcpy(m_buf, rhs.data(), rhs.numel() * sizeof(T));
		}
	}
	return *this;
}

template< class T>
Mat<T> Mat<T>::operator+(const Mat<T> &rhs)
{
	return elementWiseOp(*this, rhs, '+');
}

template< class T>
Mat<T> Mat<T>::operator-(const Mat<T> &rhs)
{
	return elementWiseOp(*this, rhs, '-');
}
template< class T>
Mat<T> Mat<T>::operator*(const Mat<T> &rhs)
{
	return elementWiseOp(*this, rhs, '*');
}

template< class T>
Mat<T> Mat<T>::operator/(const Mat<T> &rhs)
{
	return elementWiseOp(*this, rhs, '/');
}

template< class T>
Mat<T> Mat<T>::elementWiseOp(const Mat<T> &x, const Mat<T> &y, const char flag)
{
	assert( x.numel() == y.numel() );

	Mat<T> z(x);
	const T* py = y.data();
	T* pz = z.data2();
	if (flag == '+') {
		for (uint32_t i = 0; i < x.numel(); ++i, ++py, ++pz) {
			*pz += *py;
		}
	}
	else if (flag == '-') {
		for (uint32_t i = 0; i < x.numel(); ++i, ++py, ++pz) {
			*pz -= *py;
		}
	}
	else if (flag == '*') {
		for (uint32_t i = 0; i < x.numel(); ++i, ++py, ++pz) {
			*pz *= *py;
		}
	}
	else if (flag == '/') {
		for (uint32_t i = 0; i < x.numel(); ++i, ++py, ++pz) {
			*pz /= *py;  //todo:check *py is not zero
		}
	}
	return z;
}

template< class T>
void Mat<T>::creatBuf()
{
	uint32_t sz = m_rows * m_cols;
	if (sz > 0) {
		if (m_buf) {
			deleteBuf();
		}

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
	cout << str << m_rows << "x" << m_cols << "[" << endl;
	const T *p = m_buf;
	for (uint32_t i = 0; i<m_rows; i++) {
		for (uint32_t j = 0; j < m_cols; j++) {
			cout << *p++ << ", ";
		}
		cout << "\n";
	}
	cout << "]\n";
}



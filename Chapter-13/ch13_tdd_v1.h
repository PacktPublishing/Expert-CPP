//ch13_tdd_v1.h
#ifndef __CH13_TDD_V1__
#define __CH13_TDD_V1__
#include <iostream>
#include <assert.h>
template< class T>
class Mat {
public:
	Mat(const uint32_t m=0, const uint32_t n=0);
	Mat(const Mat<T> &rhs) = delete;
	~Mat();

	Mat<T>& operator = (const Mat<T> &x) = delete;

	uint32_t rows() { return m_rows; }
	uint32_t cols() { return m_cols; }
	void print(const char* str) const;

private:
	void creatBuf();
	void deleteBuf();
	uint32_t m_rows;  //# of rows
	uint32_t m_cols;  //# of cols
	T* m_buf;
};

#include "ch13_tdd_v1.cpp"

#endif


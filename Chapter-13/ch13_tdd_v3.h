//ch13_tdd_v3.h
#ifndef __CH13_TDD_V3__
#define __CH13_TDD_V3__
#include <iostream>
#include <assert.h>
template< class T>
class Mat {
public:
	Mat(const uint32_t m=0, const uint32_t n=0);
	Mat(const uint32_t m, const uint32_t n, const T initVal);
	Mat(const Mat<T> &rhs);
	~Mat();
		
	Mat<T>& operator = (const Mat<T> &rhs);

	//element-wise +,-,*,/ operators
	Mat<T> operator + (const Mat<T> &rhs);
	Mat<T> operator - (const Mat<T> &rhs);
	Mat<T> operator * (const Mat<T> &rhs);
	Mat<T> operator / (const Mat<T> &rhs);

	uint32_t rows()  const { return m_rows; }
	uint32_t cols()  const { return m_cols; }
	uint32_t numel() const { return m_rows * m_cols;}
	bool empty() { return 0==m_rows || 0==m_cols; }

	const T* data() const { 
		return m_buf; 
	}
	
	T* data2(){ 
		return m_buf; 
	}

	bool isSameSize(const Mat<T> &x) const {
		return ( m_rows == x.rows() && m_cols == x.cols() );
	}

	void print(const char* str) const;

private:
	Mat<T> elementWiseOp(const Mat<T> &x, const Mat<T> &y, const char flag);

	void creatBuf();
	void deleteBuf();
	uint32_t m_rows;  //# of rows
	uint32_t m_cols;  //# of cols
	T* m_buf;
};

#include "ch13_tdd_v3.cpp"

#endif


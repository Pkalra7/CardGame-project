#pragma once
template<class T>
Class Point2D{
public:
	T d_x, T d_y;
public:
	Point2D();
	Point2D(T _x, T _y) :d_x(_x), d_y(_y) {}
	Point2D<T> add(const Point2D<T>& o_point) const
	{
		Point2D<T> res;
		res.d_x = d_x + o_point.d_x;
		res.d_y = d_y + o_point.d_y;

		return res;
	}
}
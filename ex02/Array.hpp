/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:36:49 by blaurent          #+#    #+#             */
/*   Updated: 2023/08/14 13:26:26 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:
	T				*_array;
	unsigned int	_n;
public:

	Array() : _array(new T()), _n(0) {};

	Array(unsigned int n) : _array( new T[n] ), _n(n) {};

	Array(const Array& src) : _array(new T[src.size()]), _n(src.size())
	{
        for ( unsigned int i = 0 ; i < _n ; i++ )
            _array[i] = src._array[i];
    };

	~Array() { delete []_array; }



	Array& operator=(const Array& rhs)
	{
        if (this != &rhs)
		{
            delete [] _array;
            _array = new T[rhs.size()];
            _n = rhs._n;
            for ( unsigned int i = 0 ; i < _n ; i++ )
                _array[i] = rhs._array[i];
        }
        return *this;
    }

	T& operator[](unsigned int i) const
	{
		if ( i >= _n )
			throw OutOfBoundsException();
		return _array[i];
	}



	unsigned int size() const { return _n; }
	

	class OutOfBoundsException : public std::exception
	{
        public:
            virtual const char* what() const throw() { return "Index is out of bounds";}
    };
};

template < typename T >
std::ostream& operator<<(std::ostream& output, const Array<T>& array)
{
	for ( unsigned int i = 0 ; i < array.size() ; i++ )
		output << array[i] << " ";
	return output;
}

#endif
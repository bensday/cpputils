/*
Copyright (c) 2017, https://github.com/bensday
All rights reserved.

BSD 3-Clause License

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

* Neither the name of the copyright holder nor the names of its
contributors may be used to endorse or promote products derived from
this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#if !defined(cpputils_StringConstant_h)
#define cpputils_StringConstant_h

#include <iosfwd>
#include <memory>
#include <initializer_list>
#include <allocators>

namespace bsd
{
namespace cpputils
{

template<class charT, class traits = std::char_traits<charT>,
class Allocator = std::allocator<charT> >
class BasicStringConstant;

template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(BasicStringConstant<charT, traits, Allocator>&& lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(const BasicStringConstant<charT, traits, Allocator>& lhs,
	BasicStringConstant<charT, traits, Allocator>&& rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(BasicStringConstant<charT, traits, Allocator>&& lhs,
	BasicStringConstant<charT, traits, Allocator>&& rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(const charT* lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);

template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(const charT* lhs,
	BasicStringConstant<charT, traits, Allocator>&& rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(charT lhs, const BasicStringConstant<charT, traits, Allocator>& rhs);

template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(charT lhs, BasicStringConstant<charT, traits, Allocator>&& rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const charT* rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(BasicStringConstant<charT, traits, Allocator>&& lhs,
	const charT* rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(const BasicStringConstant<charT, traits, Allocator>& lhs, charT rhs);
template<class charT, class traits, class Allocator>
BasicStringConstant<charT, traits, Allocator>
operator+(BasicStringConstant<charT, traits, Allocator>&& lhs, charT rhs);
template<class charT, class traits, class Allocator>
bool operator==(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs) noexcept;
template<class charT, class traits, class Allocator>
bool operator==(const charT* lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);

template<class charT, class traits, class Allocator>
bool operator==(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const charT* rhs);
template<class charT, class traits, class Allocator>
bool operator!=(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs) noexcept;
template<class charT, class traits, class Allocator>
bool operator!=(const charT* lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);
template<class charT, class traits, class Allocator>
bool operator!=(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const charT* rhs);

template<class charT, class traits, class Allocator>
bool operator< (const BasicStringConstant<charT, traits, Allocator>& lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs) noexcept;
template<class charT, class traits, class Allocator>
bool operator< (const BasicStringConstant<charT, traits, Allocator>& lhs,
	const charT* rhs);
template<class charT, class traits, class Allocator>
bool operator< (const charT* lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);
template<class charT, class traits, class Allocator>
bool operator> (const BasicStringConstant<charT, traits, Allocator>& lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs) noexcept;
template<class charT, class traits, class Allocator>
bool operator> (const BasicStringConstant<charT, traits, Allocator>& lhs,
	const charT* rhs);
template<class charT, class traits, class Allocator>
bool operator> (const charT* lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);
template<class charT, class traits, class Allocator>
bool operator<=(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs) noexcept;
template<class charT, class traits, class Allocator>
bool operator<=(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const charT* rhs);
template<class charT, class traits, class Allocator>
bool operator<=(const charT* lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);
template<class charT, class traits, class Allocator>
bool operator>=(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs) noexcept;
template<class charT, class traits, class Allocator>
bool operator>=(const BasicStringConstant<charT, traits, Allocator>& lhs,
	const charT* rhs);
template<class charT, class traits, class Allocator>
bool operator>=(const charT* lhs,
	const BasicStringConstant<charT, traits, Allocator>& rhs);

template<class charT, class traits, class Allocator>
void swap(BasicStringConstant<charT, traits, Allocator>& lhs,
	BasicStringConstant<charT, traits, Allocator>& rhs);
// 21.4.8.9, inserters and extractors:
template<class charT, class traits, class Allocator>
std::basic_istream<charT, traits>&
operator >> (std::basic_istream<charT, traits>& is,
	BasicStringConstant<charT, traits, Allocator>& str);
template<class charT, class traits, class Allocator>
std::basic_ostream<charT, traits>&
operator<<(std::basic_ostream<charT, traits>& os,
	const BasicStringConstant<charT, traits, Allocator>& str);
template<class charT, class traits, class Allocator>
std::basic_istream<charT, traits>&
getline(std::basic_istream<charT, traits>& is,
	BasicStringConstant<charT, traits, Allocator>& str,
	charT delim);
template<class charT, class traits, class Allocator>
std::basic_istream<charT, traits>&
getline(std::basic_istream<charT, traits>&& is,
	BasicStringConstant<charT, traits, Allocator>& str,
	charT delim);
template<class charT, class traits, class Allocator>
std::basic_istream<charT, traits>&
getline(std::basic_istream<charT, traits>& is,
	BasicStringConstant<charT, traits, Allocator>& str);
template<class charT, class traits, class Allocator>
std::basic_istream<charT, traits>&
getline(std::basic_istream<charT, traits>&& is,
	BasicStringConstant<charT, traits, Allocator>& str);

// BasicStringConstant typedef names
typedef BasicStringConstant<char> StringConstant;
typedef BasicStringConstant<char16_t> u16StringConstant;
typedef BasicStringConstant<char32_t> u32StringConstant;
typedef BasicStringConstant<wchar_t> WStringConstant;

int stoi(const StringConstant& str, size_t *idx = 0, int base = 10);
long stol(const StringConstant& str, size_t *idx = 0, int base = 10);
unsigned long stoul(const StringConstant& str, size_t *idx = 0, int base = 10);
long long stoll(const StringConstant& str, size_t *idx = 0, int base = 10);
unsigned long long stoull(const StringConstant& str, size_t *idx = 0, int base = 10);
float stof(const StringConstant& str, size_t *idx = 0);
double stod(const StringConstant& str, size_t *idx = 0);
long double stold(const StringConstant& str, size_t *idx = 0);
StringConstant to_string(int val);
StringConstant to_string(unsigned val);
StringConstant to_string(long val);
StringConstant to_string(unsigned long val);
StringConstant to_string(long long val);
StringConstant to_string(unsigned long long val);
StringConstant to_string(float val);
StringConstant to_string(double val);
StringConstant to_string(long double val);

int stoi(const WStringConstant& str, size_t *idx = 0, int base = 10);
long stol(const WStringConstant& str, size_t *idx = 0, int base = 10);
unsigned long stoul(const WStringConstant& str, size_t *idx = 0, int base = 10);
long long stoll(const WStringConstant& str, size_t *idx = 0, int base = 10);
unsigned long long stoull(const WStringConstant& str, size_t *idx = 0, int base = 10);
float stof(const WStringConstant& str, size_t *idx = 0);
double stod(const WStringConstant& str, size_t *idx = 0);
long double stold(const WStringConstant& str, size_t *idx = 0);
WStringConstant to_wstring(int val);
WStringConstant to_wstring(unsigned val);
WStringConstant to_wstring(long val);
WStringConstant to_wstring(unsigned long val);
WStringConstant to_wstring(long long val);
WStringConstant to_wstring(unsigned long long val);
WStringConstant to_wstring(float val);
WStringConstant to_wstring(double val);
WStringConstant to_wstring(long double val);

// 21.6, hash support:
template <class T> struct hash;
template <> struct hash<StringConstant >;
template <> struct hash<u16StringConstant >;
template <> struct hash<u32StringConstant >;
template <> struct hash<WStringConstant>;

inline namespace literals {
	inline namespace string_literals {
		// 21.7, suffix for BasicStringConstant literals:
#if 0
		string operator "" s(const char *str, size_t len);
		u16string operator "" s(const char16_t *str, size_t len);
		u32string operator "" s(const char32_t *str, size_t len);
		wstring operator "" s(const wchar_t *str, size_t len);
#endif
	}
}

template<class charT, class traits, class Allocator>
class BasicStringConstant
{
public:
	// types:
	typedef traits traits_type;
	typedef typename traits::char_type value_type;
	typedef Allocator allocator_type;
	typedef typename std::allocator_traits<Allocator>::size_type size_type;
	typedef typename std::allocator_traits<Allocator>::difference_type difference_type;
	typedef value_type& reference;
	typedef const value_type& const_reference;
	typedef typename std::allocator_traits<Allocator>::pointer pointer;
	typedef typename std::allocator_traits<Allocator>::const_pointer const_pointer;
	typedef value_type *iterator; // See 23.2
	typedef const value_type *const_iterator; // See 23.2
	typedef std::reverse_iterator<iterator> reverse_iterator;
	typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
	static const size_type npos = -1;

	// 21.4.2, construct/copy/destroy:
	template <size_type N>
	constexpr BasicStringConstant(const charT (& str)[N]) :
		m_begin(str), m_size(N)
	{}
		

	explicit BasicStringConstant(const Allocator& a = Allocator());
	BasicStringConstant(const BasicStringConstant& str);
	BasicStringConstant(BasicStringConstant&& str) noexcept;
	BasicStringConstant(const BasicStringConstant& str, size_type pos, size_type n = npos,
		const Allocator& a = Allocator());
	BasicStringConstant(const charT* s,
		size_type n, const Allocator& a = Allocator());
	BasicStringConstant(const charT* s, const Allocator& a = Allocator());
	BasicStringConstant(size_type n, charT c, const Allocator& a = Allocator());
	template<class InputIterator>
	BasicStringConstant(InputIterator begin, InputIterator end,
		const Allocator& a = Allocator());
	BasicStringConstant(std::initializer_list<charT>, const Allocator& = Allocator());
	BasicStringConstant(const BasicStringConstant&, const Allocator&);
	BasicStringConstant(BasicStringConstant&&, const Allocator&);
	~BasicStringConstant() {}
	BasicStringConstant& operator=(const BasicStringConstant& str);
	BasicStringConstant& operator=(BasicStringConstant&& str) noexcept;
	BasicStringConstant& operator=(const charT* s);
	BasicStringConstant& operator=(charT c);
	BasicStringConstant& operator=(std::initializer_list<charT>);

	// 21.4.3, iterators:
	iterator begin() noexcept { return m_begin; }
	constexpr const_iterator begin() const noexcept { return m_begin; }
	iterator end() noexcept { return m_begin + m_size; }
	constexpr const_iterator end() const noexcept { return m_begin + m_size; }
	reverse_iterator rbegin() noexcept { return m_size == 0 ? m_begin : m_begin + m_size -1; }
	constexpr const_reverse_iterator rbegin() const noexcept { return m_size == 0 ? m_begin : m_begin + m_size - 1; }
	reverse_iterator rend() noexcept { return m_begin - 1;  }
	constexpr const_reverse_iterator rend() const noexcept { return m_begin - 1; }
	constexpr const_iterator cbegin() const noexcept { return m_begin; }
	constexpr const_iterator cend() const noexcept { return m_begin; }
	constexpr const_reverse_iterator crbegin() const noexcept { return m_size == 0 ? m_begin : m_begin + m_size - 1; }
	constexpr const_reverse_iterator crend() const noexcept { return m_size == 0 ? m_begin : m_begin + m_size - 1; }

	// 21.4.4, capacity:
	constexpr size_type size() const noexcept { return m_size;  }
	constexpr size_type length() const noexcept { return m_size; }
	constexpr size_type max_size() const noexcept { return m_size; }
	void resize(size_type n, charT c);
	void resize(size_type n);
	size_type capacity() const noexcept { return m_size; }
	void reserve(size_type res_arg = 0);
	void shrink_to_fit();
	void clear() noexcept;
	constexpr void clear() const noexcept;
	constexpr bool empty() const noexcept { return m_size==0; }

	// 21.4.5, element access:
	constexpr const_reference operator[](size_type pos) const;
	reference operator[](size_type pos);
	constexpr const_reference at(size_type n) const;
	reference at(size_type n);
	constexpr const charT& front() const { return *m_begin; }
	charT& front();
	constexpr const charT& back() const { return *m_begin; }
	charT& back();

	// 21.4.6, modifiers:
	BasicStringConstant& operator+=(const BasicStringConstant& str);
	BasicStringConstant& operator+=(const charT* s);
	BasicStringConstant& operator+=(charT c);

	BasicStringConstant& operator+=(std::initializer_list<charT>);
	BasicStringConstant& append(const BasicStringConstant& str);
	BasicStringConstant& append(const BasicStringConstant& str, size_type pos,
		size_type n);
	BasicStringConstant& append(const charT* s, size_type n);
	BasicStringConstant& append(const charT* s);
	BasicStringConstant& append(size_type n, charT c);
	template<class InputIterator>
	BasicStringConstant& append(InputIterator first, InputIterator last);
	BasicStringConstant& append(std::initializer_list<charT>);
	void push_back(charT c);
	BasicStringConstant& assign(const BasicStringConstant& str);
	BasicStringConstant& assign(BasicStringConstant&& str) noexcept;
	BasicStringConstant& assign(const BasicStringConstant& str, size_type pos,
		size_type n);
	BasicStringConstant& assign(const charT* s, size_type n);
	BasicStringConstant& assign(const charT* s);
	BasicStringConstant& assign(size_type n, charT c);
	template<class InputIterator>
	BasicStringConstant& assign(InputIterator first, InputIterator last);
	BasicStringConstant& assign(std::initializer_list<charT>);

	BasicStringConstant& insert(size_type pos1, const BasicStringConstant& str);
	BasicStringConstant& insert(size_type pos1, const BasicStringConstant& str,
		size_type pos2, size_type n);
	BasicStringConstant& insert(size_type pos, const charT* s, size_type n);
	BasicStringConstant& insert(size_type pos, const charT* s);
	BasicStringConstant& insert(size_type pos, size_type n, charT c);
	iterator insert(const_iterator p, charT c);
	iterator insert(const_iterator p, size_type n, charT c);
	template<class InputIterator>
	iterator insert(const_iterator p, InputIterator first, InputIterator last);
	iterator insert(const_iterator p, std::initializer_list<charT>);
	BasicStringConstant& erase(size_type pos = 0, size_type n = npos);
	iterator erase(const_iterator p);
	iterator erase(const_iterator first, const_iterator last);
	void pop_back();

	BasicStringConstant& replace(size_type pos1, size_type n1,
		const BasicStringConstant& str);
	BasicStringConstant& replace(size_type pos1, size_type n1,
		const BasicStringConstant& str,
		size_type pos2, size_type n2);
	BasicStringConstant& replace(size_type pos, size_type n1, const charT* s,
		size_type n2);
	BasicStringConstant& replace(size_type pos, size_type n1, const charT* s);
	BasicStringConstant& replace(size_type pos, size_type n1, size_type n2,
		charT c);
	BasicStringConstant& replace(const_iterator i1, const_iterator i2,
		const BasicStringConstant& str);
	BasicStringConstant& replace(const_iterator i1, const_iterator i2, const charT* s,
		size_type n);

	BasicStringConstant& replace(const_iterator i1, const_iterator i2, const charT* s);
	BasicStringConstant& replace(const_iterator i1, const_iterator i2,
		size_type n, charT c);
	template<class InputIterator>
	BasicStringConstant& replace(const_iterator i1, const_iterator i2,
		InputIterator j1, InputIterator j2);
	BasicStringConstant& replace(const_iterator, const_iterator, std::initializer_list<charT>);
	size_type copy(charT* s, size_type n, size_type pos = 0) const;
	void swap(BasicStringConstant& str);

	// 21.4.7, string operations:
	constexpr const charT* c_str() const noexcept;
	constexpr const charT* data() const noexcept;
	allocator_type get_allocator() const noexcept;
	size_type find(const BasicStringConstant& str, size_type pos = 0) const noexcept;
	size_type find(const charT* s, size_type pos, size_type n) const;
	size_type find(const charT* s, size_type pos = 0) const;
	size_type find(charT c, size_type pos = 0) const;
	size_type rfind(const BasicStringConstant& str, size_type pos = npos) const noexcept;
	size_type rfind(const charT* s, size_type pos, size_type n) const;
	size_type rfind(const charT* s, size_type pos = npos) const;
	size_type rfind(charT c, size_type pos = npos) const;
	size_type find_first_of(const BasicStringConstant& str,
		size_type pos = 0) const noexcept;
	size_type find_first_of(const charT* s,
		size_type pos, size_type n) const;
	size_type find_first_of(const charT* s, size_type pos = 0) const;
	size_type find_first_of(charT c, size_type pos = 0) const;
	size_type find_last_of(const BasicStringConstant& str,
		size_type pos = npos) const noexcept;

	size_type find_last_of(const charT* s,
		size_type pos, size_type n) const;
	size_type find_last_of(const charT* s, size_type pos = npos) const;
	size_type find_last_of(charT c, size_type pos = npos) const;
	size_type find_first_not_of(const BasicStringConstant& str,
		size_type pos = 0) const noexcept;
	size_type find_first_not_of(const charT* s, size_type pos,
		size_type n) const;
	size_type find_first_not_of(const charT* s, size_type pos = 0) const;
	size_type find_first_not_of(charT c, size_type pos = 0) const;
	size_type find_last_not_of(const BasicStringConstant& str,
		size_type pos = npos) const noexcept;
	size_type find_last_not_of(const charT* s, size_type pos,
		size_type n) const;
	size_type find_last_not_of(const charT* s,
		size_type pos = npos) const;
	size_type find_last_not_of(charT c, size_type pos = npos) const;
	BasicStringConstant substr(size_type pos = 0, size_type n = npos) const;

	constexpr int compare(const BasicStringConstant& str) const noexcept;
	int compare(size_type pos1, size_type n1,
		const BasicStringConstant& str) const;
	int compare(size_type pos1, size_type n1,
		const BasicStringConstant& str,
		size_type pos2, size_type n2) const;
	int compare(const charT* s) const;
	int compare(size_type pos1, size_type n1,
		const charT* s) const;
	int compare(size_type pos1, size_type n1,
		const charT* s, size_type n2) const;

	private:
		const charT * m_begin;
		const size_type m_size;
	
};

}}

#endif

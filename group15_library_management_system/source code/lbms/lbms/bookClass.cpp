#include "StdAfx.h"
#include "bookClass.h"


#include<string>
#include<vector>
#include<algorithm>
using namespace std;


//This compares compare_count value of two books. This is used in sort function which sorts books according to compare_count;
bool compare2Books( book a, book b )
{
	return a.compare_count < b.compare_count;
}

bookClass::bookClass(void)
{}

//This function inserts new book into the class . The function are arguments are details of the book.
void bookClass::insert(string title,string author,string rackNo,string publisher,string subject ,string titleId, float compare_count)
{
	//creating a new book and filling its details.
	book NewBook;
	NewBook.title = title;
	NewBook.author = author;
	NewBook.rackNo = rackNo;
	NewBook.publisher = publisher;
	NewBook.subject = subject;
	NewBook.titleId = titleId;
	NewBook.compare_count = compare_count;

	//pusing the book into the vector
	v.push_back(NewBook);
}

//The below functions returns details of books.
int bookClass::count()
{
	return v.size();
}

string bookClass::Title(int i)
{
	return v[i].title;
}

string bookClass::Author(int i)
{
	return v[i].author;
}

string bookClass::RackNo(int i)
{
	return v[i].rackNo;
}

string bookClass::Subject(int i)
{
	return v[i].subject;
}

string bookClass::Publisher(int i)
{
	return v[i].publisher;
}

string bookClass::TitleId(int i)
{
	return v[i].titleId;
}

//This function sorts books according to compare_counts

void bookClass::sort()
{
	//sort function is an stl function which sorts entries
	std::sort( v.begin() , v.end(), compare2Books );
}

//This function clears books present in the vector.
//This is used when the users enters another search query. This removes books present in previous search query.
void bookClass::clear()
{
	v.clear();
}



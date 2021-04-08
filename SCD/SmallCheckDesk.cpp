#include <iostream>
#include <cstring>

class Person {
private:
	char pName[30];//name
	int pAge;//age
	short behaRating;//1 to 10 how considerate
	short combinedOpinion = 0;//rating comined between movie quality enviroment and "behaRating"

	void calcolateCO(Movie m) 
	{
	 
	}

public:

	Person() 
	{
	}

	Person(char* _pName, int _pAge, short _behaRating) 
	{
		strcpy_s(this->pName, strlen(_pName) + 1, _pName);
		this->pAge = _pAge;
		this->behaRating = _behaRating;
	}

	char getPname() 
	{
		return *pName;
	}

	void setPname(const char* pName) 
	{
		strcpy_s(this->pName, strlen(pName) + 1, pName);
	}

	int getPage() 
	{
		return pAge;
	}

	void setPage(const int pAge) 
	{
		this->pAge = pAge;
	}

	short getBehaRating() 
	{
		return behaRating;
	}

	void setBehaRating(const short behaRating)
	{
		this->behaRating = (short)behaRating;
	}

	short getCombinedOpinion() 
	{
		return combinedOpinion;
	}

	void setCombinedOpinion(const short combinedOpinion)
	{
		this->combinedOpinion = (short)combinedOpinion;
	}

	void printPersonData() {
		std::cout << std::endl;

		std::cout << "| Person's name: " << pName << std::endl;
		std::cout << "| Person's age: " << pAge << std::endl;
		std::cout << "| Person's behaviour level: " << behaRating << std::endl;
		std::cout << "| Person's overall opinion of the experience: " << combinedOpinion << std::endl;

		
	}

	
	
	


};

class Movie
{
private:
	char* movieName = new char[];//30
	short ageAfter;
	short movieRating;

public:
	Movie(){
	
	}

	Movie(char *movieName, short ageAfter, short movieRating) 
	{
		strcpy_s(this->movieName , strlen(movieName), movieName);
		this->ageAfter = (short)ageAfter;
		this->movieRating = (short)movieRating;
	}

	char getMovieName()
	{
		return *movieName;
	}

	void setMovieName(char* name) 
	{
		strcpy_s(this->movieName, strlen(name) + 1, name);
	}

	short getAgeAfter() 
	{
		return ageAfter;
	}

	void setAgeAfter(short age) 
	{
		this->ageAfter = age;
	}

	short getMovieRating() 
	{
		return movieRating;
	}

	void setMovieRating(short movieRating)
	{
		this->movieRating = movieRating;
	}

	void printMovieData() 
	{

	}

};

class Ticket
{
private:
	Person person;
	Movie movie;
	char buyerName[30];
	float ticketPrice;
	char movieName[30];

public:
	Ticket() 
	{
		strcpy_s(buyerName, 6 , "Empty");
		strcpy_s(movieName, 6, "Empty");
		this->ticketPrice = 20.0;

	}// Ticket default data;

	Ticket(char* buyerName, float ticketPrice, char* movieName) 
	{
		strcpy_s(this->buyerName, strlen(buyerName) + 1, buyerName);
		strcpy_s(this->movieName, strlen(movieName), movieName);
		this->ticketPrice = ticketPrice;
	}

	

};

class Room
{
private:
	short roomNum;
};

class CashDesk {
private:
	char cashDeskName[30];
	short cdPriceRating;//1 to 10 (controls ticket price)
	Ticket arr[30];//Ticket obj stash
	int cTicketCount = 30;//Ticket counter



};

Person createPerson() 
{
	Person person;
	char subArr[30];
	int sub = 0;
	

	std::cout << "Enter your name: ";
	std::cin.getline(subArr, 30);
	person.setPname(subArr);

	std::cout << std::endl;

	std::cout << "Enter your age: ";
	std::cin >> sub;
	person.setPage(sub);


	std::cout << std::endl;

	do 
	{
		std::cout << "Enter behaviout rating from 1 to 10: ";
		std::cin >> sub;
		std::cout << std::endl;

	} while (sub > 10 || sub < 1  );

	person.setBehaRating(sub);

	return person;


}

int main() {
	
	//Person p1 = createPerson();
	//p1.printPersonData();
	
	Movie m1;

	return 0;
}
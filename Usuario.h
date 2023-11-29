#ifndef Usuario_h
#define Usuario_h
#include <string>

class Usuario
{
protected:
	std::string user;
private:
	std::string password;
public:
	Usuario(std::string usr);
	void setUser(std::string usr);
	void setPassword(std::string password);
	std::string getUser() const;
	std::string getPassword() const;
};
#endif

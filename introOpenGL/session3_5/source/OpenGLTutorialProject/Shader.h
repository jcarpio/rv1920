#ifndef SHADER_H
#define SHADER_H

#include <string>


class Shader
{
public:
	Shader(const std::string& fileName);
	virtual ~Shader();

protected:

private:
	Shader(const Shader& other) {}
	void operator=(const Shader& other) {}

};


#endif // SHADER_H
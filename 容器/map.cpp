#include <iostream>
#include <map>
#include <typeinfo>


int main() {
	/*
	1、创建map
	2、给map赋值
	3、修改map
	4、读取map
	*/
	// 1、创建map
	std::map<std::string, std::string> mapTest;


	// 2、给map赋值
	mapTest = {
		{"one", "1"},
		{"two", "2"},
	};

	mapTest["three"] = "3";

	// 3、修改map
	// mapTest["one"] = "first";

	// 4、读取map
	std::cout << mapTest["one"] << std::endl;

	/*
		// c++98
		std::map<std::string, std::string>::iterator it;
		for (it = mapTest.begin(); it != mapTest.end(); ++it)
		{
			std::cout << it->first << ": " << it->second << std::endl;
		}
	*/

	
		// c++11 , 可以使用auto关键字
		// it 是map中的iterator类型
	 	for (auto it = mapTest.begin(); it != mapTest.end(); ++it)
		{
			std::cout << it->first << ": " << it->second << std::endl;
		}

		// it 是mapTest序列中每个元素变量的声明， 使用引用是不让内存复制一份，加上const是不让修改里面的元素
		for (const auto& it : mapTest)
		{
			std::cout << it.first << ": " << it.second << std::endl;
		}
	

	// c++17
	// for (const auto& [key, value] : mapTest)
	// {
	// 	std::cout << key << ": " << value << std::endl;
 	// }


	return 0;
}
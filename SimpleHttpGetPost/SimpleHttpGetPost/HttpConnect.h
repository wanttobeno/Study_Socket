#include <string>
#pragma once
class HttpConnect
{
private:
	std::string m_strGetResult;
public:
	HttpConnect();
	~HttpConnect();
	void socketHttp(std::string host, std::string request);
	void postData(std::string host, std::string path, std::string post_content);
	void getData(std::string host, std::string path, std::string get_content);

	// 获取请求的结果
	std::string GetLastRequestResult();
};


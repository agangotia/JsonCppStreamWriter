// testJson.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <fstream> 
#include <json/json.h>

int _tmain(int argc, _TCHAR* argv[])
{
//		Json::Value fromScratch;
//Json::Value array;
//array.append("hello");
//array.append("world");
//fromScratch["hello"] = "world";
//fromScratch["number"] = 2;
//fromScratch["array"] = array;
//fromScratch["object"]["hello"] = "world";
//std::cout << fromScratch << std::endl;
//	Json::Value event;   
//    Json::Value vec(Json::arrayValue);
//    vec.append(Json::Value(1));
//    vec.append(Json::Value(2));
//    vec.append(Json::Value(3));
//
//    event["competitors"]["home"]["name"] = "Liverpool";
//    event["competitors"]["away"]["code"] = 89223;
//    event["competitors"]["away"]["name"] = "Aston Villa";
//    event["competitors"]["away"]["code"]=vec;
//
//    std::cout << event << std::endl;
//Json::StyledStreamWriter writer;
//std::string fNam="out.json";
//std::ofstream out(fNam.c_str(),std::ofstream::out);
//writer.write(out,event);

//Json::StyledStreamWriter writer;
//std::string fNam="out.json";
//std::ofstream out(fNam.c_str(),std::ofstream::out);
//
//out<<"[";
//for(int i=0;i<10;i++){
//	Json::Value event;
//	event["File Name"] = "f";
//	event["Path"] = "p";
//	event["Extension"] = "L";
//	event["Top Level Directory"] = "D";
//	if(i==9)
//		writer.write(out,event);
//	else
//	{
//		writer.write(out,event);
//		out<<",";
//	}
//	
//}
//out<<"]";

//	Json::StyledStreamWriter writer;
//std::string fNam="out.json";
//std::ofstream out(fNam.c_str(),std::ofstream::out);
//Json::Value root;
//Json::Value array1;
//for(int i=0;i<10;i++){
//	Json::Value event;
//	event["File Name"] = "f";
//	event["Path"] = "p";
//	event["Extension"] = "L";
//	event["Top Level Directory"] = "D";
//	array1.append(event);
//	
//}
//root["Files"]=array1;
//writer.write(out,root);

		Json::StyledStreamWriter writer;
std::string fNam="out.json";
std::ofstream out(fNam.c_str(),std::ofstream::out);
out<<"{\n";//start element
out<<"\t \"Files\" :";//element value
out<<" [\n";
for(int i=0;i<10;i++){
	out<<"\t\t{\n";
	 out<<"\t\t\t \"Extension\" : \"Value1\",\n";
	out<<"\t\t\t \"fname\" : \"Value2\"\n";
	if(i==9)
	out<<"\t\t}\n";
	else
	out<<"\t\t},\n";
}
out<<"\t ]\n";
out<<"}";
	return 0;
}


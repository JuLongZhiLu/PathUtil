#include <string>

class PathUtil {
public:
	/**
	 * @brief 
	 * Normalizes a path by replacing all "/" with "\" .
	 *
	 * @example
	 * std::string result=PathUtil::normalize("C:/Program Files/data/config.json");
	 * //result = "C:\Program Files\data\config.json"
	 *
	 */
	static std::string normalize(const std::string& path) {
		return replaceAll(path, "/", "\\");
	}
	
private:
	static std::string replaceAll(std::string str, const std::string& from, const std::string& to) {
		if (from.empty()) return str;
		
		size_t start_pos = 0;
		while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
			str.replace(start_pos, from.length(), to);
			start_pos += to.length(); // Skip the replaced part to avoid infinite loops
		}
		return str;
	}
};

In Windows, Normalizes a path by replacing all "/" with "\\" .

```c++
#include <iostream>
#include "path_util.h"

int main(){
  std::string result=PathUtil::normalize("C:/Program Files/data/config.json");
	std::cout<<result<<std::endl; 
	//output: C:\Program Files\data\config.json
}
```


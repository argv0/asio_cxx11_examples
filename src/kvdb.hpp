#ifndef __KVDB_HPP_
#define __KVDB_HPP_

#include <map>
#include <string>
#include <thread>

class kvdb  {
public:
    std::string& get(const std::string& key) { 
        std::lock_guard<std::mutex> lock(mtx_);
        return map_[key];
    }

    void set(const std::string& key, const std::string& value) {
        std::lock_guard<std::mutex> lock(mtx_);
        map_[key] = value;
    }
private:
    mutable std::mutex mtx_;
    std::map<std::string, std::string> map_;
};

#endif // include guard

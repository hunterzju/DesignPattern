#pragma once
#include <string>
#include <unordered_map>

class Database {
public:
    ~Database() = default;
    static Database &GetInstance() {
        static Database db;
        return db;
    }

    std::string GetNameByEmail(const std::string &email) const {
        auto it = m_map.find(email);
        if (it != m_map.end()) {
            return it->second;
        }
        else {
            return {};
        }
    }

protected:
    Database(const Database &) = delete;
    Database(Database &&) = delete;
    Database &operator=(const Database &) = delete;
    Database &operator=(Database &&) = delete;

private:
    Database() {}

private:
    std::unordered_map<std::string, std::string> m_map{{"zhangsan@inc.com", "zhangsan"},
                                                       {"lisi@inc.com", "lisi"},
                                                       {"wangwu@inc.com","wangwu"}};
};

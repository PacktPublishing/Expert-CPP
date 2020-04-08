static std::shared_ptr<ConnectionManager> get_instance()
{
  
}

namespace Db {

class ConnectionManager 
{
public:
static std::shared_ptr<ConnectionManager> get_instance()
{
    if (instance_ == nullptr) {
        // mutex_ is declared in the private section
        std::lock_guard lg{mutex_};
        if (instance_ == nullptr) { // double-checking
        instance_.reset(new ConnectionManager());
        }
    }
    return instance_;
}

// Database connection related code omitted
private:
static std::shared_ptr<ConnectionManager> instance_{nullptr};
};

}

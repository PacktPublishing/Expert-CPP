namespace Db {
class ConnectionManager 
{
public:
static std::shared_ptr<ConnectionManager> get_instance()
{
    if (instance_ == nullptr) {
    instance_.reset(new ConnectionManager());
    }
    return instance_;
}

// Database connection related code omitted
private:
static std::shared_ptr<ConnectionManager> instance_{nullptr};
};
}
